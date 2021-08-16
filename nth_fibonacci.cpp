/* 
Nth Fibonacci Number
Easy

The Fibonacci sequence goes like this: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

The next number can be found by adding up the two numbers before it, and the first two numbers are always 1.

Write a function that takes an integer n and returns the nth Fibonacci number in the sequence.

Constraints
n ≤ 30 

*/


int solve(int n) {
        if(n==1) return 1;
        if(n==2) return 1;
        return solve(n-1)+solve(n-2);
}

/* int solve(int n) {
    return pow((1 + pow(5, 0.5)) / 2.0, n) / pow(5, 0.5) + 0.5;
} */