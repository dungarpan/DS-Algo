#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int GCD_R(int a, int b){
    if (b==0)
        return a;
    return GCD_R(b, a%b);
}

int GCD_NR(int a,int b){
    while(a!=b){
        if(a<b){
            b=b-a;
        }
        else{
            a=a-b;
        }
    }
    return a;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    int gcd = GCD_R(a,b);
    //int gcd = GCD_NR(a,b);
    cout<<"GCD OF "<< a<<" and "<<b<<" is: "<<gcd<<endl;
    return 0;
}