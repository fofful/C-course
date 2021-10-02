#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    size_t len_argv = sizeof(argv) / sizeof(argv[1]);
    for (int i = 1; i < argc; i++){
        printf("%d: %s (pituus: %d)\n", i, argv[i], strlen(argv[i]));
    }
    
}