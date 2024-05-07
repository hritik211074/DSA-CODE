#include <bits/stdc++.h>
using namespace std;
void solveneg(int arr[], int size, int k)
{
    queue<int> dq;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            dq.push(i);
        }
    }
    for (int i = k; i < size; i++)
    {
        if (dq.empty())
        {
            cout << "0"<< " ";
        }
        else
        {
            cout << arr[dq.front()] << " ";
        }
        while (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop();
        }
        if (arr[i] < 0)
        {
            dq.push(i);
        }
    }
    if (dq.empty())
    {
        cout << "0"<< " ";
    }
    else
    {
        cout << arr[dq.front()] << " ";
    }
}
int main()
{
    int arr[] = {-2, 1, -3, 4, 5, -6};
    int size = 6;
    int k = 3;
    solveneg(arr, size, k);
    return 0;
}