#include <iostream>
#include <bits/stdc++.h>

// problem statement: a phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non alphanumeric characters, it reads the same forward and backward. Alphanumeric charcaters include letters and numbers

// Given a string s, return true, if it is a palindrome or false otherwise

// Example 1: Input s = "A man, a plan, a a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome

// Example 2: Input s = "race a car"
// Output: false
// Explanation: "racecar" is not a palindrome

using namespace std;

// remove unwanted characters
class Solution
{

private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }

    char toLowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string a)
    {
        int s = 0;
        int e = a.length() - 1;

        while (s <= e)
        {
            if (a[s] != a[e])
            {
                return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {

        // remove non wanted characters

        int i = 0;
        string temp = "";

        for (int j = 0; j < s.length(); j++)
        {

            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        // make LowerCase for all
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }

        return checkPalindrome(temp);
    }
};