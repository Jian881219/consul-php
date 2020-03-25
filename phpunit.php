<?php
if (!isset($_SERVER['SCRIPT_NAME'])) {
    $_SERVER['SCRIPT_NAME'] = null;
}

define('PHPUnit_MAIN_METHOD', 'PHPUnit\TextUI\Command::main');


PHPUnit\TextUI\Command::main();
