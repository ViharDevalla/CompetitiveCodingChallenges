/* 

Palindromic Integer
Easy

Given a non-negative integer num, return whether it is a palindrome.

Bonus: Can you solve it without using strings?
Constraints
num < 2 ** 31 

*/


bool solve(int num) {
    int temp = num;
    int new_num = 0;
    int digit;
    while(temp!=0){
        int digit = temp %10;
        temp /= 10;
        new_num = (new_num*10) + digit;
    }

    if(num == new_num){
        return true;
    }
    else{
        return false;
    }
}