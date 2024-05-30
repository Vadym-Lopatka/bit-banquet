to

## How to run:
1. Go to src `cd bit-banquet/src`
2. Run command `cc -o bunch bunch_of_bits.c && ./bunch`
3. Or run the command with your filename(.gitignore file, in this example)
`cc -o bunch bunch_of_bits.c && ./bunch ../.gitignore`


The program illustrates a fundamental idea:
All information in a system — including disk files,
programs stored in memory, user files, or data transferred across a network
— is no more but simply bunch of bits. Zeros and ones.
And only context makes them meaningful as the same sequence
of bits might represent different value depending on the context.
It might be integer, character string or machine instruction.
