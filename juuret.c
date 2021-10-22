#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){
    int decimals;
    int i;
    double number;
    double squared;
    double printValue;
    char c[50];
    decimals = atoi(argv[1]);
    for(i = 2; i < argc; i++){
        number = atof(argv[i]);
        squared = sqrt(number);
        printf("sqrt(%.*f) = %.*f", decimals, number, decimals, squared);
        if (i < argc){
            printf("\n");
        }
    }
    return 0;
}