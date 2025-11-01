// 1. Two Sum

// **Problem Statement**
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// ## **Approach**  
// ### **1. Brute Force (if applicable)**  
// - Iterate through every pair of elements and check if their sum equals `target`.
// - Time Complexity: O(n^2)  
// - Space Complexity: O(1)

// ### **2. Optimized Approach**  
// - Use a hash map (dictionary) to store seen numbers and their indices.
// - For each number `num` in `nums`, check if `target - num` exists in the hash map.
// - If found, return the indices.
// - Time Complexity: O(n) (one pass through `nums`)  
// - Space Complexity: O(n) (for storing numbers in the dictionary)

// Final Implementation Using Hash Map:


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; nums.size() > i; i++) {
            int complement = target - nums[i];

            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
