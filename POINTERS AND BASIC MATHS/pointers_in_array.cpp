#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 3, 1, 9};
    int *ptr = arr;
    cout << " size of pointers is :" << sizeof(ptr) << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;  
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;
    return 0;
}