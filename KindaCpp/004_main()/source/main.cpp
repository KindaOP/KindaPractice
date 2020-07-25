/*
 * The main() function we are seeing is an example of a function.
 * Of course, there will be explanations in a different file.
 * However, this main() function is kinda special, so it deserves its own file.
 * Just go through this and look up functions, then all should make sense (hopefully).
 */

#include <iostream>

//Outside the main() function, we might have something like this in the future.
int another_random_function() {
    std::cout<<"Random"<<std::endl;
    return 0;
}

//However, when we run this program now, only the things inside the main() function is executed.
int main() {
    std::cout<<"Hello World"<<std::endl;
    return 0;
}

//To get the another_random_function() function to be executed, stay tuned.

/*
 * Basically, the main() function is automatically called by the compiler.
 * For other functions, we need to manually call it (or basically use it, for now).
 * 
 * Also, the statement
 * 
 *      return 0;
 * 
 * is just there to exit the function and specify that the main() function runs successfully.
 * Anything after the return statement will not be executed.
 *
 * You can even leave it out for ONLY the main() function, and it will implicitly return 0.
 * You can also try returning another integer, and it will result in unsuccessful run with different exit values.
 */ 
