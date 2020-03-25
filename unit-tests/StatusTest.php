<?php
use Consulate\Client,
    Consulate\Config;

class StatusTest extends PHPUnit\Framework\TestCase {
    public function testLeader() {
        $conf = Config::newDefaultConfig();
        $conf->setAddress("10.200.150.221:8500");
        
        $client = new Client($conf);
        $statusClient = $client->status();

        $data = $statusClient->leader();
        $this->assertEquals($data, "10.200.150.201:8300");
    }

    public function testPeers() {
        $conf = Config::newDefaultConfig();
        $conf->setAddress("10.200.150.221:8500");
        
        $client = new Client($conf);
        $statusClient = $client->status();

        $data = $statusClient->peers();
        $this->assertEquals($data, [
            "10.200.150.201:8300"
        ]);
    }
}
