#include <stdlib.h>

char *ft_strdup(char *src){
    char *res = malloc(sizeof(src));
    int i = 0;

    while(src[i] != '\0'){
        res[i] = src[i];
        i++;
    }

    return res;
}