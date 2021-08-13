/* 
Sum of First N Odd Integers
Easy

Given an integer n, return the sum of the first n positive odd integers.

Constraints
n ≤ 1,000 
*/
#include<cmath>
#include<iostream>
using namespace std;

int solve(int n) {
    return pow(n,2);
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
}