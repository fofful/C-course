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
    printf("Voittorivi: ");
    for(i = 1; i <= 7; i++){
        correctRow[i-1] = atoi(argv[i]);
        printf("%d", correctRow[i-1]);
        if (i == 7){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
    printf("Lottorivi: ");
    for(i = 8; i <= 14; i++){
        guessedRow[i-8] = atoi(argv[i]);
        printf("%d", guessedRow[i-8]);
        if (i == 14){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            if (correctRow[i] == guessedRow[j]){
                corrects += 1;
            }
        }
    }
    printf("%d oikein: ", corrects);
    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            if (correctRow[i] == guessedRow[j]){
                printf("%d", guessedRow[j]);
                if (i == 7){
                    printf("\n");
                }
                else{
                    printf(" ");
                }
            }
        }
    }
    return 0;
}