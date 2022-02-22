#include <iostream>
using namespace std;
int peakElement( int arr[] , int size ){
    int s = 0 , e = size-1;
    int mid = s + (e-s)/2;
    int peakelement = 0;
    while ( s< e){
//  this condition tells if order is going to be decrease then first decreasing element after last big element , then else condition execute and set end index = mid index 
        if ( arr[mid] < arr[ mid+1]){
            s = mid+1;
            peakelement = arr[s];  // return final peak element in array
        }
        else{
// e = mid not mid-1 because we have to return exact element index not the before element 
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return peakelement;
}

int main( ){
    int arr[]  = { 1, 4, 6 , 8 , 4 ,3, 1 ,-8};
    int size = 8;
    cout <<" The peak element in a mountain is "<<peakElement(  arr ,  size );

    return 0;
}