#include <iostream>
using namespace std;
int sum_func(const int arr[], int size)
{
    if(size == 0)
    {
        return 0;
    }
    else
    {
        return arr[0] + sum_func(arr+1, size-1);
    }
}
int main()
{
    int arr[8] = {1, 4, 5, 6, 7, 8,9, 10};
    int sum;
    sum = sum_func(arr, 8);
    cout << sum << endl;
}
