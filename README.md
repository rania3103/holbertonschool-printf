
# [_printf function](https://via.placeholder.com/10/00b48a?text=+)

The _printf function prints the output to the standard output (stdout) stream,according to the format specified by the format string.

This version of _printf only handles basic formatting options and does not support advanced options like flag characters, field width, precision, or length modifiers.

It's intended as a simple demonstration and not a full replacement for the standard printf function.

It supports the following format specifiers:



| Format specifier            | Output                                                               |
| ----------------- | ------------------------------------------------------------------ |
| [%c](https://via.placeholder.com/10/00b48a?text=+) | [Character](https://via.placeholder.com/10/0a192f?text=+) |
| [%s](https://via.placeholder.com/10/00b48a?text=+) | [String](https://via.placeholder.com/10/0a192f?text=+) |
| [%d](https://via.placeholder.com/10/00b48a?text=+) | [Decimal integer](https://via.placeholder.com/10/0a192f?text=+) |
| [%i](https://via.placeholder.com/10/00b48a?text=+) | [integer](https://via.placeholder.com/10/0a192f?text=+) |
| [%%](https://via.placeholder.com/10/00b48a?text=+) | [percent followed by another percent](https://via.placeholder.com/10/0a192f?text=+) |

## [Prototype](https://via.placeholder.com/10/00b48a?text=+)
int _printf(const char *format, ...);

## [Running Tests](https://via.placeholder.com/10/00b48a?text=+)

To run tests, run the following command

```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```


## [Usage/Examples](https://via.placeholder.com/10/00b48a?text=+)

```c
_printf("holberton school TUNISIA");
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

holberton school TUNISIA
```c
_printf("I learned %d programming languages.\n",3);
```
[output:](https://via.placeholder.com/10/00b48a?text=+)


I learned 3 programming languages.

```c
_printf("%d",-3187963);
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

-3187963
```c
_printf("%c",65);
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

A
```c
_printf("%s","Hello world");
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

Hello world

```c
_printf("%c is my favourite programming language.",'C');
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

C is my favourite programming language.

```c
_printf("Hello world %%");
```
[output:](https://via.placeholder.com/10/00b48a?text=+)

Hello world %







## [Flowchart](https://via.placeholder.com/10/00b48a?text=+)

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)


## [Our files](https://via.placeholder.com/10/00b48a?text=+)

main.h : header file.

_printf.c : is the main function that handles the custom format specifiers %d, %s, %c, and %%.


functions.c : a set of functions that handle specific format specifiers %d, %s, %c, and %%.


get_func.c : determines the appropriate printing function based on the provided format specifier character.




## [Authors](https://via.placeholder.com/10/00b48a?text=+)

- [@rania3103](https://www.github.com/rania3103)
- [@mariamCHARRADA](https://www.github.com/mariamCHARRADA)
- [@amaly](https://www.github.com/amaly)

