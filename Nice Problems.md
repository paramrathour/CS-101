Kempner Series
Schröder_number
all nummbers have 3 numberphile
	count 3
benford's law
conic sections (ellipse, parabola, hypebola) using simplecpp
tiling
sine wave
fourier drawing
Generalizations_of_Fibonacci_numbers
	Semi-Fibonacci sequence
	
benford's law - arrays
birthday problem
https://www.youtube.com/watch?v=GFLkou8NvJo
# Practice Problem ideas
Heronian triangle https://en.wikipedia.org/wiki/Heronian_triangle
Heron's formula (numerically stable version) https://en.wikipedia.org/wiki/Heron%27s_formula
https://en.wikipedia.org/wiki/Gijswijt%27s_sequence

Vignere Cipher
	Diana Cipher
BrainFuck
Valid Brackets
Pattern Printing
Continued Fractions (numerator/denominator)
http://www.javascripter.net/math/index.htm
Padovan sequence

## Function
✓ Euler's totient function

## Recursion
✓ Tower of Hanoi - Recursive, Iterative
✓ Hereditary Representation 
✓ Fast exponentiation with modulo a^(b^c) % m
Determinant

## Arrays
### Pseudorandom numbers
✓ Linear-feedback shift register
✓ Josephus Problem - Simulation, General Answer
Rotate a matrix
Kolakoski sequence
✓ Recaman Sequence with Drawing
Look-and-say Sequence
Bell triangle https://en.wikipedia.org/wiki/Bell_triangle

## Classes
Infinite Precision Arithmetic, Fractions as numerators and denominators

## Project type
Tennis Scoreboard
Moustique Cipher
Minesweeper
Sudoku Solver

## Simplecpp Graphics
Sandpiles
Ulam Spiral
Cellular Automaton

## STL
CodeForces

# Lab
## Perfect Faro Shuffle (Outer and Inner)
Outer - abcd efgh ijkl mnop ABCD EFGH IJKL MNOP -> aAbB cCdD eEfF gGhH iIjJ kKlL mMnN oOpP (5 shuffles restores the order)
Inner - abcd efgh ijkl mnop ABCD EFGH IJKL MNOP -> AaBb CcDd EeFf GgHh IiJj KkLl MmNn OoPp (10 shuffles restores the order)

## Pseudorandom Number Generator
✓ LFSRs are cool! (but will require bit arithmetic/array and a xor function, Can be a good optional problem). Might also help in project

## Error Correction and Codes
✓ ISBN number (Validity and Prediction, Mod 11)
	Example - 933290152X (ISBN number of 3)
	remove any digit 93_290152X
		(9×10 + 3×9 + ?×8 + 2×7 + 9×6 + 0×5 + 1×4 + 5×3 + 2×2 + 10×1) % 11 = 0 => (9 + ?×8) % 11 = 0 => Can try all ? or
		?×8 = -9 (mod 11) => ?×8 = 2 (mod 11) => ? = 2×8^{-1} (mod 11) => ? = 2×8^{11-2} (mod 11) = 3

Hamming Code - https://en.wikipedia.org/wiki/Hamming_code

Gray Code
✓ Generation - Reflected Binary Code
Conversion
	Binary to Gray g_0 = b_0 ⊕ b_1, g_1 = b_1 ⊕ b_2,..., g_{n-1} = b_{n-1} ⊕ b_n, g_n = b_n
		Bit i of a Gray-coded integer is the parity of bit i and the bit to the left of i in the corresponding Binary integer (using 0 if there is no bit to the left of i).
	Gray to Binary b_n = g_n, b_{n-1} = g_n + g_{n-1},..., g_0 = g_n + g_{n-1} + ··· + g_1 + g_0
		Bit i of a Binary integer is the parity of all the bits at and to the left of position i in the corresponding Gray-coded integer.

## Discrete Logarithm
r^x = a (mod m) (r is a primitive root of m and gcd(a,m) = 1)

## Binomial Coefficient

## Interesting Numbers
Friendly Numbers
	Equivalent Fractions (without using long long), Reduce fractions 
Amicable Numbers (Less pairs, can be Hard Coded)

## Base -2
-3/-2 = 2 × (-2) + 1
2/-2 = -1 × (-2) + 0
-1/-2 = 1 × (-2) + 1
1/-2 = 0 × (-2) + 1
(n%2 + 2) % 2;

## Geometry
Type of Triangle (Scalene, Isosceles, Equilateral or Acute, Right, Obtuse)
Area of a Polygon (Coordinate Geometry)

## General Programming
Formatter
	aLtErNaTiNg cApS
	tOGGLE cASE
	Capitalize Each Word
	UPPERCASE
	lowercase
	Sentence case.