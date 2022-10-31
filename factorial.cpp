#include<bits/stdc++.h>
#define lli long long int
#define ff first
#define ss second
#define vi vector<int>
#define REP(i,n) for(int i=0; i<n; i++)
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
   return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}