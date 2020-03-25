<?php
use Consulate\Client,
    Consulate\Config;

class KvTest extends PHPUnit\Framework\TestCase {
    protected $client;

    public function setUp() {
        $conf = config::newdefaultconfig();
        $conf->setaddress("10.200.150.221:8500");
        
        $client = new client($conf);
        $this->client = $client->kv();
    }

    public function testGet() {
        $q = new Consulate\QueryOptions([]);
        $item = $this->client->get("conn/mysql/PLUHomeEntities/password", $q);
        print_r($item);
    }

    public function testList() {
        $q = new Consulate\QueryOptions([]);
        $item = $this->client->list("conn/mysql/PLUHomeEntities", $q);
        print_r($item);
    }

    public function testKeys() {
        $q = new Consulate\QueryOptions([]);
        $item = $this->client->keys("conn/mysql/PLUHomeEntities", $q);
        print_r($item);
    }

    public function testPut() {
        $msg = "test put";

        $item = new Consulate\Api\Kv\Pair([
            'key'    => "test/item",
            'value'  => $msg,
        ]);

        $w = new Consulate\WriteOptions([]);
        $item = $this->client->put($item, $w);

        $q = new Consulate\QueryOptions([]);
        list($item, $qm) = $this->client->get("test/item", $q);
        $this->assertEquals($item->getValue(), $msg);
    }

    public function testCAS() {
        $msg = "test cas";

        $item = new Consulate\Api\Kv\Pair([
            'key'    => "test/casitem",
            'value'  => $msg,
        ]);

        $w = new Consulate\WriteOptions([]);
        $item = $this->client->cas($item, $w);
    }

    public function testDelete() {
        $w = new Consulate\WriteOptions([]);
        $this->client->delete("test/item", $w);
    }

    public function testDeleteCAS() {
        $w = new Consulate\WriteOptions([]);
        $this->client->delete("test/casitem", $w);
    }

    public function testDeleteTree() {
        $w = new Consulate\WriteOptions([]);
        $this->client->delete("test", $w);
    }

    //TODO: txn https://www.consul.io/api/txn.html
}
