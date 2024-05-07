#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int arr[101];
    int size;
    Heap()
    {
        size = 0;
    }
    void insertion(int value)
    {
        // 1st step is to insert the value in array in last
        size = size + 1;
        int index = size;
        arr[index] = value;
        // place the new coming value to it's right position
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
};
int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size=5;
    cout<<"printing the heap ->"<<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
    h.insertion(110);
    cout<<"printing the heap ->"<<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}