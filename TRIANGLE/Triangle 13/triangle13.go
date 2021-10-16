package main

import "fmt"

func main() {
  alpha := []string{"E", "D", "C", "B", "A"}
  for j := 0; j < 5; j++ {
    for i := 0; i < len(alpha) - j; i++ {
      fmt.Print(alpha[j] + " ")
    }
    fmt.Println()
  }
}