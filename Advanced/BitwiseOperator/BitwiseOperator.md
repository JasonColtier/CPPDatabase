Bitwise operators are used to perform bit-level operations on binary numbers, which is common in low-level programming and scenarios where performance is critical. They operate on the individual bits of the operands. Here's a rundown of the primary bitwise operators:
Types of Bitwise Operators

>AND (&):
    Performs a logical AND operation on each pair of corresponding bits of two numbers.
    Example: 5 & 3 (binary: 0101 & 0011) results in 0001 (1 in decimal).

>OR (|):
    Performs a logical OR operation on each pair of corresponding bits.
    Example: 5 | 3 (binary: 0101 | 0011) results in 0111 (7 in decimal).

>XOR (^):
    Performs a logical exclusive OR operation on each pair of corresponding bits.
    Example: 5 ^ 3 (binary: 0101 ^ 0011) results in 0110 (6 in decimal).

>NOT (~):
    Performs a bitwise NOT operation, inverting all the bits of the number.
    Example: ~5 (binary: 0101) results in 1010 (in two's complement form for a 4-bit number, it's -6 in decimal).

>Left Shift (<<):
    Shifts the bits of the first operand left by the number of positions specified by the second operand, filling with zeros.
    Example: 5 << 1 (binary: 0101 << 1) results in 1010 (10 in decimal).

>Right Shift (>>):
    Shifts the bits of the first operand right by the number of positions specified by the second operand.
    Example: 5 >> 1 (binary: 0101 >> 1) results in 0010 (2 in decimal).