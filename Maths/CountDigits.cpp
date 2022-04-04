#include <bits/stdc++.h>
using namespace std;

int noOfDigits(int n){
    int count   =0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int noOfDigits_rec(int n){
    if(n==0){
        return 0;
    }
    return 1 + noOfDigits_rec(n/10);
}

int noOfDigits_math(int n){
    if(n==0){
        return 0;
    }
    return floor(log10(n)+1);
}

int main(){
    int n,c;
    cout<<"enter number\n";
    cin>>n;
    c = noOfDigits(n);
    cout<<"Normal: "<<c<<endl;
    c = noOfDigits_rec(n);
    cout<<"Recursive: "<<c<<endl;
    c = noOfDigits_math(n);
    cout<<"Math: "<<c<<endl;
}