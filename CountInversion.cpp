#include<bits/stdc++.h>
using namespace std;

long long counter;

void Merge(long long arr[], long long L, long long mid, long long R){
   long long B[R+1];
   long long i = L, j = mid +1, k = L;
   while(i <= mid && j <= R){
       if(arr[i] <= arr[j])
           B[k++] = arr[i++];
       else{
           B[k++] = arr[j++];
           counter += mid - i +1;
   }
 }
 while(i <= mid)
     B[k++] = arr[i++];
 while(j <= R)
     B[k++] = arr[j++];
     
 for(long long i = L; i <= R; i++)
      arr[i] = B[i];
}

void MergeSort(long long arr[], long long L, long long R){
   if (L<R){
       long long mid = (L+R)/2;
       MergeSort(arr, L, mid);
       MergeSort(arr, mid+1, R);
       Merge(arr, L, mid, R);
   }
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    counter = 0;
    MergeSort(arr, 0, N-1);
    return counter;
}
