#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int GCD_R(int a, int b){
    cout<<1<<endl;
    if(a>b){
        cout<<2<<endl;
        if(a%b==0){
            return b;
        }
    }
    else{
        cout<<3<<endl;
        if(b%a==0){
            return a;
        }
    }
    if(a<b){
        return GCD_R(b-a,a);
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
    }
    else{
        return GCD_R(a,a-b);
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
    }
    return 1;
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
    //int gcd_r = GCD_R(a,b);
    int gcd_nr = GCD_NR(a,b);
    cout<<"GCD OF "<< a<<" and "<<b<<" is: "<<gcd_nr<<endl;
    return 0;
}