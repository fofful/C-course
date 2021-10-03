#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int start;
    int end;
    int first;
    start = atoi(argv[1]);
    end = atoi(argv[2]);
    first = 0;
    for (start = start; start <= end; start++){
        int i;
        int found;
        found = 0;

        for(i = 3; i < argc; i++){
            int divider;
            divider = atoi(argv[i]);
            if(start % divider == 0){
                found = 1;
            }
        }
        if(found == 0){
            if(first == 0){
                printf("%d", start);
                first = 1;
            }
            else{
                printf(" %d", start);
            }
        }
    }
    if (first == 1){
        printf("\n");
    }
    return 0;
}
