#include<stdio.h>

int min_coins(int n, int c)
{
    if(n==0)
        return c;
    if(n-25>=0)
        min_coins(n-25,c+1);
    else if(n-10>=0)
        min_coins(n-10,c+1);
    else if(n-5>=0)
        min_coins(n-5,c+1);
    else if(n-1>=0)
        min_coins(n-1,c+1);
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = min_coins(n,0);
    printf("Ans: %d",ans);
    return 0;
}