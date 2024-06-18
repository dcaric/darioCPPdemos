//
//  main.cpp
//  TwoSums
//
//  Created by Dario Caric on 09.11.2022..
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main(int argc, const char * argv[]) {

    // two sum - find 2 numbers that are == target
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = twoSum(nums,target);
    if (result.size() == 2)
        printf("[%d, %d]\n]",result[0], result[1]);
    else
        printf("No result\n");

    
    return 0;
}



vector<int> twoSum(vector<int>& nums, int target) {
    for (int i=0; i<nums.size(); i++)
        for (int j=i+1; j<nums.size(); j++)
            if ((nums[i] + nums[j]) == target)
                return {i, j};
    return {};
}
