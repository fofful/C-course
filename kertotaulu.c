#include <stdio.h>

int main(){
    int onetoten[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i;
    int j;
    int num;
    printf("   x");
    for (i = 0; i < 15; i++){
        if (i >= 9){
            printf("  %d", onetoten[i]);
            }
        else{
            printf("   %d", onetoten[i]);
            }
    }
    printf("\n");
    for (i = 1; i <= 15; i++){
        if (i >= 100){
                printf(" %d", i);
            }
        else if (i >= 10){
            printf("  %d", i);
            }
        else{
            printf("   %d", i);
            }
        for (j = 0; j < 15; j++){
            num = i * onetoten[j];
            if (num >= 100){
                printf(" %d", num);
            }
            else if (num >= 10){
                printf("  %d", num);
            }
            else{
                printf("   %d", num);
            }
        }
        printf("\n");
    }
    return 0;
}