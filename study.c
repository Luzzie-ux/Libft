#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//lets try to understand:
//string traversal!
//
//string traversal is widely used across the C language
//and is fairly easy to be lost in its concept.
//
//to traverse a string, lets use a index variable called I.
//initiliaze it with the value 0 (as it is a integer)
//
//And make a loop through the characters of a string printing each of it
//in its position on the string.

int	main()
{
	int	i = 0;
	char	str[] = "Hello,World!";

	while (str[i] != '\0'){
		printf("str[%d] = %c\n", i, str[i]);
		i++;
	}
	return (0);
}
