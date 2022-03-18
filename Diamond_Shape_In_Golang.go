package main
import "fmt"

func main() {
  Height := 9
  Mid := Height/2

  row := 0

  for row < Height {
    if row > Mid {
      col := 0
      for col < row-Mid {
        fmt.Printf(" ")
        col++
      }

      col = row-Mid
      for col < Height-row+Mid {
        fmt.Printf("*")
        col++;
      }
    } else {
      col := 0
      
      for col < Mid-row {
        fmt.Printf(" ")
        col++
      }
      
      col = Mid-row
      for col <= Mid+row{
        fmt.Printf("*")
        col++;
      }
    }
    fmt.Println()
    row++
  }
}
