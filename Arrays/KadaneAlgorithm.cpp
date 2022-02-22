#include <iostream>
using namespace std;
// NOTE : If twe have to find the maximum subarray sum in negative array , then maxsum should be initialise with INT_MIN
int  maxsubarraysum( int *arr , int n){
int maxsum =0 , cursum = 0;
for ( int i =0; i <n; i++){
    cursum += arr[i];
if ( cursum > maxsum ){maxsum = cursum;}
    
    // if the maxsum (sum) is less than zero then again initalise current sum is equal to zero
if ( cursum <0){ cursum = 0;}

}
return maxsum;
}
int main(){
    int arr[] = {1 , -2 ,3 ,-6 , 5 ,-6};
    int n =  6;
   cout<< "The maximum subarray sum is : "<<maxsubarraysum( arr , n);
   
    return 0;
}