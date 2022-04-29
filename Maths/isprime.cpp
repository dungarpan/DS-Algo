#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

bool check_prime_naive(int a){
    //idea is that square root always come in a pair. one divisor is in the pair is always smaller than root n. the smaller number of this pair has to be withinroot of n.
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    cin>>a;
    bool isPrime = check_prime_naive(a);
    string text;
    isPrime? text = "": text = "not";
    cout<<a<<" is "<<text<<" a prime."<<endl;
    return 0;
}