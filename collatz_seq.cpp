/* 
Collatz Sequence

Easy

Given a positive integer n, find the length of its Collatz sequence. The Collatz sequence is generated sequentially where

n = n / 2 if n is even
n = 3 * n + 1 if n is odd
And the sequence ends if n = 1 
*/
#include <iostream>
using namespace std;

int solve(int n) {
    int count =1;
    while(n!=1){
        if(n%2==0){
            n = n/2;
        }
        else{
            n = 3*n + 1;
        }
        count++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}