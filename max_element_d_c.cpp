#include <iostream>
using namespace std;
int max_func(const int arr[], int size)
{
    if(size == 1)
    {
        return arr[0];
    }
    else
    {
        if (arr[0] >= max_func(arr+1, size-1))
        {
            return arr[0];
        }
        else
        {
            return max_func(arr+1, size-1);
        }
    }
}
int main()
{
    int arr[8] = {1, 4, 5, 6, 7, 8,9, 10};
    int sum;
    sum = max_func(arr, 8);
    cout << sum << endl;
}
