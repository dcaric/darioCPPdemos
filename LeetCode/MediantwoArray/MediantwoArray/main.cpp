//
//  main.cpp
//  MediantwoArray
//
//  Created by Dario Caric on 10.11.2022..
//

#include <iostream>
#include <vector>
#include <algorithm>    // std::sort

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);

int main(int argc, const char * argv[]) {
    
    vector<int> nums1 = {1,2,2};
    vector<int> nums2 = {1,2,3};


    printf("\nresult=%.5f\n\n", findMedianSortedArrays(nums1,nums2));
    return 0;
}


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
    auto greather = [] (int a, int b) {
        return a < b;
      };
    
    // combine arrays
    nums1.insert(nums1.end(),make_move_iterator(nums2.begin()),make_move_iterator(nums2.end()));
    
    // sort array
    sort (nums1.begin(), nums1.end(), greather);
    printf("size:%lu\n\n",nums1.size());
    double median = 0;
    for (int item : nums1) printf("item=%d\n", item);

    
    // calculate median
    long size = nums1.size();
    if (size == 1) return double(nums1[0]);
    else if (size == 2) return ((double(nums1[0]) + double(nums1[1])) / 2);
    else if (size > 2) {
        // check if even or odd
        printf("even or odd=%ld\n", size % 2);
        if (size % 2 == 0) {
            return (double(nums1[size/2-1]) + double(nums1[size/2])) / 2;
        } else {
            printf("position:%d\n",(size-1) / 2);
            return nums1[(size-1) / 2];
        }

        median = median / (size-2);
        printf("median:%.5f\n",median);

        
    }
    
    return 0;
}
