package main

import (
	"fmt"
	"time"
)

func main() {
	startTime := time.Now()

	total := 10_000_000
	i := 0

	for i < total {
		_ = i
		i++
	}

	elapsedTime := time.Since(startTime).Seconds()
	fmt.Println(elapsedTime)
}
