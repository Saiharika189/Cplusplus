#include <iostream>
#include <vector>
using namespace std;
int num_func(vector<int> &arr, int index = 0)
{
    if(index == arr.size())
    {
        return 0;
    }
    else
    {
        return arr[0] + num_func(arr, index+1);
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(9);
    arr.push_back(11);
    int num;
    num = num_func(arr);
    cout << "num elements in the array is" << num << endl;
}
