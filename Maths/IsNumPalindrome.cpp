#include <bits/stdc++.h>
using namespace std;

int noOfDigits_math(int n){
    if(n==0){
        return 0;
    }
    return floor(log10(n)+1);
}

int main(){
    int n,c,n_copy,reverse_n=0,last;
    cout<<"Enter number\n";
    cin>>n;
    c = noOfDigits_math(n);
    n_copy = n;
    for(int i=c;i>0;i--){
        last = n%10;
        reverse_n += pow(10,i-1) * last;
        n = n/10;
    }
    cout<<"Reversed number is "<<reverse_n<<endl;
    if(n_copy==reverse_n){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}