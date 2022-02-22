#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void swapAlternate(int arr[], int size)
{
    // we have to swap each pair that's why we used  i +=2
    for (int i = 0; i < size; i = i + 2)
    {
        // i+1 because to check whether the array's next element is having or not , after each traversal
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5,6};
    int n = 6;
    swapAlternate(arr, n);
    print(arr, n);
    return 0;
}