#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int Factorial(int a){
   if (a==0){
       return 1;
   }
   else{
       cout<<"in else"<<endl;
       return Factorial(a-1)*a;
   }
}

int main(){
    int n;
    cin>>n;
    int zero_c = 0;
    int f = Factorial(n);
    for(int i=5;i<=f;i*5){
        cout<<"in second"<<endl;
        zero_c += floor(n/i); 
    }
    cout<<"Number of trailing zeros: "<< zero_c<<endl;
    return 0;
}