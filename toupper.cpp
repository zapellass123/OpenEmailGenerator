#include<bits/stdc++.h>
#define lli long long int
#define ff first
#define ss second
#define vi vector<int>
#define REP(i,n) for(int i=0; i<n; i++)
using namespace std;
void solve(string ip, string op){
    if(ip.size()==0){
        cout<<op<<endl;
        return;
    }
    string op1=op+ip[0];
    char a=toupper(ip[0]);
    string op2=op+a;
    ip.erase(ip.begin());
    solve(ip,op1);
    solve(ip,op2);
    return;
}
int main(){
 string s;
 cin>>s;
 string ip=s;
 string op;
 solve(ip,op);   
}