#include<bits/stdc++.h>
#define lli long long int
#define ff first
#define ss second
#define vi vector<int>
#define REP(i,n) for(int i=0; i<n; i++)
using namespace std;
void solve(string op,int one, int zero,int n){
    if(one+zero==n){
        cout<<op<<endl;
        return;
    }
    if(one==zero){
        op.push_back('1');
        one++;
        solve(op,one,zero,n);
    }
    else{
        string op1=op+'0';
        int one1=one; int zero1=zero+1;
        string op2=op+'1';
        int one2=one+1; int zero2=zero;
        solve(op1,one1,zero1,n);
        solve(op2,one2,zero2,n);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int one=1;
    int zero=0;
    string op="1";
    solve(op,one,zero,n);
}