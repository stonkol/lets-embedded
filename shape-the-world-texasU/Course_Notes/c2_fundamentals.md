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

## Punctuations

1. `;`    End of statement
1. `:`    Defines a label
1. `,`  Separates elements of a list
1. `( )`  Start and end of a parameter list
1. `{ }`  Start and stop of a compound statement
1. `[ ]`  Start and stop of a array index
1. `" "`  Start and stop of a string
1. `' '`  Start and stop of a character constant

## Special characters can be punctuation marks

Shows single character operators. For a description of these operations, see Chapter 5.

1. `=` assignment statement
1. `@` address of
1. `?` selection
1. `<` less than
1. `>` greater than
1. `!` logical not (true to false, false to true)
1. `~` 1's complement
1. `+` addition
1. `-` subtraction
1. `*` multiply or pointer reference
1. `/` divide
1. `%` modulo, division remainder
1. `|` logical or
1. `&` logical and, or address of
1. `^` logical exclusive or
1. `.` used to access parts of a structure

## Special characters can be operators

1. `==` equal to comparison
1. `<=` less than or equal to
1. `>=` greater than or equal to
1. `!=` not equal to
1. `<<` shift left
1. `>>` shift right
1. `++` increment
1. `--` decrement
1. `&&` Boolean and
1. `||` Boolean or
1. `+=` add value to
1. `-=` subtract value to
1. `*=` multiply value to
1. `/=` divide value to
1. `|=` or value to
1. `&=` and value to
1. `^=` exclusive or value to
1. `<<=` shift value left
1. `>>=` shift value right
1. `%=` modulo divide value to
1. `->` pointer to a structure

## Simple program illustrating C arithmetic operators

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

> [!Important]
> 1. Gently connect the microUSB to the microcontroller, is really fragile./
> 2. Do not connect/disconnect any wire while the power is ON.