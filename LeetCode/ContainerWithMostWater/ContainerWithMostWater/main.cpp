//
//  main.cpp
//  ContainerWithMostWater
//
//  Created by Dario Caric on 12.01.2023..
//

#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height);

int main(int argc, const char * argv[]) {

//    vector<int>height {1,8,6,2,5,4,8,3,7};
//    vector<int>height {1,1};
//    vector<int>height {1,2,1};
//    vector<int>height {2,3,10,5,7,8,9};
    
//   vector<int>height {8,10,14,0,13,10,9,9,11,11};
    vector<int>height {4,4,2,11,0,11,5,11,13,8};


    int result = maxArea(height);
    printf("result=%i\n",result);
    
    return 0;
}


int maxArea(vector<int>& height) {
    int area = 0;
    int lIndex = 0;
    int rIndex = (int)height.size()-1;
    
    while (lIndex < rIndex) {
        int newArea = (rIndex - lIndex) * (height[lIndex] < height[rIndex] ? height[lIndex] : height[rIndex]);
        area = newArea > area ? newArea : area;
        if (height[lIndex] < height[rIndex]) lIndex ++;
        else rIndex--;
    }
    return area;
}
