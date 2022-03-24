#include<iostream>
#include<stdio.h>
using namespace std;


void SwapValue(int &a, int &b) {
   int t = a;
   a = b;
   b = t;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int ep, op;
    ep = 0;
    op = n-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(ep<op){
        if(a[ep]%2==0){
            ep++;
        }
        else{
            SwapValue(a[ep],a[op]);
            op--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}