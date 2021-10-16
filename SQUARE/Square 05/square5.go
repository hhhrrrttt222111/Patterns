package main

import "fmt"

func main() {
  for i := 0; i < 5; i++ {
    for j := 65; j < 70; j++ {
      fmt.Print(string(j) + " ")
    }
    fmt.Println()
  }
}