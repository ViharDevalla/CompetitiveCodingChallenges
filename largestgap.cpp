/* 
Largest Gap

Easy

Given a list of integers nums, return the largest difference of two consecutive integers in the sorted version of nums.

Constraints
n ≤ 100,000 where n is the length of nums 

*/
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
int solve(vector<int>& nums) {
    int diff = 0;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size()-1; i++) {
        if ((nums[i+1] - nums[i]) > diff) {
            diff = nums[i+1] - nums[i];
        }
    }
    return diff;
}