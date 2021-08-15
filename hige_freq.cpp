/* 
High Frequency
Easy

Given a list of integers nums, find the most frequently occurring element and return the number of occurrences of that element.

Constraints
0 ≤ n ≤ 100,000 where n is the length of nums 
*/

#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
int solve(vector<int>& nums) {
    unordered_map<int,int> count;
    int most = 0;
    for(auto n:nums){
        count[n]++;
        most = max(most,count[n]);
    }
    return(most);
    
}


/*
O(nlogn) Implementation

 int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int count = 1, maximum = 1;
    int n = nums.size();
    if (n == 0) {
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            count++;
        } else {
            maximum = max(count, maximum);
            count = 1;
        }
    }
    maximum = max(count, maximum);
    return maximum;
} */