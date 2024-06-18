#include <iostream>

using namespace std;


// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
int isPairSum(int A[], int N, int X)
{
    // Represents first pointer
    int i = 0;
 
    // Represents second pointer
    int j = N - 1;
 
    while (i < j)
    {
        // If we find a pair
        if (A[i] + A[j] == X)
		{
			printf("i:%i  j:%i \n", i, j);
            return 1;
		}
        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if (A[i] + A[j] < X)
            i++;
 
        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else
            j--;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    // array declaration
    int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
     
    // value to search
    int val = 17;
     
    // size of the array
    //int arrSize = *(&arr + 1) - arr;
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	printf("Array size: %i \n", arrSize);
     
    // Function call
	printf("Result: %i \n", isPairSum(arr, arrSize, val));
    //cout << (bool)isPairSum(arr, arrSize, val);
 
    return 0;
}