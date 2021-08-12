//Special Product List

/* 
Given a list of integers nums, return a new list such that each element at index i of the new list is the product of all the numbers in the original list except the one at i. Do this without using division.

Constraints
2 ≤ n ≤ 100,000 where n is the length of nums 

Medium
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

vector<int> solve(vector<int>& nums) {
    int n = nums.size(), p = 1;
    vector<int> res(n, 1);
    for (int i = 0; i < n; i++) {
        res[i] *= p;
        p *= nums[i];
    }
    p = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= p;
        p *= nums[i];
    }
    return res;
}


int main(){
    int n;
    vector<int> nums{1, 2, 3, 4, 5};

    vector<int> res = solve(nums);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
