/* 
Find Local Peaks
Easy

You are given a list of integers nums. Return the index of every peak in the list, sorted in ascending order. An index i is called a peak if:

nums[i] > nums[i + 1] if i = 0
nums[i] > nums[i - 1] if i = n - 1
nums[i - 1] < nums[i] > nums[i + 1] otherwise
However, a list of length 1 is not considered a peak.

Constraints
0 ≤ n ≤ 100,000 where n is the length of nums   
*/

#include <vector>
using namespace std;
vector<int> solve(vector<int>& nums) {
    vector<int> peaks;
    int n = nums.size();
    if(n<=1) return peaks;
    if(nums[0]>nums[1]){
        peaks.push_back(0);
    }
    for(int i=1;i<n-1;i++){
        if(nums[i - 1] < nums[i] && nums[i] > nums[i + 1]){
            peaks.push_back(i);
        }     
    }
    if(nums[n-1] > nums[n - 2]){
        peaks.push_back(n-1);
    }
    return peaks;
}