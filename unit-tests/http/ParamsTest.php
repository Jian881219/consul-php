<?php

use Consulate\Http\Params;

class ParamsTest extends PHPUnit\Framework\TestCase {
    public function testGet() {
        $params = new Params();

        $this->assertEmpty($params->get("test"));
    }

    public function testSet() {
        $params = new Params();

        $params->set("param1", "value1");

        $this->assertEquals($params->get("param1"), "value1");
    }

    public function testGetAll() {
        $params = new Params();

        $params->add("test", "value1");
        $params->add("test", "value2");

        $this->assertCount(2, $params->getAll("test"));
        $this->assertArraySubset(["value1", "value2"], $params->getAll("test"));
    }

    public function testDelete() {
        $params = new Params();

        $params->set("p1", "v1");
        $params->set("p2", "v2");
        $params->set("p3", "v3");
        $params->set("p4", "v4");

        $this->assertEquals((string)$params, "p1=v1&p2=v2&p3=v3&p4=v4");

        $params->delete("p2");
        $this->assertEquals((string)$params, "p1=v1&p3=v3&p4=v4");
    }

    public function testToString() {
        $params = new Params();

        $params->set("p1", "v1");
        $params->set("p2", "v2");
        $params->set("p3", "v3");
        $params->set("p4", "v4");

        $params->add("tadd", "t1");
        $params->add("tadd", "t2");
        $this->assertEquals((string)$params, "p1=v1&p2=v2&p3=v3&p4=v4&tadd=t1&tadd=t2");
    }

    public function testJson() {
        $params = new Params();

        $params->set("p1", "v1");
        $params->set("p2", "v2");
        $params->set("p3", "v3");
        $params->set("p4", "v4");

        $params->add("tadd", "t1");
        $params->add("tadd", "t2");

        $this->assertJsonStringEqualsJsonString(json_encode($params), json_encode([
            "p1" => ["v1"],
            "p2" => ["v2"],
            "p3" => ["v3"],
            "p4" => ["v4"],
            "tadd" => ["t1","t2"]
        ]));
    }
}
