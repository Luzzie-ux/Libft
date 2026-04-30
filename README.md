*This project has been created as part of the 42 curriculum by rodrpere*

## Description
This is my shot at building a custom standard library of all the C language function
s for a reviewing of my coding knowledge
it should be following a simple way to do them and in the process, understand the language better

## Instructions
To compile the library, type the command `make` in the shell while inside the libft dir, shortly after an `libft.a` and `*.o` files will be created on the root, to clean .o files, types `make clean`, to clean all type `make fclean`, in the case of needed to recompile, write `make re` to do so. In order to use this library with any of your `.c` file that might need it, type `gcc your_file.c libft.a` or `cc your_file.c libft.a` while inside this directory, in the case of using this libft outside of its own dir, type `gcc your_file.c -L . -lft` or `cc your_file.c -L . -lft` to do so(`-L` means include library, `.` means the current directory and `-lft` call the `libft.a`).

## Resources
In the making of this library, AIs like Claude from Antrophic and Chatgpt from OpenAI were used in order to learn concepts, syntax and rules to rebuild each function, and spot potential edge cases/errors that couldnt be encountered only by me and my peers. For testing and debugging, the website `PythonTutor (https://pythontutor.com/)` was utilized to better visualization of the code and how everything interacts, the `Francinette (https://github.com/xicodomingues/francinette)`, a code tester created by a 42 student for other students, helped me learn how to think of potential errors that could come, if for example, a dynamic memory allocation made using the function malloc(3) failed. In that case, if the allocation failed the function should return NULL or if in the case of a function with its return type as void, only have `return ;` under the if statement. Alongside these tools the websites `W3Schools (https://www.w3schools.com/)`, `StackOverflow (https://www.stackoverflow.com/)`, `GeeksforGeeks (https://www.geeksforgeeks.org/)` and my peers, helped me learn what was needed to better understand the language C and its inner workings.

### Functions implemented

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

