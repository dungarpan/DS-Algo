#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

void print_divisors(int a){
    //idea is that square root always come in a pair. the smaller number of this pair has to be withinroot of a.
    int i;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            cout<<i<<" ";
        }
    }
    if(i*i==a)
        i--;
    for(;i>=1;i--){
        if(a%i==0){
            cout<<a/i<<" ";
        }
    }
    if(a>1){
        cout<<a;
    }
}

int main(){
    int a;
    cin>>a;
    print_divisors(a);
    return 0;
}