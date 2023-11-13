# Simple Shell Project

This **Simple shell** team project was done by Software Engineering students of ALX, whose goal is to make us understand how the Unix Shell program works, what are system calls and what are programs and how to create, manage and kill them.
**Simple Shell** is sh-compatible command-line interpreter which can execute commands read from the standard input (the terminal) or file.

## Usage
To run the program, first compile it with
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`
and run it using
`./hsh`

**Simple Shell** can be run in both non-interactive and in interactive way connected to the terminal.
In a non-interactive way we can pipe the out put to the **Simple Shell** like:
```
$ echo "ls ../" | ./hsh
bin dev home lib32
...
```
Also we can use the interactive mode, so that it will start using `$ ` prompt.
Example:
`
$ ./hsh
$ 
`
The first argument will be used as a file, if a command-line argument is invoked.
Example:
`
$ cat hello
  echo "hello, world"
$ ./hsh hello
  hello, world
$
`
## Environment
This environment is an array of *name-value* strings describing variables in the format *NAME=VALUE*. **Simple shell** recieves the environment of the parent process in which it was executed. Some environment variables are:

### HOME
The HOME variable is the directory of the current user and the default directory argument of **cd** builtin command.
### PATH
A list of directories separated by a colon in which the shell looks for commands. A null directory name in the path (represented by any of two adjacent colons, an initial colon, or a trailing colon) indicates the current directory.
### PWD
The current working directory.
## OLDPWD
The previous working directory as set by the **cd** command.

