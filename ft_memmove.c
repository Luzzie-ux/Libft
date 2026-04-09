#include "libft.h"

void* ft_memmove(void* dest, const void* src, size_t n)
{
	unsigned char* pd = dest;
	unsigned const char* ps = src;

	if (dest == src || n == 0)
	{
		return dest;
	}

	if (dest < src)
	{
		while(n--)
		*pd++ = *ps++;
	}

	else{
		pd = pd + n - 1;
        ps = ps + n - 1;
        while (n--)
            *pd-- = *ps--;
	}
	return dest;
}
