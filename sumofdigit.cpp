/* 
Sum of the Digits
Easy

Given a positive integer num, return the sum of its digits.

Bonus: Can you do it without using strings?

Constraints
0 ≤ num < 2 ** 31 
*/

int solve(int num) {
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num /= 10;
    }
    return sum;
}