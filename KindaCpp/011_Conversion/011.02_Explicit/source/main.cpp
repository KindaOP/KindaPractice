/*
 * In this file, we will talk about "explicit conversion", or basically how to
 * manually (and forcefully) convert (or "cast") the type of a value.
 * Now, don't misunderstand this. You cannot convert the type of a variable. This is a strictly-typed language.
 * We can, however, convert the type of a value (or should I say a "temporary" value. That is a distant topic).
 */

#include <iostream>

int main()
{
	int a = 5;
	int b = a + 6;
	double c = 123; //This shouldn't have any problem since a double has a larger size than an int
	double d = c - ((double)a + static_cast<double>(b)); 
	//To get rid of the previous warning, simply convert a and b to double before adding them together
	std::cout << d << std::endl;

	int e = -3;
	int f = 7.0 / e; //To get a result with a decimal point, one of the operands must be a decimal number
	//You can either use 7.0 instead of 7 or cast e to double, or both if you want
	std::cout << f << std::endl;

	return 0;
}

/*
 * Assuming we are appropriately casting values (like not just casting an int to string or something like that),
 * there are 2 ways we can explicitly convert the type explicitly :
 * 1. Use a C-style casting by putting a bracket of the desired type in front of the value.
 *
 *		int a = 5 + (int)7.5;
 *		float b = (float)a - 4.0;
 *
 * 2. Use a C++-style casting by using the syntax with the desired type in the <> like this
 *
 *		int a = 5 + static_cast<int>(7.5);
 *		float b = static_cast<float>(a) - 4.0;
 *
 * Note that in the above examples, only a and not 4.0 is converted to float.
 * If you want to cast the result to float, then use the brackets like this
 *
 *		float b = (float)(a - 4.0);
 *    float b = static_cast<float>(a - 4.0);
 *
 * As far as I know, there is no difference between these two ways of converting types. 
 * However, the static_cast<>() enables you to find it more easily by using any search boxes.
 *
 * Since explicit conversion is only done on values, the variables used will NOT be affected.
 * In the example above, after those lines, a still stores an int value of 5.
 */
