## BDS C Cheatsheet / Footguns
 - You must use CRLF as the line ending (for all files in CPM)
   - To do this in VSCode, click the button in the lower right corner that says “LF” and change it to “CRLF”
 - The main function has no type - just ```main() {}```, no ```int``` 
 - The default return type of a function (if not specified) is ```int```
 - Parameter types come out of line, e.g:
```
method(num)
int num;
{
    ...
}
```

 - Variables and parameters must be declared separately from their assignment
```
int var;
var = 0;
/* NOT: */
/* int var = 0; */
```

 - Single line comments with // do not work. To add comments, you must use block comments: ```/* comment */```

 - The variable name used in ```#defines``` has a max length of 7 characters
   - E.g. ```#define abcdefg 1``` works, but ```#define abcdefgh 1``` does not

 - Function names shouldn’t be longer than 8 characters, otherwise you might run into issues with how the compiler checks for duplicate functions

 - ```bool```, ```float```, ```double```, and ```long/short``` are all not available for use as types.
   - Bools can be replaced with an integer flag (0 = false, 1 = true)
     - ```true``` and ```false``` don’t exist as keywords, unlike other languages
   - The only valid types are ```char```, ```int```, ```unsigned```, ```register```, and ```void```

     - ```register``` and ```void``` are the same as ```int```

     - You can also reference a struct in a place where a type should go

 - To run your programs in CPM, you can automate manually putting in the reading and compilation commands by creating a file ending in .sub in the B Drive, with the following content:

```
A:R file.c
cc file
clink file
file
```

  - To upload that file to CPM, run ```A:R file.sub```

  - Then, to automatically read, compile, and run your program, you only need to type in the command ```A:SUBMIT file```

 - ```static``` and ```register``` variables do not exist

 - Division by 0 results in a value of 0, not an error

 - Type casts are not implemented (e.g. ```(int) someVar``` does not work)

 - ```sizeof (type)``` does not work - only ```sizeof expression```

 - ```typedef``` does not exist
