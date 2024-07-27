// Sum of All Elements
// Write a function that calculates the sum of all elements in a vector of integers.

// Steps:
// Function Signature: int sumElements(const std::vector<int>& nums).
// Input: A vector of integers.
// Output: The sum of all integers in the vector.


#include <iostream>
#include <vector>
using namespace std;


int sumElements(vector<int>& number) {
    int sum = 0;
    for (int num : number) {
        sum+=num;
    }
    return sum;
}

int main() {

    vector<int> nums = {1, 5};

    int total = sumElements(nums);
    cout << "the total is " << total << endl;

    return 0;
}