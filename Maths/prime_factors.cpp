#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

void prime_factors(int a){
    //idea is that square root always come in a pair. the smaller number of this pair has to be withinroot of a.
    for(int i=2;i<=sqrt(a);i++){
        while(a%i==0){
            cout<<i<<" ";
            a = a/i;
        }
    }
    if(a>1){
        cout<<a;
    }
}

int main(){
    int a;
    cin>>a;
    prime_factors(a);
    return 0;
}
