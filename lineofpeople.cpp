/* 
Line of People
Easy

You are given integers n, a and b. You are standing in a line of n people. You don't know which position you're in, but you know there are at least a people in front of you and at most b people behind you.

Return the number of possible positions you could be in.
 */

#include <algorithm>
using namespace std;
int solve(int n, int a, int b) {
    return(min(n-a,b+1));   
}