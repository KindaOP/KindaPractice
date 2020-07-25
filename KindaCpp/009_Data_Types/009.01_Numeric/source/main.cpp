/*
 * Whewww, and here we are : data types.
 * Now, this topic is actually very huge, and sometimes so complex even I cannot fully understand.
 * But, here are the basics you should know.
 * And in this file, we are talking primarily about numeric data types (idk if there's like a standard name for this)
 */

#include <iostream>

int main()
{
    double x = -0.2; //Standard number assignment
    std::cout<<x<<std::endl;
    
    float y = 5.2f; //Special format available for floating point numbers
    std::cout<<y<<std::endl;
    
    long z = -10E7; //Scientific notation format for any number
    std::cout<<z<<std::endl;
}

/*
 * There are many data types for numbers, I will list just a few here.
 * For whole numbers, we have char, short, int ,long, and long long.
 * For decimal numbers, we have float, double, and long double.
 * 
 * Why this many types? They all differ in usage due to precisions and the size of each data type.
 * I am too lazy too list that for you, so use the sizeof() operator if you want to know more.
 * 
 *      std::cout<<sizeof(int)<<std::endl;
 * 
 * Well, I mean the size may vary for different computers anyway.
 * However, this used to caused me a lot of trouble, so there might be occasions you might try using something like
 * 
 *      int32_t number32 = 3;
 *      int64_t number64 = 3;
 * 
 * But for now, just stick to the primitive types like int.
 * Experiment with these types to familiarize yourself with them.
 */ 
