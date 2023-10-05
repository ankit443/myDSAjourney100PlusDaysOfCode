#include <iostream>
#include <bits/stdc++.h>

// given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
//  find the leftmost occurrence of the substring part and remove it from s.

// a substring is a contigous sequence of characters in a string.

// return s after removing all occurences of part

// example 1: input S: "daabcbaabcbc", part = "abc"
// output: "dab"

// remove all occurrences of substring
// string length is less than a 1000, part length <=1000

using namespace std;

string removeOccurences(string s, string part)
{

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{

    string s;
    cin >> s;
    string part;
    cin >> part;

    string output = removeOccurences(s, part);
    cout << "Final string: " << output;
}