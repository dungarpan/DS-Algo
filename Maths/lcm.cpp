#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int mygcd(int a, int b){
    if(b==0){
        return a;
    }
    return mygcd(b, a%b);
}

int mylcm(int a, int b){
    //lcm(a,b)*gcd(a,b) = a * b
    int gcd = mygcd(a,b);
    int lcm = (a*b)/gcd;
    return lcm;
}

int main(){
    int a,b;
    cin>>a>>b;
    int lcm = mylcm(a,b);
    //int gcd = GCD_NR(a,b);
    cout<<"LCM OF "<< a<<" and "<<b<<" is: "<<lcm<<endl;
    return 0;
}

