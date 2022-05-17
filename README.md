[README.md](https://github.com/neuwelt/printf/files/8711830/README.md)
# printf

_printf

The printf function sends formatted output to stdout. A custom _printf() for learning purposes was developed by cohort 6# students - Obichukwu Uchenna ,- Isaac Neuwelt.

_printf() function format string is a character string, beginning and ending in its initial shift state, if any. These arguments are placed using the percentage '%' operator


## Authors

- [@isaac neuwelt](https://www.github.com/neuwelt)
- [@Obichukwu Uchenna](https://www.github.com/donsolid)


## Acknowledgements

 - [Awesome Readme Templates](https://awesomeopensource.com/project/elangosundar/awesome-README-templates)
 - [Awesome README](https://github.com/matiassingers/awesome-readme)
 - [How to write a Good readme](https://bulldogjob.com/news/449-how-to-write-a-good-readme-for-your-github-project)


## Use and Example
Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);

Examples:

Basic String: _printf("%s Holberton", "Hello");`

Output: Hello Holberton
Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`

Output: This is an array element arr[32]:A
Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);



## Tasks required for this project
I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life1. I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life.
Write a function that produces output according to a format. Handle the following conversion specifiers:

c

s

%

Education is when you read the fine print. Experience is what you get if you dont
Handle the following conversion specifiers:

d

i

Just because its in print doesn't mean its the gospel
Create a man page for the function

With a face like mine, I do better in print
Handle the following conversion specifiers:

b

What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

u

x

o

x

X

Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

Handle the following custom conversion specifier

S : prints the string.

Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).
How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p

The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:

´+´

space

´#´

Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:

l

h Conversion specifiers to handle: d, i, u, o, x, X
Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:

r : prints the reversed string

The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:

R: prints the rot13'ed string

*

All the above options work well together.
# Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

## GitHub

There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

## More Info
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
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:

## Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
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
Repo:
GitHub repository: printf
