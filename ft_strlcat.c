#include "libft.h"

size_t ft_strlcat(char* restrict dst, const char* restrict src, size_t dstsize)
{
	size_t dlen = ft_strlen(dst);
	size_t slen = ft_strlen(src);
	size_t i = dlen;

	if(dstsize <= dlen)
        {
                return (dstsize + slen);
        }
	if(dstsize > 0)
	{
		size_t j = 0;
		while(src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}	
	dst[i] = '\0';
	return (dlen + slen);
}
