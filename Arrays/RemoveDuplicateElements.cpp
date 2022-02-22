#include <iostream>
using namespace std;
int  removeDuplicate( int arr[] , int n){
    int resultantarrayindex = 0;
    for ( int originalarrayindex=0; originalarrayindex <n; originalarrayindex++ ){
            if ( arr[originalarrayindex] != arr[resultantarrayindex]){
                resultantarrayindex++;
                arr[resultantarrayindex ] = arr[originalarrayindex];
            }
    }
    return resultantarrayindex+1;
}
int main ( ){
    int a[] = { 1,1 , 2, 3 , 4 , 8};
    int n= 6;
    cout <<"Unique element present in duplicate array is : "<< removeDuplicate( a , n);
    return 0;
}