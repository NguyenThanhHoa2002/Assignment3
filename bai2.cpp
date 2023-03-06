#include <iostream>

using namespace std;

void sumArray(int *arr, const int &size, int &sumOut);
int sumArray(int *arr, const int &size);

int main(int argc, char const *argv[])
{
    int size;
    cout << "Input the number of elements to store in the array (max 10) : ";
    cin >> size;
    if (size > 10)
    {
        cout << "Number of elements <= 10" << endl;
        return -1;
    }
    cout << "Input " << size << " number of elements in the array :" << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\telement - " << i + 1 << " : ";
        cin >> arr[i];
    }
    int sum;
    sumArray(arr, size, sum);
    cout << "The sum of array is : " << sum << endl;
    return 0;
}

int sumArray(int *arr, const int &size)
{
    int sumOut = 0;
    for (int i = 0; i < size; i++)
        sumOut += arr[i];

    return sumOut;
}

void sumArray(int *arr, const int &size, int &sumOut)
{
    sumOut = 0;
    for (int i = 0; i < size; i++)
        sumOut += arr[i];
}
