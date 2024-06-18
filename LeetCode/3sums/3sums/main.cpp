//
//  main.cpp
//  3sums
//
//  Created by Dario Caric on 13.01.2023..
//

#include <iostream>
#include <vector>
#include <set>


using namespace std;
vector<vector<int>> threeSum(vector<int>&);




int main(int argc, const char * argv[]) {
    
    vector<int> nums = {-1,0,1,2,-1,-4,4};
   //vector<int> nums = {12,5,-12,4,-11,11,2,7,2,-5,-14,-3,-3,3,2,-10,9,-15,2,14,-3,-15,-3,-14,-1,-7,11,-4,-11,12,-15,-14,2,10,-2,-1,6,7,13,-15,-13,6,-10,-9,-14,7,-12,3,-1,5,2,11,6,14,12,-10,14,0,-7,11,-10,-7,4,-1,-12,-13,13,1,9,3,1,3,-5,6,9,-4,-2,5,14,12,-5,-6,1,8,-15,-10,5,-15,-2,5,3,3,13,-8,-13,8,-5,8,-6,11,-12,3,0,-2,-6,-14,2,0,6,1,-11,9,2,-3,-6,3,3,-15,-5,-14,5,13,-4,-4,-10,-10,11};
   // vector<int> nums = {3,-2,1,0};

    vector<vector<int>> result = threeSum(nums);
    printf("\nsize=%i\n",result.size());
    
    for (int i = 0; i < result.size(); i++) {
           for (int j = 0; j < result[i].size(); j++)
               cout << result[i][j] << " ";
           cout << endl;
    }
    
    return 0;
}



vector<vector<int>> threeSum(vector<int>& nums) {
    
    vector<vector<int>> result;
    set<vector<int>> resultSet;

    sort(nums.begin(), nums.end());

    int n = nums.size();
    // sort the array
    std::sort(nums.begin(), nums.end());


    // loop through the list of numbers
    for (int i = 0; i < n-2; i++) {
        // if the current number is greater than zero, it will not be part of any solution
        if (nums[i] > 0) break;
        // initialize two pointers
        int j = i + 1;
        int k = n - 1;
        // loop until the two pointers meet
        while (j < k) {
            // check if the sum of the current three numbers is zero
            if (nums[i] + nums[j] + nums[k] == 0) {
                //std::cout << nums[i] << " " << nums[j] << " " << nums[k] << std::endl;
                vector<int> group = {nums[i],nums[j],nums[k]};
                resultSet.insert(group);
                j++;
                k--;
            }
            // if the sum is less than zero, increment the pointer j
            else if (nums[i] + nums[j] + nums[k] < 0) j++;
            // if the sum is greater than zero, decrement the pointer k
            else k--;
        }
    }
    
    for (vector<int> item : resultSet) {
        result.push_back(item);
    }
    return result;

}
