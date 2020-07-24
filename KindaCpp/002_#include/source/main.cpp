/*
 * To oversimplify, #include copies and pastes codes from another file into this file.
 * Here, if we try to run this code without 
 * 
 *      #include <iostream>
 * 
 * the code will not be compiled, because it does not know what this "cout" thingy is.
 * The code telling what cout is is in <iostream>, to which we will come back later.
 */

#include <iostream>
using namespace std;

#include "thatmissingthing.hpp"
    cout<<"Hello World"<<endl;
    return 0;
}

/*
 * The Cherno introduces a very good example to show how #include works.
 * From the code above, it is at first so unorthodox to see the code like
 * 
 *          cout<<"Hello World"<<endl;
 *      }
 * 
 * The code is missing a return type, a function declaration, and a curly bracket. Like, wtf??
 * But in rhe project, if we check the file thatmissingthing.hpp, we will find just the things.
 */

/*
 * If you notice, you might wonder why the iostream has <>, but the thatmissingthing.hpp has "".
 * Basically, <> is used for including directories, like an entire iostream folder.
 * On the other hand, "" is used for including a file specified by the "relative path" 
 * of that file, like the thatmissingthing.hpp file. 
 */ 
