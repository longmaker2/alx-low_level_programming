# 0x0F. C - Function pointers

## Resources
### Read or watch:

- [Function Pointer in C](https://intranet.alxswe.com/rltoken/yt8Q9jxzT_gyRAvnNkAgkw)
- [Pointers to functions](https://intranet.alxswe.com/rltoken/wP-yWvo9IqbcQsywMmh_iQ)
- [Function Pointers in C / C++](https://intranet.alxswe.com/rltoken/dAN27S1yyBPeBa8RGfvPNA)
- [why pointers to functions?](https://intranet.alxswe.com/rltoken/1vvWpH9Ux8axOLc9jPWcMw)
- [Everything you need to know about pointers in C](https://intranet.alxswe.com/rltoken/G_0lQzs4LAd1e5tKhNMPiw)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/ITYG4BLMI4_5Unpdwue2tw), without the help of Google:

### General
- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

### Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
# General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
- Don’t forget to push your header file
- All your header files should be include guarded
