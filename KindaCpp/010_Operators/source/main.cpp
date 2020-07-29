/*
 * So far, most of our data are numbers, 
 * but they would be pretty useless if we cannot do anything with them, right?
 *
 * Here is one fundamental way to do so through operators.
 * It is basically a symbol to tell the program what to do with the operand(s) and how.
 * Let's look at one of the most recognizable operators out there : the plus sign.
 */

#include <iostream>

int main()
{
	int a = 5;
	int b = a + 6; //Here, we take a and 6 as the operands for the plus sign, and assign the result to b
	std::cout << b << std::endl;

	double c = 123;
	double d = c - (a + b); //We can organize the order of operations by using the brackets, just like math
	std::cout << d << std::endl; //See conversion later for why the compiler may warn us about the code above

	double e = 2.6;
	double f = 2 * e; //This multiplication (I hope you could guess) between int and double is possible  
	std::cout << f << std::endl; //See conversion later

	int g = -3;
	int h = 7 / g; //This division might not yield the result you would expect. Also see conversion later
	std::cout << h << std::endl;

	return 0; //Also note that there might be errors when the operands are not of valid types for each operator
}

/*
 * This should be obvious for most of you. What the operator + do to TWO NUMBERS is add them together
 * Actually, operators may be used with ANYTHING as long as we tell the program what to do. It is kinda fun.
 * But, that part is quite far from here, so be patient.
 */

/*
 * The operators for starters include :
 * + A plus sign for addition
 * - A minus sign for subtraction
 * * An asterisk for multiplication
 * / A forward-slash for division
 * % A percent sign for modulus
 * ** A double-asterisk sing for powers
 * 
 * and manymanymanymanymanymanymore awaiting you ahead. Note that some of these can be used with other
 * data types aprt form numbers. I will mention them later if I can still remember to do so.
 */

/*
 * Oh, one more thing.
 * Did you see what I did there in line 6, where I used the word "operand(s)"?
 * That means not all operators require two operands like + or -. Some require only one operand.
 * We (actually not us, but someone who created a course in C++ I guess) then can kinda catagorize operators into 3 groups :
 * - Unary operator : operates on 1 operand
 * - Binary operator : operates on 2 operands
 * - Ternary operator : operates on 3 operands
 *
 * So far, the operators I demonstrated above are then classified as binary operators, as they all take two numbers.
 * More of the operators are coming, but I guess it kinda starts to be "not basic" if I am to include them here.
 */
