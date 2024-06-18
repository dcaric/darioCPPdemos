//
//  MyClass1.cpp
//  FirstCpp
//
//  Created by Dario Caric on 04.08.2021..
//

#include "MyClass1.hpp"
#include <iostream>
#include <filesystem>

namespace fs = std::__fs::filesystem;
using namespace std;

int MyClass1::returnRowCount(string filePath) {
    
    int result = 0;
    
    
    
    return result;
}



string MyClass1::readRoothPath() {
    
    printf("%s\n",fs::current_path().c_str());
    return fs::current_path();
}


string MyClass1::myStaticMethod() {
    return "Hello Dario!";
}


pair<int, string> MyClass1::returnTuple() {
    
    return make_pair(23, "Dario");
}
