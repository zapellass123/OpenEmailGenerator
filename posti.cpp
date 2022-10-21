#include <iostream>
#include <algorithm>
using namespace std;
const int STACK_SIZE=100;

class Stack{
    int top;
    string arr[100];
    public:
    Stack(){
        top=-1;
    }
    void push(string elem){
        if(top<STACK_SIZE){
            arr[++top]=elem;
        }
        else
            cout<<"Stack Overflow!";
    }
    string pop(){
        if(top>=0)
            return arr[top--];
        cout<<"Underflow!"<<endl;
    }
    string peek(){
        if(top>=0)
            return arr[top];
        cout<<"Underflow!"<<endl;
    }
};

string postToInfix(string pre){
    Stack s;
    string output, final;
    int l=pre.length();
    for(int i=0;i<l;i++){
        if(isdigit(pre[i])||isalpha(pre[i])){
            s.push(string(1,pre[i]));
        }
        else{
            string a=s.pop();
            string b=s.pop();
            string exp='('+b+pre[i]+a+')';
            s.push(exp);
        }
    }
    output=s.peek();
    return output;
}

int main(){
    string inp;
    cout<<"Enter the expression:";
    cin>>inp;
    cout<<postToInfix(inp);
}
