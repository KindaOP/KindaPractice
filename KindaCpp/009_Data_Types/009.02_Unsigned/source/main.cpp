/*
 * As the name suggests, an unsigned keyword can be combined with the numeric data type and become another data type.
 * These types will not be able to store negative values, only positive values.
 * Well, I mean, it kinda can, but the result is just weird.
 * 
 * What about 0?
 * Well, I bet you are referring to +0... ???
 * Essentially, there are both +0 and -0, and +0 is the value that can be stored inside unsigned numeric data types.
 */

#include <iostream>

int main()
{
    signed int x = -42; //No need to specify signed in this case, as numeric data types are signed by default
    std::cout<<x<<std::endl; //Nice
    
    unsigned int y = -42;
    std::cout<<y<<std::endl; //Weird result
}

/*
 * Now, if signed numbers can do everything unsigned numbers can, why bother using unsigned?
 * Because it can't.
 * 
 * Let's look at a single data of type char declared here
 * 
 *      char x = 5; //represented by something like 10 00 00 21 idk
 * 
 * If we see its size, we will know that both signed and unsigned char data types have the size of 1 byte, or 8 bits.
 * If each bit can represent 0 or 1, then the possible values of both types are 2^8 = 256 possible values.
 * However, signed char needs to reserve 1 bit to represent the sign (either positive or negative) of the value,
 * so the range of the possible numbers is [-127,127] for signed char and [0,255] for unsigned char.
 * 
 * In short, the maximum number unsigned data types can store is twice that of the signed data types.  
 */ 
