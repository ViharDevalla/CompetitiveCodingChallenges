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