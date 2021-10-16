package main

import "fmt"

func main() {
  q := int('E')
  for a := 65; a < q+1; a++ {
    for b := 65; b < a+1; b++ {
      fmt.Print(string(b) + " ")
    }
    fmt.Println()
  }
}