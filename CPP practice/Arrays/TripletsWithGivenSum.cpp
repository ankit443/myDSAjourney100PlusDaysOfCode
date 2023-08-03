#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>



using namespace std;

void findTriplets(const vector<int> &arr, int K){
    int N = arr.size();
    if(N<3){
        cout<<"No triplets found."<<endl;
        return;

    }

    for(int i=0; i<N-2; ++i){
        unordered_map<int, int> hashMap;
        int targetSum = K-arr[i];

        for(int j=i+1; j<N; ++j){
            int remaining = targetSum - arr[j];

            if(hashMap.find(remain))

        }
    }
}


int main(){

}