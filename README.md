*This project has been created as part of the 42 curriculum by rodrpere*

## Description

This is github for my Libft library, a custom-writen collection of C functions originally implemented in the Libc library of the C Programming language and other libraries aswell. With the purpose of better learning how to implement these functions on other potential 42 projects, this library includes functions that can manipulate strings, dynamically allocate memory, and manage linked lists.

The code is divided into three parts:
  * Part 1 - Libc Functions
  * Part 2 - Additional Functions
  * Part 3 - Linked Lists

The implemented functions are in the end of this readme

## Instructions

To compile the library, type the command `make` in the shell while inside the libft dir, shortly after an `libft.a` and `*.o` files will be created on the root.

To clean .o files, types `make clean`, to clean all .o and .a type `make fclean`, in the case of needed recompiling, write `make re` to do so.

In order to use this library with any of your `.c` file that might need it, type `gcc your_file.c libft.a` or `cc your_file.c -L. -lft` while inside this directory.

In the case of using this libft outside of its own dir, type `gcc your_file.c -L../Libft -lft` or `cc your_file.c -L../Libft -lft` to do so(`-L` adds the dir to the library search path, `.` means the current directory and `-lft` tells the linker to look for `libft.a`).

The library is accompanied by a header file called `libft.h`, which contains prototypes for all the functions in the library. To use the library in your project, include the header file and link to the library as described above.

## Resources

In the making of this library, AIs like Claude from Antrophic and Chatgpt from OpenAI were used in order to learn concepts, syntax and rules to rebuild each function, and spot potential edge cases/errors that couldnt be encountered only by me and my peers. 

For testing and debugging, the website [PythonTutor](https://pythontutor.com/) was utilized to better visualization of the code and how everything interacts, the [Francinette](https://github.com/xicodomingues/francinette), a code tester created by a 42 student for other students, helped me learn how to think of potential errors that could come, if for example, a dynamic memory allocation made using the function malloc(3) failed. 

>In that case, if the allocation failed the function should `return (NULL);` or if in the case of a function with its return type as void, only have `return ;` under the if statement.

Alongside these tools, these online spaces: [W3Schools](https://www.w3schools.com/), [StackOverflow](https://www.stackoverflow.com/), [GeeksforGeeks](https://www.geeksforgeeks.org/), [PortfolioCourses](https://www.youtube.com/@PortfolioCourses) and my peers, helped me learn what was needed to better understand C and its inner workings.

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

