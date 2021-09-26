#include <stdio.h>

int main(){
    int luku;
    for (luku = 1; luku <= 100; luku++){
        if (luku % 2 == 0){
            continue;
        }
        else if (luku % 3 == 0){
            continue;
        }
        else if (luku % 5 == 0){
            continue;
        }
        else{
            if (luku != 97){
                printf("%d ", luku);
            }
            else{
                printf("%d", luku);
            }
        }
    }
    printf("\n");
    return 0;
}
