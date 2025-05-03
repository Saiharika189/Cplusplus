#include <iostream>
using namespace std;
int search(const int arr[], int k, int low, int high)
{
    int mid = (low+high)/2;
    if(low > high)
    {
        cout << low << "" << high << endl;
        return -1;
    }
    if(k < arr[mid])
    {
        return search(arr, k, low, mid -1);
    }
    else if (k == arr[mid])
    {
        /* code */
        return mid;
    }
    else{
        return search(arr, k, mid+1, high);
    }
    

}
int main()
{
    int array[10] = {3, 5, 6, 7, 8};
    int index = search(array, 10, 0, 4);
    if(index != -1)
    {
        cout << "found at index" << index << endl;
    }
    else{
        cout << "not found" << endl;
    }
    return 0;
}
