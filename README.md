
# [_printf function](https://via.placeholder.com/10/00b48a?text=+)

The _printf function prints the output to the standard output (stdout) stream, based on the given format string.

This version of _printf only handles basic formatting options and does not support advanced features like flag characters, field width, precision, or length modifiers.

This implementation is a simple demonstration and not a complete replacement for the standard printf function.

It supports the following format specifiers:



| Format specifier            | Output                                                               |
| ----------------- | ------------------------------------------------------------------ |
| [%c]() | [Character]() |
| [%s](https://via.placeholder.com/10/00b48a?text=+) | [String](https://via.placeholder.com/10/0a192f?text=+) |
| [%d](https://via.placeholder.com/10/00b48a?text=+) | [Decimal integer](https://via.placeholder.com/10/0a192f?text=+) |
| [%i](https://via.placeholder.com/10/00b48a?text=+) | [integer](https://via.placeholder.com/10/0a192f?text=+) |
| [%%](https://via.placeholder.com/10/00b48a?text=+) | [percent character '%'](https://via.placeholder.com/10/0a192f?text=+) |

## [Prototype](https://via.placeholder.com/10/00b48a?text=+)
int _printf(const char *format, ...);

## [Compilation](https://via.placeholder.com/10/00b48a?text=+)

```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```


## [Usage/Examples](https://via.placeholder.com/10/00b48a?text=+)

```c
_printf("Holberton School TUNISIA");
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

Holberton School TUNISIA
```c
_printf("I learned %d programming languages.\n", 3);
```
[output:](https://via.placeholder.com/10/00b48a?text=+)


I learned 3 programming languages.

```c
_printf("%d", -3187963);
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

-3187963
```c
_printf("%c", 65);
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

A
```c
_printf("%s", "Hello world");
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

Hello world

```c
_printf("%c is my favourite programming language.", 'C');
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

C is my favourite programming language.

```c
_printf("Hello world %%.");
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

Hello world %.







## [Flowchart](https://via.placeholder.com/10/00b48a?text=+)

![App Screenshot](./printf_flowchart.jpg)


## [Our files](https://via.placeholder.com/10/00b48a?text=+)

- **main.h** : Header file. It serves as an interface for other files to access the functions defined in the implementation.

- **_printf.c** : Contains the main function that handles the custom format specifiers: It takes the format string and any additional arguments, processes the format specifiers, and calls the appropriate functions to handle each specifier. 


- **functions.c** : Contains a set of functions that handle specific format specifiers: %i, %d, %s, %c, and %%. Each function takes the corresponding argument and prints it in the desired format.


- **get_func.c** : Determines the appropriate printing function based on the provided format specifier character (i, d, s, c, %).




## [Authors](https://via.placeholder.com/10/00b48a?text=+)

- [@rania3103](https://www.github.com/rania3103)
- [@MariamCHARRADA](https://www.github.com/MariamCHARRADA)
- [@amaalyy](https://www.github.com/amaalyy)
