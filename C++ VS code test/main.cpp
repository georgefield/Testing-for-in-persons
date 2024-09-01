#include <iostream>
#include "class.h"
#include "string"

int main(){

    foo instantiation;

    bool quit = false;
    std::string userIn;
    while(!quit){
        
        std::cout << "Please enter a character: "; 
        std::cin >> userIn;
        if (userIn == "h"){
            std::cout << instantiation.getTheHiddenValue() << std::endl;
        }else if (userIn == "f"){
            int userInHowMany;
            std::cout << "How many fibonacci numbers?: ";
            std::cin >> userInHowMany;
            instantiation.printFibonacci(userInHowMany);
        }else if (userIn == "q"){
            quit = true;
        }else{
            std::cout << "Please enter 'h', 'f', or 'q'" << std::endl;
        }
    }
    system("PAUSE");
    return 0;
}
