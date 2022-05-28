#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

void print_divisors(int a){
    //idea is that square root always come in a pair. the smaller number of this pair has to be withinroot of a.
    int i;
    for(int i=1;i<=sqrt(a);i++){
        //cout<<"hello:"<<i<<endl;
        if(a%i==0){
            cout<<i<<" ";
        }
    }
    for(i = int(sqrt(a));i>=1;i--){
        //cout<<"i:"<<i<<endl;
        if(a%i==0){
            cout<<a/i<<" ";
        }
    }
}

int main(){
    int a;
    cin>>a;
    print_divisors(a);
    return 0;
}