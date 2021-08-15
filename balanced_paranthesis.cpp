/* 
Balanced Brackets
Medium

You're given a string s consisting solely of "(" and ")". Return whether the parentheses are balanced.

Constraints

n ≤ 100,000 where n is the length of s. 
*/

#include <string>
using namespace std;

bool solve(string s) {
    int extra=0;
    for(auto i: s) {
        if(i == '('){
            extra++;
        }
        else{
            extra--;
        }
        if(extra<0) return false;
    }
    return extra==0;
    
}



/* Stack Approach

 bool solve(string s) {
    stack<char> par;
    for (auto p : s) {
        if (p == '(') {
            par.push(p);
        } else {
            if (par.empty())
                return false;
            else
                par.pop();
        }
    }
    if (par.empty()) return true;
    return false;
} */