#include "myMethods.hpp"

int myMethods::dummyFunc(string valueA) {

    try
    {
        int result = stoi(valueA);
        return result;
    }
    catch(const std::exception& e)
    {
        printf("Error from dummyFunc");
    }
    

}
