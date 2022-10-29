// Kth Element in Spiral matrix problem

#include<bits/stdc++.h>

using namespace std;

class Solution{
    
	public:
	int findK(vector<vector<int>> &a, int n, int m, int k){
        int row_beg=0,row_end=n-1,col_beg=0,col_end=m-1;
        int val=0;
        
        while(row_beg<=row_end && col_beg<=col_end){
            for(int i=col_beg;i<=col_end;i++){
                k--;
                if(k==0){
                    val = a[row_beg][i];
                    break;
                }
            }
            row_beg++;
            
            for(int i=row_beg;i<=row_end;i++){
                k--;
                if(k==0){
                    val = a[i][col_end];
                    break;
                }
            }
            col_end--;
            
            for(int i=col_end;i>=col_beg;i--){
                k--;
                if(k==0){
                    val = a[row_end][i];
                    break;
                }
            }
            row_end--;
            
            for(int i=row_end;i>=row_beg;i--){
                k--;
                if(k==0){
                    val = a[i][col_beg];
                    break;
                }
            }
            col_beg++;
        }
        
        return val;
    }
};

int main(){
  
  int T;
  cin>>T;
  
  while(T--){
    
    int n,m;
    int k=0;
    
    cin>>n>>m>>k;
    
    vector<vector<int>> a(n,vector<int>(m,0));
    
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>a[i][j];
      }
    }
        
    Solution ob;
        
    cout<<ob.findK(a, n, m, k)<<" \n";
    
    }
        
    return 0;
}
