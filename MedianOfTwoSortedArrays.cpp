// Median of two sorted arrays problem

#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector <int> v;
        
        for(int i=0;i<array1.size();i++){
            v.push_back(array1[i]);
        }
        
        for(int i=0;i<array2.size();i++){
            v.push_back(array2[i]);
        }
        
        sort(v.begin(),v.end());
        
        if(v.size()%2!=0){
            return v[(v.size()-1)/2];
        }
        
        return (double)(v[(v.size()-1)/2]+v[v.size()/2])/2;
    }
};

int main(){
  
  int T;
  cin>>T;
  
  while(T--){
    
    int m,n;
    
    cin>>m>>n;
    
    vector<int> array1(m);
    
    for(int i=0;i<m;i++){
      cin>>array1[i];
    }
    
    vector<int> array2(n);
    
    for(int i=0;i<n;i++){
      cin>>array2[i];
    }
        
    Solution ob;
        
    cout<<ob.MedianOfArrays(array1, array2)<<" \n";
    
    }
        
    return 0;
}
