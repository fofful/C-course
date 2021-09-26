#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int i;
    for (i = a; i <= b; i++){
        printf("%d: %c\n", i, i);
    }
    return 0;
}