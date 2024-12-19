#include <iostream>
#include "object.h"


class Main{
    // create a function that creates object of classes and call functions
    public:
    void run(){
        Object object;
        object.hello();
    }

};

int main(){
    Main main_class;
    main_class.run();

    return 0;
}

