# OutLine
- [What's Preprocessors](#whats-preprocessors)
- [preprocessor Directives types](#preprocessor-directives-types)
  - [Macro](#macro)
  - [File Inclusion](#file-inclusion)
  - [Conditional Compilation](#conditional-compilation)
  - [Other Directives](#other-directives)



# What's Preprocessors
preprocessor are programms that process our source code before compilation.<br>
Preprocessor programs provide preprocessor directives that tell the compiler to preprocess the source code before compiling.<br>
All of these preprocessor directives begin with a ‘#’ (hash) symbol.<br>
For example, #include will include extra code in your program. We can place these preprocessor directives anywhere in our program.<br>

## preprocessor Directives types
  1. Macros
  2. File Inclusion
  3. Conditional Compilation
  4. Other directives

### Macro 
Macros are pieces of code in a program that is given some name.So the compiler replaces the name with the actual piece of code.
The ‘#define’ directive is used to define a macro.


```
#incude <iostream>
#define Eman 5

using namespace std;

int main(){
    int x = Eman;
    cout << x << "\n";
    return 0;
}

```
- output will be 

   ```
   5
   the word 'Eman' is called macro template
   and 5 is called macro expansion 
   ```
  - Note: 
     - There is no semi-colon (;) at the end of the macro definition. Macro definitions do not need a semi-colon to end.

### File Inclusion

This type of preprocessor directive tells the compiler to include a file in the source code program.

There are two types of files that can be included by the user in the program: 
  1. Header files or Standard files
     - These files contain definitions of pre-defined functions like printf(), scanf()
     - For example :
       - standard I/O functions are in 'iostream' file
       - syntax 
         ```
         #include <File Name>
         ```
  2. User-defined files
      - When a program becomes very large, it is a good practice to divide it into smaller files and include them whenever needed.
      - syntax :
      ```
      #include "filename"


### Conditional Compilation
helps to compile a specific portion of the program or to skip the compilation of some specific part of the program based on some conditions.
 - syntax 
 ```
 #ifdef macro_name
    statement1;
    statement2;
    statement3;
    .
    .
    .
    statementN;
#endif
If the macro with the name ‘macro_name‘ is defined, then the block of statements will execute normally, 
but if it is not defined, the compiler will simply skip this block of statements. 
  ```

### Other Directives 
#undef Directive: The #undef directive is used to undefine an existing macro.
  - syntax :
  ```
  #undef LIMIT
  Using this statement will undefine the existing macro LIMIT. After this statement, every “#ifdef LIMIT” statement will evaluate as false.
  ```
