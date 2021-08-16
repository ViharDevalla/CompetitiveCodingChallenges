/* 
Max Product of Two Numbers
Easy

Given a list of integers nums, find the largest product of two distinct elements.

Constraints
n ≤ 100,000 where n is the length of nums 

*/
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    if(nums[0]<0 && nums[1]<0){
        return(max(nums[0]*nums[1],nums[n-2]*nums[n-1]));
    }
    return nums[n-2]*nums[n-1];
}

/* 

int solve(vector<int>& nums) {
    int minval = nums[0], maxval = nums[0], ans = INT_MIN;
    for (int i = 1; i < nums.size(); i++) {
        ans = max(ans, max(minval * nums[i], maxval * nums[i]));
        minval = min(minval, nums[i]);
        maxval = max(maxval, nums[i]);
    }
    return ans;
} 

*/