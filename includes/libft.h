#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

//prototipos
size_t ft_strlen(const char *s);
void* ft_memset(void* s, int c, size_t n);
void ft_bzero(void* s, size_t n);
void* ft_memcpy(void* dest, const void* src, size_t n);
void* ft_memmove(void* dest, const void* src, size_t n);
size_t ft_strlcpy(char* dst, const char* restrict src, size_t dstsize);
size_t ft_strlcat(char* dst, const char* restrict src, size_t dstsize);

#endif
