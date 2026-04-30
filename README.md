*This project has been created as part of the 42 curriculum by rodrpere*

# Description
This is my shot at building a custom standard library of all the C language functions for a reviewing of my coding knowledge
it should be following a simple way to do them and in the process, understand the language better

# Instructions
To compile this library simply run the command *make* in the shell or terminal inside the directory of the library and a libft.a file will be created on the root of the dir, To use the library with any .c file that might need it, simply run *gcc your_file.c libft.a* or*cc your_file.c libft.a*

# Resources
In the making of this library, Ai was used to learn the concepts needed to rebuild each function, and spot potential edge cases/errors that couldnt be found by me and my peers. For testing and debugging each function, the website PythonTutor was utilized to better visualization of the code and how it everything interacts, the Francinette, a code tester created by a 42 student for other students helped me learn how to think of potential errors that could happen if for example, a dynamic memory allocation made using the function malloc(3) failed. In this case if the allocation failed the function should return NULL or if in the case of a function with its return type as void, just return . Alongside these tools the websites W3Schools(https://www.w3schools.com/), StackOverflow(https://www.stackoverflow.com/), GeeksforGeeks(https://www.geeksforgeeks.org/) and my peers, helped me learn what was needed to better understand the language C and its inner workings.

# Functions implemented

|Part 1 - Libc Function | Part 2 - Additional functions | Part 3 - Linked Lists |
|-----------------------|-------------------------------|-----------------------|
|   ft_isalpha          |       ft_substr               |   ft_lstnew           |
|   ft_isdigit          |       ft_strjoin              |   ft_lstadd_front     |
|   ft_isalnum          |       ft_strtrim              |   ft_lstsize          |
|   ft_isascii          |       ft_split                |   ft_lstlast          |
|   ft_isprint          |       ft_itoa                 |   ft_lstadd_back      |
|   ft_strlen           |       ft_strmapi              |   ft_lstdelone        |
|   ft_memset           |       ft_striteri             |   ft_lstclear         |
|   ft_bzero            |       ft_putchar_fd           |   ft_lstiter          |
|   ft_memcpy           |       ft_putstr_fd            |   ft_lstmap           |
|   ft_memmove          |       ft_putendl_fd           |                       |
|   ft_strlcpy          |       ft_putnbr_fd            |                       |
|   ft_strlcat          |                               |                       |
|   ft_toupper          |                               |                       |
|   ft_tolower          |                               |                       |
|   ft_strchr           |                               |                       |
|   ft_strrchr          |                               |                       |
|   ft_strncmp          |                               |                       |
|   ft_memchr           |                               |                       |
|   ft_memcmp           |                               |                       |
|   ft_strnstr          |                               |                       |
|   ft_atoi             |                               |                       |
|   ft_calloc           |                               |                       |
|   ft_strdup           |                               |                       |

---

