/*
 * Okay, at first I thought I would talk about this much much later than this,
 * but from the previous file, this became quite a problem, so I think I should address it now.
 *
 * From the previous file, the compiler warned us about doing this :

 *		double c = 123;
 *		double d = c - (a + b);
 *
 * Why? Because we declared a and b as integers, but the compiler uses the operator + to add 2 numbers
 * of the same type. But again, our program ran just fine despite the warning.
 * To explain this (and other stuffs I promised to explain), we need the concept of conversion.
 */

//My bad, for more clarity I should've used "type conversion" instead of conversion, but that's kinda too long.

#include <iostream>

int main()
{
	int a = 5;
	int b = a + 6;
	double c = 123; //Here, 123 is actually int, but it is implcitly converted to double and stored in c
	double d = c - (a + b); //Again a + b is int, but it is implicitly converted to double and subtracted form c
	std::cout << d << std::endl;

	int e = -3;
	int f = 7 / e; //This division, however, results in an int value. The result of 7 / e will not be converted automatically to float or double
	std::cout << f << std::endl; //As a result, the decimals are "truncated" or simply removed, NOT rounded.

	return 0;
}

/*
 * Type conversion is just when a value of one type is converted into another type. Nothing more, nothing less.
 * It is important, though, because it helps us prevent loss of data, and in the future, we will be dealing with
 * more complicated data types, which heavily depend on this concept.
 *
 * Up until now, we haven't write any code to convert any value, but the program has done it on its own.
 * We call this "implicit conversion", and it may be beneficial for us to understand where this might occur.
 */

/*
 * In the case of
 *
 *		double d = c - (a + b);
 *
 * since d is expected to be a double, c and (a + b) is expected to be a double.
 * And since a + b is expected to be a double, a and b are expected to be a double.
 * To prevent loss of data, arithmatic overflow (idk this in depth really lol) and stuffs, we might want to
 * "explicitly" convert a and b to double first, but those will be demonstrated in the next file.
 * 
 * Some conversions may result in a risk of data loss too, such as
 *
 *		int x = 10000;
 *		char y = x;
 *
 * since we know that char can store only whole numbers less than 256.
 * However, some are actually pretty useful for us, such as when we create an std::string
 *
 *		include <string>
 *		int main() {
 *			std::string s = "Hello World";
 *		}
 *
 * This "Hello World" thingy is actually  const char* as mentioned before, but it can be implicitly converted
 * into an std::string and get stored in std::string s.
 * Therefore, use implicit conversion wisely. Or if you are so paranoid about it, then see the next file.
 */
