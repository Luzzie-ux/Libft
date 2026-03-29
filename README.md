# Libft
This is my shot at building a custom standard library of all the C language functions for a reviewing of my coding knowledge
it should be following a simple way to do them and in the process, understand the language better

Here is the checklist:
# PHASE 1 — Core Basics

* [ ] `ft_strlen`
* [ ] `ft_memset`
* [ ] `ft_bzero`

---

# PHASE 2 — Core Memory Handling

* [ ] `ft_memcpy`
* [ ] `ft_memmove`

---

# PHASE 3 — String Copying

You now apply memory logic to strings.

* [ ] `ft_strlcpy`
* [ ] `ft_strlcat`

---

# PHASE 4 — Character Functions

* [ ] `ft_isalpha`
* [ ] `ft_isdigit`
* [ ] `ft_isalnum`
* [ ] `ft_isascii`
* [ ] `ft_isprint`
* [ ] `ft_toupper`
* [ ] `ft_tolower`

---

# PHASE 5 — Searching & Comparing

* [ ] `ft_strchr`
* [ ] `ft_strrchr`
* [ ] `ft_strncmp`
* [ ] `ft_memchr`
* [ ] `ft_memcmp`
* [ ] `ft_strnstr`

---

# PHASE 6 — Memory Allocation

* [ ] `ft_strdup`
* [ ] `ft_calloc`

---

# PHASE 7 — Advanced String Functions

* [ ] `ft_substr`
* [ ] `ft_strjoin`
* [ ] `ft_strtrim`
* [ ] `ft_split`
* [ ] `ft_itoa`

---

# PHASE 8 — Output Functions

* [ ] `ft_putchar_fd`
* [ ] `ft_putstr_fd`
* [ ] `ft_putendl_fd`
* [ ] `ft_putnbr_fd`

---

# PHASE 9 — Linked Lists

* [ ] `ft_lstnew`
* [ ] `ft_lstadd_front`
* [ ] `ft_lstsize`
* [ ] `ft_lstlast`
* [ ] `ft_lstadd_back`
* [ ] `ft_lstdelone`
* [ ] `ft_lstclear`
* [ ] `ft_lstiter`
* [ ] `ft_lstmap`

---

# How to use this roadmap properly

For EACH function:

1. Read `man function_name`
2. Implement it
3. Test it
4. Compare with original
5. Run valgrind

---

# Realistic progression tip

If you feel stuck:

* It’s almost always one of these:

  * pointer confusion
  * off-by-one error
  * forgetting `'\0'`
  * bad malloc size
