/*
 * When we can assign an expression containing a variable to itself like this
 *
 *		x = x + 2;
 *
 * trust me, there will be lots of times where you want to increase or decrease the value of 
 * a variable by 1. This is so common since it is just like "counting" in our daily lives.
 * 
 * So, doing so by using a short-hand operator like this
 *
 *		x += 1;
 *
 * is kinda impressive, but we can do it even better and cleaner than that by using
 * something called increment and decrement operators.
 */

#include <iostream>

int main()
{
	int i = 0;
	std::cout << i << std::endl;
	std::cout << i++ << std::endl; //Post-increment operator
	std::cout << i << std::endl;

	int j = 0;
	std::cout << j << std::endl;
	std::cout << ++j << std::endl; //Pre-increment operator
	std::cout << j << std::endl;

	//The same goes for decrement operators
	return 0;
}

/*
 * As you can see from the example, an increment or a decrement operator is a unary operator.
 * The operator increases or decreases the value of a variable by 1. So, these codes
 *
 *		x += 1;
 *		x -= 1;
 *
 * and these codes
 *
 *		x++;
 *		x--;
 *
 * produce the same value of x in the end. However, these latter expressions can also be used in
 * other lines of code too, as shown in the examples where we put i++ after std::cout and a << operator.
 * Unfortunately, with these kinda scenarios, there are actually two ways we can use these operators
 * and we should know the difference between the two.
 */

/*
 * The first one is a post-increment/decrement operator. When used, the variable is incremented/decremented AFTER
 * that line of code is executed (hence the prefix "post").
 *
 * The second one is a pre-increment/decrement operator. When used, the variable is incremented/decremented BEFORE
 * that line of code is executed (hence the prefix "pre").
 *
 * That would be the majot difference you should now. However, if you're like me, just separate these
 * usage of increment/decrement operators out as a single expression. For example, instead of writing
 *
 *		int count = 0;
 *		std::cout << ++count << std::endl;
 *
 * We can just write
 *
 *		int count = 0;
 *		count++;
 *		std::endl << count << std::endl;
 *
 * By doing this, the pre-increment and post-increment operator will end up giving the same answer,
 * and now the code also looks cleaner and easier to read.
 * Keep these concepts in mind, because we will see these things come up a lot very soon.
 */
