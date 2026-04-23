# Libft
This is my shot at building a custom standard library of all the C language functions for a reviewing of my coding knowledge
it should be following a simple way to do them and in the process, understand the language better

Here is the checklist:
# PHASE 1 — Core Basics

* [o] `ft_strlen`
* [o] `ft_memset`
* [o] `ft_bzero`

---

# PHASE 2 — Core Memory Handling

* [o] `ft_memcpy`
* [o] `ft_memmove`

---

# PHASE 3 — String Copying

* [o] `ft_strlcpy`
* [o] `ft_strlcat`

---

# PHASE 4 — Character Functions

* [o] `ft_isalpha`
* [o] `ft_isdigit`
* [o] `ft_isalnum`
* [o] `ft_isascii`
* [o] `ft_isprint`
* [o] `ft_toupper`
* [o] `ft_tolower`

---

# PHASE 5 — Searching & Comparing

* [o] `ft_strchr`
* [o] `ft_strrchr`
* [o] `ft_strncmp`
* [o] `ft_memchr`
* [o] `ft_memcmp`
* [o] `ft_strnstr`

---

# PHASE 6 — Memory Allocation

* [o] `ft_strdup`
* [o] `ft_calloc`

---

# PHASE 7 — Advanced String Functions

* [o] `ft_substr`
* [o] `ft_strjoin`
* [o] `ft_strtrim`
* [o] `ft_split`
* [ ] `ft_itoa`
* [ ] `ft_strmapi`
* [ ] `ft_striteri`

---

# PHASE 8 — Output Functions

* [o] `ft_putchar_fd`
* [o] `ft_putstr_fd`
* [o] `ft_putendl_fd`
* [o] `ft_putnbr_fd`

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

---

# Realistic progression tip

If you feel stuck:

* It’s almost always one of these:

  * pointer confusion
  * off-by-one error
  * forgetting `'\0'`
  * bad malloc size
  * or lack of semicolon: ;
