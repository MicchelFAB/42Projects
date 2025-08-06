# 42Porto Level 1 - ft_printf

## Project Description

This project is a custom implementation of the `printf` function. The goal is to recreate the functionality of the standard `printf` function in C, which allows formatted output to the standard output stream.

## Usage Instructions

To compile the project, run the following command:

```
make
```

This will generate the `libftprintf.a` library file.

To compile and run the project with one of the main test files, use the following command:

```
cc -Wall -Werror -Wextra <main_file.c> libftprintf.a
./a.out
```

Replace `<main_file.c>` with either `main.c` or `main2.c` depending on which test file you want to use.

## Supported Format Specifiers

The custom `printf` implementation supports the following format specifiers:

- `%c`: Character
- `%s`: String
- `%p`: Pointer
- `%d`: Decimal integer
- `%i`: Integer
- `%u`: Unsigned integer
- `%x`: Hexadecimal (lowercase)
- `%X`: Hexadecimal (uppercase)
- `%%`: Percent sign
