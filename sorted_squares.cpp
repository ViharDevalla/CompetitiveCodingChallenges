/* 
Square of a List
Easy

Given a list of integers sorted in ascending order nums, square the elements and give the output in sorted order.

Constraints
n ≤ 100,000 where n is the length of nums

 */


#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

vector<int> solve(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        nums[i] = pow(nums[i],2);
    }
    sort(nums.begin(), nums.end());
    return(nums);
}