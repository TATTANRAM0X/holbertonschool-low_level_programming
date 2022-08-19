***
![image](https://us.123rf.com/450wm/fad82/fad821710/fad82171000042/87527707-concepto-de-programaci%C3%B3n-y-codificaci%C3%B3n-programador-de-codificaci%C3%B3n-en-la-computadora-port%C3%A1til-.jpg)
***
# Simple Shell Project

Project by [Jhonatan Ramos](https://github.com/TATTANRAM0X) and [Luis Miguel Moreno](https://github.com/miguel5219)

In this project we were assigned to make a functional Shell, with its basic commands.

## Table of contents

1. [General info](#general-info)
2. [Requirements for this project](#requirements-for-this.project)
3. [Compilation and Testing](#compilation-and-testing)
4. [Files of shell](#files-of-shell)
5. [Collaboration](#collaboration)

## General info

```Simple Shell``` A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts. The most generic sense of the term shell means any program that users employ to type commands. A shell hides the details of the underlying operating system and manages the technical details of the operating system's application programming interface, which is the level of the operating system that programs running on that operating system use.

## Requirements

- Allowed editors: ```vi```, ```vim```, ```emacs```.
- All the files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```.
- All your files should end with a new line.
- A ```README.md``` file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks.
- No more than 5 functions per file.
- All your header files should be include guarded.
- Use system calls only when you need to why?

## Compilation and Testing

### Compilation

Your shell will be compiled this way:
~~~
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
~~~

### Testing

Your shell should work like this in interactive mode:
~~~
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
~~~

But also in non-interactive mode:
~~~
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
~~~

## Files of shell

| Files |
| ------------- |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/AUTHORS">AUTHORS</a> | 
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/README.md">README.md</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/_free_ptr.c">_free_ptr.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/fork_process.c">fork_process.c</a> | 
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/get_env.c">get_env.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/main.c">main.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/main.h">main.h</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/man_1_simple_shell">man_1_simple_shell</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_cat.c">str_cat.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_dup.c">str_dup.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_len.c">str_len.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/strn_cmp.c">strn_cmp.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/token_counter.c">token_counter.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/tokenizer.c">tokenizer.c</a> |

## Collaboration

[Jhonatan Ramos](https://github.com/TATTANRAM0X)  5202@holbertonstudents.com 

[Luis Miguel Moreno](https://github.com/miguel5219)  5219@holbertonstudents.com 

***
![image](data:image/png;base64,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)
***

#### For Holberton School
