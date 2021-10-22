#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){
    int correctRow[7];
    int guessedRow[7];
    int i;
    int j;
    int corrects;
    corrects = 0;
    printf("Voittorivi:");
    for(i = 1; i <= 7; i++){
        correctRow[i-1] = atoi(argv[i]);
        printf(" %d", correctRow[i-1]);
    }

    printf("\n");
    printf("Lottorivi:");
    for(i = 8; i <= 14; i++){
        guessedRow[i-8] = atoi(argv[i]);
        printf(" %d", guessedRow[i-8]);
    }

    printf("\n");
    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            if (correctRow[i] == guessedRow[j]){
                corrects += 1;
            }
        }
    }
    if (corrects != 0){
        printf("%d oikein:", corrects);
        for(i = 0; i < 7; i++){
            for(j = 0; j < 7; j++){
                if (correctRow[j] == guessedRow[i]){
                    printf(" %d", correctRow[j]);
                }
            }
        }
    }
    else{
        printf("Ei yhtään oikein!");
    }
    printf("\n");
    return 0;
}