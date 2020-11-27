#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1])
{
    int i = 0;
    for (i = 0; i < atoi(argv[1]) / 2; i++){
        if (i *(i + 1) / 2 == atoi(argv[1])){
            printf("%d is a triangular number", atoi(argv[1]));
        }
    }
    return 0;
}
