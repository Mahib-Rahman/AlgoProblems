/*Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:
    Starting with any positive integer, replace the number by the sum of the squares of its digits.
    Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
    Those numbers for which this process ends in 1 are happy.

Return true if n is a happy number, and false if not.
*/
#include <string>
#include <cmath>
using namespace std;

bool isHappy(int n) {
    if(n == 1)
        return true;
    while(n != 1)
    {
        int check = n;
        string s = to_string(n);
        n = 0;
        for(int i = 0; i < s.size(); i++)
        {
            n += pow(s[i] - '0',2); 
        }
        if(check == n || n == 4)//numbers n that loop froever eventually become a 4
            return false;
        if(n == 1)
            return true;
    }
    return false;
}