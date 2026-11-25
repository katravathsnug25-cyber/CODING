#include<iostream>
#include<vector>
using namespace std;
 vector<int> getConcatenation(vector<int>& nums) {

    int n = nums.size();        // size of original array
    int line = 2 * n;           // size of new array

    vector<int> ans(line);      // create new vector of size 2n

    // First loop: copy original array
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
    }

    // Second loop: copy original array again
    for (int i = 0; i < n; i++) {
        ans[i + n] = nums[i];
    }

    return ans;
}