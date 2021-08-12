/* 
Strictly Increasing or Strictly Decreasing

Easy

Given a list of integers nums, return whether the list is strictly increasing or strictly decreasing.

Constraints
n ≤ 100,000 where n is the length of nums

 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

bool solve(vector<int>& nums) {
    int check;

    if(nums.size()<2){
        return true;
    }


    if(nums[0]<nums[1]){
        check =1;
    }
    else{
        if(nums[0]>nums[1]){
            check = 0;
        }
        else{
            return false;
        }
    }

    for (int i=1;i<nums.size()-1;++i)
    {
        if((nums[i]<nums[i+1] && check==0) || (nums[i]>nums[i+1] && check==1) || (nums[i]==nums[i+1]) ){
            return false;
        }

    }
    return true;
}

int main() {
    vector<int> nums{1,2,3,3,5,6,7,8,9,10};
    cout<<solve(nums);
}

//Ideal Solution
/* bool solve(vector<int>& nums) {
    int N = nums.size();
    if (N < 1) return false;
    if (N == 1) return true;

    int decr = 0, incr = 0;

    for (int i = 0; i < N - 1; i++) {
        if (nums[i] > nums[i + 1])
            incr = 1;
        else {
            incr = 0;
            break;
        }
    }

    for (int i = 0; i < N - 1; i++) {
        if (nums[i] < nums[i + 1])
            decr = 1;
        else {
            decr = 0;
            break;
        }
    }

    return decr || incr;
} */