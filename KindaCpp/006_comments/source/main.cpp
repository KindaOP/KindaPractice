/*
 * Again, this should be something really easy.
 * All these descriptions I write everywhere are called comments.
 * If something is "commented", then the compiler won't read them, but we may do.
 * The purpose is actually obvious : to comment or leave notes for code readers.
 */

//Here's one comment
#include <iostream>

int main() { //I can be here too
    std::cout<<"Hello World"<<std::endl;
    /*
     * Here is another one 
     * Insert me anywhere
     */
    //std::count<<"uncomment me pls"<<std::endl;
    return 0;
}

/*
 * There are two ways we can create a comment in C++ :
 * 1. Use double backslash to create a single line of comment
 * 
 *      //comment
 * 
 * 2. Use / and * to create multiple lines of comments like this one.
 * 
 * Generally, flooding codes with comments is nod a good thing, but hey, this is just a casual code so...
 * We an even comment out parts of the code we don't want the compiler to read. Check this out!
 */ 
