[This simple program](https://github.com/Vadym-Lopatka/bit-banquet/blob/main/src/bunch_of_bits.c) was created while playing with old good C language.

It illustrates a fundamental idea:
All information in a system — including disk files, programs stored in memory, user files, or data transferred across a network— is no more but simply a bunch of bits.
Zeros and ones.
Only context makes them meaningful, as the same sequence of bits might represent different values depending on the context.
It might be an integer, character string, or machine instruction.


Most programs begin their life as a source program (or source file)
that the programmer creates with an editor and saves in a text file.
Any file is a sequence of bits, each with a value of 0 or 1, organized in 8-bit chunks called bytes.
Each byte represents some text character.
Most computer systems represent text characters using the ASCII(extended by UTF-8 now) standard that defines each character with a unique byte-size integer value.

For demonstration, we put a hello.c file as input to our program.
```
#include <stdio.h>

int main (void) {
    printf("Hello, World!\n");
    return 0;
}
```

The result would be formatted in the following way:
```char >> ascii_code >> bit_array```
representing every symbol in [hello.c](https://github.com/Vadym-Lopatka/bit-banquet/blob/main/src/hello.c).
```
#  >> 35  >> 00100011
i  >> 105 >> 01101001
n  >> 110 >> 01101110
c  >> 99  >> 01100011
l  >> 108 >> 01101100
u  >> 117 >> 01110101
d  >> 100 >> 01100100
e  >> 101 >> 01100101
   >> 32  >> 00100000 // space symbol
<  >> 60  >> 00111100
s  >> 115 >> 01110011
t  >> 116 >> 01110100
d  >> 100 >> 01100100
i  >> 105 >> 01101001
o  >> 111 >> 01101111
.  >> 46  >> 00101110
h  >> 104 >> 01101000
>  >> 62  >> 00111110
\n >> 10  >> 00001010
...
```

## Try on your files:
1. Go to src folder
```
cd bit-banquet/src
```
2. Run the command that consumes with [hello.c](https://github.com/Vadym-Lopatka/bit-banquet/blob/main/src/hello.c) as the default input
```
cc -o bits main.c && ./bits
```
3. Or pass your own file as an input ([.gitignore](https://github.com/Vadym-Lopatka/bit-banquet/blob/main/.gitignore) in this example)
```
cc -o bits main.c && ./bits ../.gitignore
```
