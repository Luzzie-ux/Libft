#include "libft.h"

size_t ft_strlcpy(char* dst, const char* restrict src, size_t dstsize)
{
	size_t slen = ft_strlen(src);
	size_t i = 0;
	size_t j = 0;
	if(dstsize == 0)
		return (slen);
	while(src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (slen);
}
