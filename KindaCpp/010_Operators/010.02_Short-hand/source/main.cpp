/*
 * When we can assign an expression containing a variable to itself like this
 *
 *		x = x + 2;
 *
 * it is cool and all, but you know, we are lazy, and we strive for a way to not write
 * this entire thing, so we have another option called short-hand operators
 */

#include <iostream>

int main()
{
	int i = 0;
	std::cout << i << std::endl;
	i += 1;
	std::cout << i<< std::endl;

	int j = 2;
	std::cout << j << std::endl;
	j *= 5;
	std::cout << j << std::endl;

	int k = 0;
	std::cout << k + 2 << std::endl; //Note how this k+2 is NOT assigned to k, unlike using the short hand operators
	std::cout << k << std::endl;

	//The same goes for several other arithmatic operators
	return 0;
}

/*
 * The short-hand operators are for us to more simply do arithmatic operations and assign the result
 * to itself, or update that variable. As an example, the code in each pair below is equivalent to each other.
 *
 *		x = x + 1;
 *		x += 1;
 *
 *		y = y - 2;
 *		y -= 2;
 *
 *		z = z * 3;
 *		z *= 3;
 *
 *		w = w / 4;
 *		w *= 4;
 *
 *		v = v % 5;
 *		v %= 5;
 *
 * In the end, these are just syntaxes, nothing new, but they are worth using in many situations.
 * In fact, in my opinion, the short-hand code may be better in terms of performance too that calling
 * these operators short-hand may not be entirely correct. Anyway, more details in the future.
 */
