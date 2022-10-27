package main
import "fmt"
func BubbleSort(Array[] int)[]int {
    ln := len(Array)-1
   for i:=0; i< ln; i++ {
      for j:=0; j < ln-i; j++ {
         if (Array[j] > Array[j+1]) {
            Array[j], Array[j+1] = Array[j+1], Array[j]
         }
      }
   }
   return Array
}
func main() {
   Array := []int{68, 56, 8245, 243, 678, 67, 345};
   fmt.Println(BubbleSort(Array))
}
