0x11. C - printf

** COLLABORATION PROJECT BY LYNTON AND JADLINE **

** A SIMULATION OF PRINTF **

Concepts
For this project, we expect you to look at these concepts:

Group Projects
Pair Programming - How To
Flowcharts
Technical Writing

** Background Context **

Resources
Read or watch:

Secrets of printf
Group Projects concept page (Don’t forget to read this)
Flowcharts concept page
man or help:

printf (3)

Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Compilation
Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

__ TASKS __

__ 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life __
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

__ 1. Education is when you read the fine print. Experience is what you get if you don't __


Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

__ 2. With a face like mine, I do better in print __

Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

__ 3. What one has not experienced, one will never understand in print __

Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

__ 4. Nothing in fine print is ever good news __

Use a local buffer of 1024 chars in order to call write as little as possible.

__ 5. My weakness is wearing too much leopard print __

Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

__ 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print __

Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

__ 7. The big print gives and the small print takes away __
Handle the following flag characters for non-custom conversion specifiers:

+
space
#

__ 8. Sarcasm is lost in print __

Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

__ 9. Print some money and give it to us for the rain forests __
Handle the field width for non-custom conversion specifiers.

__ 10. The negative is the equivalent of the composer's score, and the print the performance __

Handle the precision for non-custom conversion specifiers.

__ 11. It's depressing when you're still around and your albums are out of print __

Handle the 0 flag character for non-custom conversion specifiers.

__ 12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection __

Handle the - flag character for non-custom conversion specifiers.

__ 13. Print is the sharpest and the strongest weapon of our party __

Handle the following custom conversion specifier:

r : prints the reversed string

__ 14. The flood of print has turned reading into a process of gulping rather than savoring __
Handle the following custom conversion specifier:

R: prints the rot13'ed string

__ 15. * __

All the above options work well together.

