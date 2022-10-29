// max circular subarray sum problem

#include<bits/stdc++.h>

using namespace std;

class Solution{

  public:
    int kadalgo(int arr[],int n){
        int currsum = 0;
        int maxsum = 0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum<0){
                currsum=0;
            }
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
    
    int circularSubarraySum(int arr[], int num){
        int nonwrapsum = kadalgo(arr,num);
        if(!nonwrapsum){
            int maxsum=-10e6;
            for(int i=0;i<num;i++){
                maxsum = max(arr[i],maxsum);
            }
            
            return maxsum;
        }
        
        int totalsum = 0;
        
        for(int i=0;i<num;i++){
            totalsum+=arr[i];
            arr[i] = -arr[i];
        }
        
        int wrapsum = totalsum + kadalgo(arr,num);
        
        return max(wrapsum,nonwrapsum);
    }
};

int main(){
  
  int T;
  cin>>T;
  
  while(T--){
    
    int num;
    cin>>num;
    
    int arr[num];
    
    for(int i=0;i<num;i++){
      cin>>arr[i];
    }
        
    Solution ob;
        
    cout<<ob.circularSubarraySum(arr,num)<<endl;
    
    }
        
    return 0;
        
}
