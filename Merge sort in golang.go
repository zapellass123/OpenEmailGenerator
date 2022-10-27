package main
import "fmt"
func Merge_sort(Array *[]int,start int,last int){
    if start<last{
       mid :=(start+last)/2
       Merge_sort(Array, start, mid)
       Merge_sort(Array,mid+1,last)
       Merge(Array,start,mid,last)
    }
}
func Merge(Array *[]int,start,mid,last int){
   n1:=mid-start+1
   n2:=last-mid
   l:=make([]int,n1 )
   r:= make([]int, n2)
   for i:=0;i<n1;i++{
     l[i] = (*Array)[start+i]
   }
   for j:=0;j<n2;j++{
     r[j] = (*Array)[mid+1+j]
   }
   i:=0
   j:=0
   k:=start
   for i<n1 && j<n2{
     if l[i]<r[j]{
        (*Array)[k] =l[i]
        i++
        k++
     }else{
        (*Array)[k]=r[j]
         j++
         k++
     }
  }
  for i==n1 &&j<n2{
     (*Array)[k] = r[j]
      j++
      k++
  }
  for j==n2 &&i<n1{
     (*Array)[k] = l[i]
      i++
      k++
  }
}
func PrintArr(Array *[] int){
    for i:=0; i<len(*Array);i++{
       fmt.Printf("%d ",(*Array)[i])
    }
    fmt.Printf("\n");
}
func main(){
    Array:=[]int{654,264,3453,3,5,452,568}
    fmt.Printf("Array before merge sort:\n")
    PrintArr(&Array)
    Merge_sort(&Array, 0,(len(Array)-1))
    fmt.Printf("Array after merge sort:\n")
    PrintArr(&Array)
}
