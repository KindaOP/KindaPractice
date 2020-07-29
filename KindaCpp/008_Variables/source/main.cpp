/*
 * In programming, we can store data or any information in the memory inside RAM
 * and we can store and refer to those data through variables.
 * Now, C++ is a strictly-typed language, meaning that we must specify a data type for each variable
 * upon declaration, and it cannot be changed later on.
 * I will talk about types in a separate file, for now let's see how to create a variable.
 */

#include <iostream>

int main()
{
   int x;                       //This is called declaration. We tell the compiler that this variable x will store data of type int
   x = 5;                       //This is called assignment. Done with the assignment operator =, this x now stores the value of 5
   std::cout<<x<<std::endl;     //We can refer to the stored value in x by just using the variable name like this
   x = -2;                      //This x variable can be assigned with anything that can be converted in to int (see conversion later)
   std::cout<<x<<std::endl;     //Also note that we cannot redeclare the variable if it still exists.
   return 0;                    //And how do we know when it will not exist... wait.
}

//to be clear, this is not the only way we can create a variable.
//There is actually another way with major differences, but we will talk about that later.

/*
 * We can also refer to the first assignment to a variable as initialization.
 * If we do not initialize x like this in this case
 * 
 *      int x;
 *      std::cout<<x<<std::endl;
 * 
 * the codes works, but the value of x printed out seems to be somthing completely random, and we usually don't want that.
 * In most cases, you can declare a variable and intialize it in the same line of code like this
 * 
 *      int x = 5;
 * 
 * Note again that int is just one of the data types in C++. We will learn more about data types later.
 * And if you cannot wait, that "Hello World" we have been using has the type of const char*.
 * 
 * LOL
 */ 
