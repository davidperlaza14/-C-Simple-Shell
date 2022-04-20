# Simple Shell project 0x16.c

## execution

* is started with the standard input connected to the terminal. To start, compile all .c located in this repository by using this command:

``
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
``

## testing
* Your shell should work like this in interactive mode:

````
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
````

## PATH
 is A colon-separated list of directories in which the shell looks for commands. A null directory name in the path (represented by any of two adjacent colons, an initial colon, or a trailing colon) indicates the current directory
 
````
* $ echo $PATH
 
 /home/vagrant/.cargo/bin:/home/vagrant/.local/bin:/home/vagrant/.rbenv/plugins/ruby-build/
 ````
## Command Execution
After receiving a command, shell.c tokenizes it into words using " " as a delimiter. The first word is considered the command and all remaining words are considered arguments to that command. then proceeds with the following actions:

* If the first character of the command is neither a slash (\) nor dot (.), the shell searches for it in the list of shell builtins. If there exists a builtin by that name, the builtin is invoked
* If the first character of the command is none of a slash (\), dot (.), nor builtin, our shell searches each element of the PATH environmental variable for a directory containing an executable file by that name
* If the first character of the command is a slash (\) or dot (.) or either of the above searches was successful, the shell executes the named program with any remaining given arguments in a separate execution environment.






