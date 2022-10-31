#include<bits/stdc++.h>
#define lli long long int
#define ff first
#define ss second
#define vi vector<int>
#define REP(i,n) for(int i=0; i<n; i++)
using namespace std;
void solve(string op, int open , int close,vector<string>&v){
    if(open==0 && close==0){
        // cout<<op<<endl;
        v.push_back(op);
        return;
    }
    if(open==close){
        op.push_back('(');
        open=open-1;
        solve(op,open,close,v);
    }
    else if(open==0 && close!=0){
        op=op+')'; close--;
        solve(op,open,close,v);
    }
    else if(open!=0 && close==0){
        op=op+'(';
        open--;
        solve(op,open,close,v);
    }
    else{
        string op1=op+'(';
        int first1=open-1; int sec1=close;
        string op2=op+')';
        int first2=open; int sec2=close-1;
        solve(op1,first1,sec1,v);
        solve(op2,first2,sec2,v);
    }
    return;
}
void printvector(vector<string> v){
    cout<<"we are inside printvector function"<<endl;
    for(auto it:v){
        cout<<it<<endl;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int open,close;
    string op="(";
    open=n-1;
    close=n;
    vector<string> v;
    solve(op,open,close,v);
    printvector(v);
}