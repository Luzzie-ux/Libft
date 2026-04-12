#include "libft.h"
#include <stdio.h>

int main() { 
    char src[6] = "that!";
    char dst[50]= "This and ";
    char s2[6] = "ellif";
    char d2[6] = "souma";
    
    printf("Before strlcat: %s\n", dst);
    ft_strlcat(dst, src, sizeof(dst));
    printf("After strlcat: %s\n", dst);

    printf("Before strlcpy: %s\n", d2);
    ft_strlcpy(d2, s2, sizeof(d2));
    printf("After strlcpy: %s\n", d2); 
    return 0;
}
