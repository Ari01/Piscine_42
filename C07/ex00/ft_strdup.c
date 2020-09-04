#include <stdlib.h>

char *ft_strdup(char *src){
    char *res;
    int i;

    res = malloc(sizeof(src));
    i = 0;

    while(src[i] != '\0'){
        res[i] = src[i];
        i++;
    }

    return res;
}