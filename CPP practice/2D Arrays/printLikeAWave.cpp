#include<iostream>

using namespace std;


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){

    for(int col=0; col<mCols; col++){


        if(col&1){

            //odd Index => Bottom to top
            for(int row = nRows-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }




        }else{

            // 0 or even Index - top to Bottom
            for(int row = 0; row<nRows; row++){
                cout<<arr[row][col]<<" "


            }



        }
    }



}

int main(){





    return 0;
}