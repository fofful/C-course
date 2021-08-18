#include <stdio.h>

int main(){
    for (int luku = 0; luku <= 100; luku++){
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
            printf("%d ", luku);
        }
    }
}
