/*
Given a roman numeral, convert it to an integer
*/
#include <string>
int romanToInt(string s) {
    int ans = 0;
    int counter = 0;

    for(int i = 0; i < s.size(); i++)
    {

        if(s[i] == 'I' || s[i] == 'X' || s[i] == 'C')
        {
            counter++;
        }
        if(s[i] == 'M')
        {
            ans += 1000;
            ans -= counter*100;
            counter = 0;
        }
        if(s[i] == 'D')
        {
            ans += 500;
            ans -= counter*100;
            counter = 0;
        }
        if(s[i] == 'C')
        {
            if(i+1 != s.size())
            {
                if(s[i+1] == 'D' || s[i+1] == 'M')
                    continue;
            }
            ans += 100;
            counter--;
            ans -= counter*10;
            counter = 0;
        }
        if(s[i] == 'L')
        {
            ans += 50;
            ans -= counter*10;
            counter = 0;
        }
        if(s[i] == 'X')
        {
            if(i+1 != s.size())
            {
                if(s[i+1] == 'L' || s[i+1] == 'C')
                    continue;
            }
            ans += 10;
            counter--;
            ans -= counter;
            counter = 0;
        }
        if(s[i] == 'V')
        {
            ans += 5;
            ans -= counter;
            counter = 0;
        }

    }
    ans += counter;
    return ans;
}
