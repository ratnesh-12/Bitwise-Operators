# Experiment-4
# Tools used:
Programiz online compiler

# 1. Bitwise Operators Program in C++
# Aim:<br>
To demonstrate the use of various bitwise operators in C++ such as AND (&), OR (|), XOR (^), NOT (~), Left Shift (<<) and Right Shift (>>) using integer values.<br>

# Theory:<br>
Bitwise operators perform operations on individual bits of integers. These are low-level, fast, and efficient operations often used in systems programming, hardware-level tasks, or competitive coding.<br>
Given two integers:<br>
a = 4 → binary: 0100<br>
b = 6 → binary: 0110<br>
Bitwise operators:<br>
AND (&) → 0100 & 0110 = 0100 → 4<br>
OR (|) → 0100 | 0110 = 0110 → 6<br>
XOR (^) → 0100 ^ 0110 = 0010 → 2<br>
NOT (~a) → ~0100 = ...11111011 (in 2's complement) → -5<br>
Left Shift (a << 2) → 0100 becomes 0001 0000 (i.e. 4 × 2² = 16)<br>
Right Shift (a >> 1) → 0100 becomes 0010 (i.e. 4 ÷ 2¹ = 2)<br>

# Algorithm:<br>
Start the program.<br>
Declare two integer variables a = 4 and b = 6.<br>
Perform the following bitwise operations:<br>
a & b and store in bitwise_and<br>
a | b and store in bitwise_or<br>
a ^ b and store in bitwise_xor<br>
~a and store in bitwise_not<br>
a << 2 and store in left_shift<br>
a >> 1 and store in right_shift<br>
Display all results using cout.<br>
End the program.<br>

# 2. Bit Manipulation: Set and Reset Specific Bit in C++
# Aim:<br>
To write a C++ program that sets and resets specific bits of an integer using bitwise operators.<br>

# Theory:<br>
Bit Manipulation is the process of directly changing or querying individual bits of a number using bitwise operations.<br>
Setting a bit means turning it to 1.<br>
Formula: number | (1 << bit_position)<br>
Resetting a bit means turning it to 0.<br>
Formula: number & ~(1 << bit_position)<br>
This is useful in low-level programming, flags, embedded systems, and memory-efficient applications.<br>
In this code:<br>
i = 88 → Binary: 01011000<br>
The user is asked for:<br>
A bit position to set (turn 0 → 1)<br>
A bit position to reset (turn 1 → 0)<br>
Results are shown after each operation.<br>

# Algorithm:<br>
Start the program.<br>
Initialize an integer i = 88.<br>
Declare variables: set, reset, bit_to_be_set, bit_to_be_reset.<br>
Ask the user to enter the bit position to set.<br>
Use:<br>
set = i | (1 << bit_to_be_set) to set the bit.<br>
Ask the user to enter the bit position to reset.<br>
Use:<br>
reset = i & (~(1 << bit_to_be_reset)) to reset the bit.<br>
Display the new values after setting and resetting.<br>
End the program.<br>

# Conclusion:
These programs showcase the power of bitwise operations in C++, enabling efficient data manipulation at the binary level.
