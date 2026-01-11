// Problem: Contains Duplicate
// NeetCode Category: Arrays & Hashing
// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
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

