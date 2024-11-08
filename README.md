# Libft - My Custom C Library

## Overview

**Libft** is my custom implementation of the C standard library. This project has been a deep dive into the fundamental workings of core C functions. Building this library has given me a stronger understanding of variables, arrays and strings. I have also had to think deeply about function interfaces, error handling, and memory safety. I have written the ***libft*** project as part of my curriculum for 42London.

## Implemented Functions

### Character Classification and Conversion
- **`ft_isalpha`**, **`ft_isdigit`**, **`ft_isalnum`**, **`ft_isascii`**, **`ft_isprint`** – Check if a character meets certain criteria (e.g., alphabetic, digit).
- **`ft_tolower`**, **`ft_toupper`** – Convert a character to lowercase or uppercase.

### Memory Management
- **`ft_bzero`**, **`ft_memset`**, **`ft_memcpy`**, **`ft_memmove`** – Manage memory by setting, copying, or moving data.
- **`ft_memchr`**, **`ft_memcmp`** – Search or compare blocks of memory.
- **`ft_calloc`** – Allocate and zero-initialize an array, avoiding issues of uninitialized memory.

### String Manipulation
- **`ft_strlen`**, **`ft_strdup`** – Measure string length or duplicate strings.
- **`ft_strchr`**, **`ft_strrchr`** – Find characters within a string.
- **`ft_strncmp`** – Compare strings up to a given length.
- **`ft_strlcpy`**, **`ft_strlcat`** – Copy or concatenate strings while ensuring null-termination.

### Conversion Functions
Functions to convert between data types:
- **`ft_atoi`** – Convert a string to an integer.
- **`ft_itoa`** – Convert an integer to a string.

### File Descriptor Output
- **`ft_putchar_fd`**, **`ft_putstr_fd`**, **`ft_putendl_fd`**, **`ft_putnbr_fd`** – Output characters, strings, and integers, supporting multiple use cases.

### Linked List Functions
- **`ft_lstnew`**, **`ft_lstadd_front`**, **`ft_lstadd_back`** – Create and add nodes to a linked list.
- **`ft_lstsize`**, **`ft_lstlast`** – Measure list size and get the last node.
- **`ft_lstdelone`**, **`ft_lstclear`**, **`ft_lstiter`**, **`ft_lstmap`** – Delete, clear, and map functions over linked lists.

## Compilation and Usage

The library can be compiled with `make`:

- **`make`** or **`make all`**: Compiles the main library (`libft.a`) with core functions.
- **`make bonus`**: Adds linked list functions to the compiled library.
- **`make clean`**: Removes object files.
- **`make fclean`**: Cleans up both object files and the library.
- **`make re`**: Recompiles the library from scratch.

To use this library in a project, include it with:

```bash
gcc -o my_program my_program.c -L. -libft.a
```

This command links the custom **libft** with your program, providing access to all implemented functions.
