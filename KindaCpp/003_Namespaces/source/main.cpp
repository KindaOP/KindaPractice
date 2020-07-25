/*
 * Namespaces are pretty self-explanatory. They are spaces for grouping certain things together under the same name.
 * The reason we were using
 *      
 *      using namespace std;
 * 
 * before is because cout and endl are actually in the std namespace.
 * Where is that namespace? It is, of course somewhere in the <iostream>.
 * Actually, namespaces are very simple. You can even create one... no, two of them right now.
 */

/*
 * To be clear, the same namespace can even be defined in different places and files.
 * If we write
 *      
 *      namespace yay { int number = 0; }
 *      namespace yay { int anotherNumber = 0; }
 *
 * it is still totally fine. That's why many header files contain stuffs in the single namespace like std.
 */

#include <iostream>

//An example of creating a namespace.
namespace one { 
    int number = 1; //Don't worry if you don't know what this is.
}

namespace two {
    int number = 2;
}

int main() {
    std::cout<<one::number<<std::endl;
    std::cout<<two::number<<std::endl;
    return 0;
}

/*
 * The actual meaning of
 * 
 *      using namespace std;
 * 
 * is that we are using all the things inside that namespace. This can be a problem when we are using more than one namespaces.
 * For example, if we do this
 * 
 *      using namespace one;
 *      using namespace two;
 * 
 *  and inside the main() function, we write
 * 
 *      std::cout<<number<<std::endl;
 *          
 * the compiler now isn't sure whether number we are using is from one or two, and therefore cannot compile our code.
 */

/*
 * Perhaps because of this, Some people (or a lot of people, I don't know) think of using the entire namespace as a bad habit in C++ coding.
 * If you want to avoid doing so, there are two ways :
 * 1. Use the using keyword with only the things we need. For example, if we just want to use number from two, we just write
 * 
 *      using two::number;
 * 
 * This prevents accidental name conflicts when we only want to use number from only one namespace. This can still lead to ambiguity otherwise.
 * 
 * 2.  The ensuring way of avoiding these problems is to prefix all things that belong to namespaces like this
 * 
 *      std::cout<<one::number<<std::endl;
 *      std::cout<<two::number<<std::endl;
 * 
 * Might be a little bit of work, but I personally got used to it.
 * And if you haven't guessed, this is my preferred way of writing codes (with some exceptions later).
 */ 
