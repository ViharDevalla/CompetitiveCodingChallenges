/* 
Unix Path Resolution
Easy

Given a Unix path, represented as a list of strings, return its resolved version.

In Unix, ".." means to go to the previous directory and "." means to stay on the current directory. By resolving, we mean to evaluate the two symbols so that we get the final directory we're currently in.

Constraints
n ≤ 100,000 where n is the length of path 

*/

#include <vector>
#include <string>
using namespace std;
vector<string> solve(vector<string>& path) {
    vector<string> stack;
    for (auto dir : path) {
        if (dir == "..") {
            if (!stack.empty()){ 
                stack.pop_back();
            }
        } 
        else if (dir != "."){
            stack.push_back(dir);
        }
    }
    return stack;
}