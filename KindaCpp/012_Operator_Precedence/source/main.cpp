/*
 * For operators, we might be quite comfortable when doing simple things like
 *
 *		int a = 1 + 2;
 *
 * But what if there are more than 1 operator working together like this
 * 
 *		int a = 2 * (5 + 4) / (double) 3 - 1
 * 
 * Well, this is obviously a bad practice, but this is just for the sake of learning.
 * How do we know what operation will be done first?
 * The priority of these operators are called operator precedence.
 * Let's see some examples below.
 */

#include <iostream>

int main()
{
	int a = 2 * (5 + 4) / (double)3 - 1; //An example of multiple arithmatic operators and C-style casting operator
	std::cout << a << std::endl;

	int b = -4;
	int c = b = a; //An example of multiple assignment operators =
	std::cout << a << '\t' << b << '\t' << c << std::endl; //An example of multiple left-shift operators <<
	//Don't worry about that char '\t' right now. It's just a tab
	return 0;
}

/*
 * In the first example, the precedence of the arithmatic operators follows () => (double) *,/ => +,- => =
 * The calculations are done from left to right.
 * It is just like PEMDAS we use in math, with some extras due to non-arithmatic operators like type-casting operators.
 * Fun facts : I purposedly did not use a thin arrow -> becauseeee...ahahahaha....
 * it is actually another operator we will be using in the future, but a distant one.
 * Therefore, the value stored in the variable a should be
 *
 *		2 * (5 + 4) / (double) 3 - 1 = 2 * 9 / 3.0 -1 = 6.0 - 1 = 5.0 = 5 (because a stores an int value)
 *
 * Now, what about this assignments
 *
 *		c = b = a;
 *
 * If you run the code, you will see that all a, b, and c are set to 5. Why!?
 *
 * Despite the fact that b is initialized to -4, the assignment operator = operates from RIGHT TO LEFT,
 * meaning that this line of code is equivalent to this code
 *
 *		b = a;
 *		c = b;
 *
 * When a is evaluated to 5, b is reassigned to a, which is now 5.
 * Then, c is assigned to b, which is now 5 as well.
 *
 * What about that line of code that prints us the values?
 *
 *		std::cout << a << '\t' << b << '\t' << c cstd::endl;
 *
 * For now, just understand that this operation is done from left to right as well, so a, b, c are printed
 * in this particular order. The reason this works for std::cout can be found in the file regarding iostream.
 *
 * At least, what we should take away is that we should be aware of operator precedence.
 * There are a whole list of operator precedence in C++ in the internet, so look them up when needed.
 
