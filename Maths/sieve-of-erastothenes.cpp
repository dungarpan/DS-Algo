#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

void print_all_primes(int a){
    //idea is that to create a boolean array with all values as True. Start with 2 and mark all multiples as False. Increment once and check if True do the same.
    bool arr[a+1];
    int i;
    for(i=0; i<a+1; i++){
        arr[i] = true;
    }
    for(int i=2; i<=a; i++){
        if(!arr[i]){
            continue;
        }
        int multiple = i;
        int multiplier = 2;
        while(i*multiplier<=a){
            multiple = i * multiplier;
            arr[multiple] = false;
            multiplier++;
        }
    }

    for(i=2;i<=a;i++){
        if(arr[i]){
            cout<<i<<" "<<endl;
        }
    }
}

int main(){
    int a;
    //enter number till which you need all the prime numbers
    cin>>a;
    print_all_primes(a);
    return 0;
}