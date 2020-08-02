/*
 * Now, you all may wonder why I am talking about this all of a sudden.
 * In fact, this is pretty case-specific, but it might help you a bit.
 *
 * In short, <limits> is a library you can include into your file.
 * It can provide you some useful numbers when dealing with extreme values.
 */

#include <iostream>
#include <limits>

int main()
{
	std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
	std::cout << (short)std::numeric_limits<char>::min() << std::endl; 
	//Cast the result to something else so that it prints out a number instead of a character
	//Well, oddly enough, the miimum value of char here seems to be -128. I'm not sure why tbh.

	return 0;
}

/*
 * This syntax right here
 *
 *		std::numeric_limit<dataType>::max()
 *
 * utilizes something we call a template class. Details in a far...far future.
 * To be as minimal as possible here, you can specify dataType and use either max() or min()
 * to get the maximum or the minimum value of that data type. They may be useful in certain situations.
 *
 * If you can't remember this, that's fine. In fact, I don't really want you (or me) to memorize this.
 * What I want is that we know there exists at least one way to get these extreme values.
 * And of course, this might not be the only thing available in <limits>. I just mentioned some of them
 * here so that when I use this in the near future, we at least have a simple idea of what this does.
 */
