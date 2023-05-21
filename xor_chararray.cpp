#include<bits/stdc++.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>

#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define LENGTH 16
int main()
{
    char const plainone[LENGTH] = "PlainOne";
    char const plaintwo[LENGTH] = "PlainTwo";
    char xor1[LENGTH];
    int i;

    for(i=0; i<LENGTH; ++i)
        xor1[i] = (char)(plainone[i] ^ plaintwo[i]);
    printf("PlainText One: %s\nPlainText Two: %s\n\none^two: ", plainone, plaintwo);
    for(i=0; i<LENGTH; ++i)
        printf("%02X ", xor1[i]);
    printf("\n");
    return 0;
}