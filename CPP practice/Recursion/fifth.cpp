#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reachHome(int src, int dest)
{
    cout<<"source: "<<src<<" | "<<"Destination: "<<dest<<endl;
    // base case
    if (src == dest)
    {
        cout << "reached Home" << endl;
        return ;
    }

    // processing part
    src++;

    // recursive relation call
    reachHome(src, dest);
}

int main()
{
    int dest = 10;
    int src = 1;
    cout << endl;

    reachHome(src, dest);

    return 0;
}