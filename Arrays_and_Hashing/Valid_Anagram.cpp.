// Problem: Valid Anagram
// NeetCode Category: Arrays & Hashing
// Approach: Sorting
// Time Complexity: O(nlogn + mlo m)
// Space Complexity: O(1)/O(n+m)

class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.length() != t.length()){
        return false;
       } 
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       return s==t;
    }
};

