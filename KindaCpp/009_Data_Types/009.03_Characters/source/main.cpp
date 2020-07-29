/*
 * With characters, you will need some special data types to represent them.
 * For beginners, let's look at the two basic (but maybe not primitive) types.
*/

#include <iostream>
#include <string> //To use std::string data type, include <string> into your file.

int main()
{
    char ch = 'a'; //To assign a character to char variable, use a pair of single quotes
    std::cout << ch << std::endl;
    
    std::string s = "Hello World"; //To assign a characters to std::string variable, use a pair of double quotes
    std::cout << s << std::endl;
}

/*
 * The first data type for characters is char. Typically, it has the size of 1 byte (or 8 bits) as long
 * as it represents a character in the ASCII table by default (look it up anywhere in the internet).
 *
 * Yeah, it might confuses you a bit, but it basically stores a number in the interval [-127,127], and 
 * each number corresponds to a specific character as shown in the ASCII table.
 *
 *
 * std::string data type represents a string of characters together, that's it for now.
 * Although it is not a primitive type, I will not talk about const char* yet. It requires some more concepts to explain.
 *
 * Of course, more of these things in other files.
 */
