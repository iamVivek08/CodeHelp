#include <iostream>
#include<vector>
using namespace std;
// find duplicates element in an array
int main ( ){
    vector <int >v;
    int arr[] = {1,4,2,1}; int n = 4;
    for ( int i =0; i<n ;i++){
        v.push_back(arr[i]);
    }
//    int element = v.at(0); 
    for ( int i = 0; i< n;i++){
      for ( int j=i+1; j<=n-1 ; j++ ){
          if ( v.at(i) == v.at(j)){
              cout<<"duplicate element "<<v.at(j) <<" at index "<<j <<endl;
          }
      }
      if ( v.at(i) > n) cout <<"Sorry";
    }
   
    return 0;
}