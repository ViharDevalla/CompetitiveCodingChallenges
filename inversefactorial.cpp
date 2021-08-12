//Inverse Factorial


/*
The factorial of a number n is defined as n! = n * (n - 1) * (n - 2) * ... * 1.
Given a positive integer a, return n such that n! = a. If there is no integer n that is a factorial, then return -1.

Constraints
0 < a < 2 ** 31 

Easy
*/


#include <iostream>
using namespace std; 

int solve(int a) {
    if (a == 1) return 1;
    int n = 1;
    while (a > 1) {
        if (a % n) return -1;
        a /= n;
        n++;
    }

    return a == 1 ? n - 1 : -1;
}

int main() {
    int n;
    cin >> n;
    cout << solve(n) << endl;

}