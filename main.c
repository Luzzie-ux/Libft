#include "libft.h"
#include <stdio.h>

int main() { 
    char csrc[100] = "Geeksfor";
    
    ft_memmove(csrc+5, csrc, ft_strlen(csrc)+1); 
    printf("%s", csrc); 
    return 0; 
}
