<?php

$startTime = microtime(true);

$test = 0;
$total = 10_000_000;
$i = 0;

while ($i < $total) {
    $test = $i;
    $i++;
}

$endTime = microtime(true);

echo $endTime - $startTime . PHP_EOL;
