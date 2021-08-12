/* 
Merging Two Sorted Lists
Easy

Given two lists of integers a and b sorted in ascending order, merge them into one large sorted list.

Constraints
0 ≤ n ≤ 200,000 where n is the length of a
0 ≤ m ≤ 200,000 where m is the length of b 

*/



#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> res;
    while (i < a.size() || j < b.size()) {
        bool chooseA = j == b.size() || (i != a.size() && a[i] < b[j]);
        res.push_back(chooseA ? a[i++] : b[j++]);
    }
    return res;
}


/*
    My Code

 vector<int> solve(vector<int>& a, vector<int>& b) {
    int totalsize = a.size() + b.size();
    int i=0,j=0,k=0;
    vector<int> finalList;
    while(k<totalsize){
        
        if(j == b.size()){
            vector<int>::iterator ptr = a.begin();
            auto it = next(ptr, i);
            finalList.insert(finalList.end(), it, a.end());
            return finalList;
        }

        if(i == a.size()){
            vector<int>::iterator ptr = b.begin();
            auto it = next(ptr, j);
            finalList.insert(finalList.end(), it, b.end());
            return finalList;
        }




        if(a[i]<b[j]){
            finalList.push_back(a[i]);
            i++;
        }
        
        else{
            if(a[i]>b[j]){
                finalList.push_back(b[j]);
                j++;
            }
            else{
                finalList.push_back(a[i]);
                finalList.push_back(b[j]);
                k++;
                i++;
                j++;
            }
        }
        cout << i;
        cout << j;
        cout << j;
        cout << endl;
        
        k++;
    }
    return finalList;
    
} */