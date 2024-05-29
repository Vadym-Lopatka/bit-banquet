The representation of hello.c illustrates a fundamental idea:
All information in a system—including disk files,
programs stored in memory user data stored in memory,
and data transferred across a network—is represented as a bunch of bits.

The only thing that distinguishes different data objects is the context in which we view them.
For example, in different contexts, the same sequence of bytes might represent an integer,
floating-point number, character string, or machine instruction.

### default command
`cc -o bunch bunch_of_bits.c && ./bunch`

### with passing the filename(readme.md, in this case)
`cc -o bunch bunch_of_bits.c && ./bunch readme.md`
