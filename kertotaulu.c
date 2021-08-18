#include <stdio.h>

int main(){
    int onetoten[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("x   ");
    for (int i = 0; i < 10; i++){
        if (i >= 10){
            printf("%d  ", onetoten[i]);
            }
        else{
            printf("%d   ", onetoten[i]);
            }
    }
    printf("\n");
    for (int i = 1; i <= 10; i++){
        if (i >= 100){
                printf("%d ", i);
            }
        else if (i >= 10){
            printf("%d  ", i);
            }
        else{
            printf("%d   ", i);
            }
        for (int j = 0; j < 10; j++){
            int num = i * onetoten[j];
            if (num >= 100){
                printf("%d ", num);
            }
            else if (num >= 10){
                printf("%d  ", num);
            }
            else{
                printf("%d   ", num);
            }
        }
        printf("\n");
    }
}