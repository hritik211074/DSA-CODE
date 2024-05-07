#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int size, int i)
{
    int index=i;
    int leftInd = 2 * index;
    int rightInd = 2 * index + 1;
    int largest = index;
    if (leftInd <= size && arr[largest] < arr[leftInd])
    {
        largest = leftInd;
    }
    if (rightInd <= size && arr[largest] < arr[rightInd])
    {
        largest = rightInd;
    }
    if(index!=largest){
      swap(arr[largest],arr[index]);
      index=largest;
      heapify(arr,size,index);
    }
}
void BuildHeap(int arr[],int n){
 for(int i=n/2;i>0;i--){
    heapify(arr,n,i);
 }
}
void HeapSort(int arr[],int size){
    int index=size;
    while(index!=1){
        swap(arr[1],arr[index]);
        size--;
        index--;
        // heapify the heap
        heapify(arr,size,1);
    }
}
int main()
{
    int arr[]={-1,12,15,13,11,14};
    int size=5;
    BuildHeap(arr,size);
    cout<<"printing the heap ->"<<endl;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    HeapSort(arr,size);
    cout<<"printing the heap afterr sorting->"<<endl;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}