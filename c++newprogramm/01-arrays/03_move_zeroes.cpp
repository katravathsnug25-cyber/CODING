#include <iostream>
#include <vector>
using namespace std;

// Problem: Move Zeroes to end while keeping non-zero order
// Time Complexity: O(n) | Space Complexity: O(1)
int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    int insertPos = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    while (insertPos < nums.size()) {
        nums[insertPos] = 0;
        insertPos++;
    }

    cout << "After moving zeroes: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}