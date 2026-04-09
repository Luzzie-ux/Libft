#include "libft.h"

void* ft_memcpy(void* dest, const void* src, size_t n)
{
	unsigned const char* ps = src;
	unsigned char* pd = dest;
	while (n > 0)
	{
		*pd = *ps;
		pd++;
		ps++;
		n--;
	}
	return  dest;
}
