#include<bits/stdc++.h>
#define lli long long int
#define ff first
#define ss second
#define vi vector<int>
#define REP(i,n) for(int i=0; i<n; i++)
using namespace std;
void insert(stack<int> &s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int k=s.top();
    s.pop();
    insert(s,val);
    s.push(k);
    return;
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int val=s.top();
    s.pop();
    reverse(s);
    insert(s,val);
    
}
void printreverse(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0; i<n; i++){
        int x;  cin>>x;
        s.push(x);
    }
    reverse(s);
    cout<<"after reversing the stack elements"<<endl;
    printreverse(s);
    cout<<endl;
}