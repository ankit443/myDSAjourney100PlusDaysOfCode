// good question from MAANG

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// given an array 'arr' of integer numbers, where arr[i] represents the number of pages in the 'i'th book. There are 'm' number of students and task is to allocate all of the books to their students. Allocate books in such a way that:
// each student gets at least one book
// each book should be allocated to a student
// book allocation should be in a contigous manner
// You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum
// example: let's consider n=4; and m=2;
// arr={10, 20, 30, 40}

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount =1;
    int pageSum =0;


    for(int i=0; i<n; i++){
        if(pageSum +arr[i] <=mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i] > mid){
                return false;

            }
            pageSum  = 0;
            pageSum += arr[i];


        }
    }

    return true;
    
}

int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e=mid-1;

        }else{
            s=mid+1;

        }mid = s+(e-s)/2;
    }

    return ans; 
}

int main()
{
}
