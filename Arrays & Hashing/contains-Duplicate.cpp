// Problem: Contains Duplicate
// NeetCode Category: Arrays & Hashing
// Approach: Brute Force (Nested Loops)
// Time Complexity: O(n^2)
// Space Complexity: O(1)
//
// Note: This is a straightforward approach. Can be optimized
// using a hash set to achieve O(n) time complexity.

#include <vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
