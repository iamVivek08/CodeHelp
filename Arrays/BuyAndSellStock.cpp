#include <iostream>
using namespace std;

int maximumprofit( int arr[] , int n){
    int minprofit = arr[0];
    int maxprofit = 0;
    for ( int i =0 ; i < n; i++){
        minprofit = min(arr[i] , minprofit);
        // cout<<      minprofit <<endl;
        int profit  = arr[i] - minprofit;
        // cout << profit <<endl;
        maxprofit = max(arr[i] , profit);
        // cout << maxprofit <<endl <<endl;
    }
    return maxprofit;
}

int main(){
    int arr[] = { 7 , 1 , 3 ,2 , 6, 5};
    int n = 6;
   cout << maximumprofit( arr , n);
    return 0;
}