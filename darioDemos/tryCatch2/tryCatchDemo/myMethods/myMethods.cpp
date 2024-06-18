#include "myMethods.hpp"

int myMethods::dummyFunc(string valueA) {

    try
    {
        printf("TRY\n");

        int result = stoi(valueA);
        return result;
    }
    catch(const std::exception& e)
    {
        printf("Error from dummyFunc\n");
        return 0;
    }
    

}

int myMethods::dummyFunc2(string valueA) {

    
    int result = stoi(valueA);
    return result;

    

}
