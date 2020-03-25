<?php
use Consulate\Client,
    Consulate\Config;

class AgentTest extends PHPUnit\Framework\TestCase {
    protected $client;

    public function setUp() {
        $conf = config::newdefaultconfig();
        $conf->setaddress("10.200.150.221:8500");
        
        $client = new client($conf);
        $this->client = $client->agent();
    }

    public function testSelf() {
        $resp = $this->client->self();
        //print_r($resp);
    }

    public function testMetrics() {
        $resp = $this->client->metrics();
    }

    public function testReload() {
        $resp = $this->client->reload();
    }

    public function testNodeName() {
        $resp = $this->client->nodeName();
        $this->assertEquals($resp, "9-221");
    }

    public function testChecks() {
        $checks = $this->client->checks();
        //print_r($checks);
    }

    public function testServices() {
        $services = $this->client->services();
        print_r($services);
    }

    public function testMembers() {
        $members = $this->client->members();
        print_r($members);
    }

    public function testServiceRegister() {
        $check = new Consulate\Api\Agent\ServiceCheck([
            "deregisterCriticalServiceAfter" => "90m",
            "args" => ["/usr/local/bin/check_redis.py"],
            "http" => "http://localhost:5000/health",
            "interval" => "10s",
            "ttl" => "15s"
        ]);

        $service = new Consulate\Api\Agent\ServiceRegistration([
            "id" => "redis1",
            "name" => "redis",
            "tags" => [
                "primary",
                "v1",
                "v2"
            ],
            "address" => "127.0.0.1",
            "port" => 8000,
            "enableTagOverride" => false,
            "check" => $check
        ]);
        $this->client->serviceRegister($service);

        $this->testServices();
    }

    public function testServiceDeregister() {
        $this->client->serviceDeregister("redis1");

        $this->testServices();
    }
}
