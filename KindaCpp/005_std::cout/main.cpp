/*
 * So far, we have been using this
 * 
 *      std::cout
 * 
 * a lot, so what it does should be obvious by now.
 * In case it doesn't, std::cout prints the thing you put after << to the console.
 * For starters, this tells us that cout belongs to the std namespace.
 * 
 * Also, the keyword
 * 
 *      std::endl
 * 
 * basically tells the std::cout to start a new line.
 * It might be good to know that cout stands for "console out", and endl stands for "endline".
 * To use these features, always include <iostream> into your file.
 */

#include <iostream>

int main() {
    std::cout<<"Hello World"<<std::endl;
    std::cout<<5<<" "<<-6.45<<std::endl;
    return 0;
}

/*
 * Also, an important thing is that the code compiles and runs from TOP TO BOTTOM, and LEFT TO RIGHT.
 * Why is this important?
 * 
 * Because if somehow you use those keywords before <iostream> is even included like this
 * 
 *      int main() {
 *          std::cout<<"Hello World"<<std::endl;
 *          return 0;
 *      }
 *      #include <iostream>
 * 
 * the compiler will have no idea what std::cout and std::endl are.
 * It doesn't even know we will be including the definition for them later.
 * So, be sure to do things in a proper order.
 */ 
