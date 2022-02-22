#include <iostream>
using namespace std;
int  firstIndex( int arr[] , int n , int key){
int s = 0 , e = n-1;
int mid = s + ( e-s)/2;
int ans = -1; // if ans is not found 
while ( s <e){
    // to find first occurence , traverse toward left part
    if ( arr[mid] == key){
        ans = mid;
        e = mid-1;
    }
    else if(arr[mid] < key  ){
        s = mid+1;
    }
    else if(arr[mid] > key  ){
        e = mid-1;
    }
    mid = s + ( e-s)/2;
}
return ans;
}
int  lastIndex( int arr[] , int n , int key){
int s = 0 , e = n-1;
int mid = s + ( e-s)/2;
int ans = -1; // if ans is not found 
while ( s <e){
     // to find last occurence , traverse toward right part
    if ( arr[mid] == key){
        ans = mid;
        s = mid+1;
    }
    else if(arr[mid] < key  ){
        s = mid+1;
    }
    else if(arr[mid] > key  ){
        e = mid-1;
    }
    mid = s + ( e-s)/2;
}
return ans;
}

int main( ){
    int even[8] = { 1 , 2 , 5 , 6, 6 , 6, 6, 8};
    int odd[7] = { 1 , 3 ,3 , 3 ,6 ,9 ,13};

    cout <<" First Occurence of key is at index "<< firstIndex(even , 8 , 6)<<endl;
    cout <<" First Occurence of key is at index "<< lastIndex(even , 8 , 6)<<endl;

    cout <<" First Occurence of key is at index "<< firstIndex(odd , 7 , 3)<<endl;
    cout <<" First Occurence of key is at index "<< lastIndex(odd , 7 , 3)<<endl;
    
    return 0;
}