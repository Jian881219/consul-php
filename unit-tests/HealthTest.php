<?php
use Consulate\Client,
    Consulate\Config;

class HealthTest extends PHPUnit\Framework\TestCase {
    protected $client;

    public function setUp() {
        $conf = Config::newDefaultConfig();
        $conf->setAddress("10.200.150.221:8500");
        
        $client = new Client($conf);
        $this->client = $client->health();
    }

    public function testNode() {
        $resp = $this->client->node("10-200-150-201");
        print_r($resp);
    }

    public function testChecks() {
        $resp = $this->client->checks("go.micro.srv.auth");
        print_r($resp);
    }

    public function testService() {
        list($resp, ) = $this->client->service("go.micro.srv.auth");

        foreach ($resp as $item) {
            print_r($item);
        }
    }
}
