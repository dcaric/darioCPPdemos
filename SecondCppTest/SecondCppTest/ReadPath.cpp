//
//  ReadPath.cpp
//  SecondCppTest
//
//  Created by Dario Caric on 05.08.2021..
//

#include "ReadPath.hpp"
#include <filesystem>

namespace fs = std::__fs::filesystem;

string ReadPath::returnPath() {
    return fs::current_path();
}



int ReadPath::sum2Numbers(int a, int b) {
    return (a + b);
}


