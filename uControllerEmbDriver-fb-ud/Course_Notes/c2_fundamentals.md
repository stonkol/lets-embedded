# 2. Fundamentals

In C, we use #define MACROS to assign a symbolic names to the corresponding addresses of the ports.

```C
# define GPIO_PORTA_DATA_R       (*((volatile unsigned long *)0x400043FC))
# define GPIO_PORTA_DIR_R        (*((volatile unsigned long *)0x40004400))
# define GPIO_PORTA_DEN_R        (*((volatile unsigned long *)0x4000451C))
# define SYSCTL_PRGPIO_R         (*((volatile unsigned long*)0x400FEA08))
```

If the data needs to be permanent, then it is allocates in global space. If the software will change its value then it will be allocated in RAM.

```C
unsigned int cnt; // A 32-bit unsigned counter.
```

The compiler will place these lines with the program so that they will be defined in Flash ROM memory.

```C
const unsigned char key=0x23; // The key code 0100011 (binary)
```

> [!IMPORTANT]
> At this point I will warn the reader, just because C allows many different forms of syntax,  proper syntax will have a profound impact on the quality of our code. Although spaces, tabs, and line breaks are syntactically equivalent, their proper usage will have a profound impact on the readability of your software.
> [!CAUTION]
> Punctuation marks (semicolons, colons, commas, apostrophes, quotation marks, braces, brackets, and parentheses) are very important in C. It is one of the most frequent sources of errors for both the beginning and experienced programmers.

### Punctuation and Meaning

`;`    End of statement
`:`    Defines a label
`,`  Separates elements of a list
`( )`  Start and end of a parameter list
`{ }`  Start and stop of a compound statement
`[ ]`  Start and stop of a array index
`" "`  Start and stop of a string
`' '`  Start and stop of a character constant

The next table shows the single character operators. For a description of these operations, see Chapter 5.

### Special characters can be punctuation marks

Operation - Meaning
`=` assignment statement
`@` address of
`?` selection
`<` less than
`>` greater than
`!` logical not (true to false, false to true)
`~` 1's complement
`+` addition
`-` subtraction
`*` multiply or pointer reference
`/` divide
`%` modulo, division remainder
`|` logical or
`&` logical and, or address of
`^` logical exclusive or
`.` used to access parts of a structure

### Special characters can be operators

Operation - Meaning
`==` equal to comparison
`<=` less than or equal to
`>=` greater than or equal to
`!=` not equal to
`<<` shift left
`>>` shift right
`++` increment
`--` decrement
`&&` Boolean and
`||` Boolean or
`+=` add value to
`-=` subtract value to
`*=` multiply value to
`/=` divide value to
`|=` or value to
`&=` and value to
`^=` exclusive or value to
`<<=` shift value left
`>>=` shift value right
`%=` modulo divide value to
`->` pointer to a structure

### Simple program illustrating C arithmetic operators

The standard arithmetic precedence apply. For a detailed description of these operations, see Chapter 5.

```C
short x,y,z; /* Three variables */
void Example(void){
   x=1; y=2;   /* set the values of x and y */
   z = x+4*y;  /* arithmetic operation */  
   x++;        /* same as x=x+1;   */   
   y--;        /* same as y=y-1;   */   
   x = y<<2;   /* left shift same as x=4*y;   */    
   z = y>>2;   /* right shift same as x=y/4;  */    
   y += 2;     /* same as y=y+2;   */   
}
```
