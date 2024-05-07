#include <bits/stdc++.h>
using namespace std;
class CircularQueue
{
public:
    int size;
    int data;
    int front;
    int rear;
    int *arr;
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        rear =-1;
        front = -1;
    }
    void pushBack(int data)
    {
        if (front==-1 && rear==-1)
        {
           front++;
           rear++;
           arr[front]=data;
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=data;
        }
        else if(front==0 && rear==size-1){
            cout<<"Circular queue is full now"<<endl;
        }
        else
        {
            front--;
            arr[front] = data;
        }
    }
    void pushFront(int data)
    {
        if (front==-1 && rear==-1)
        {
           front++;
           rear++;
           arr[rear]=data;
        }
        else if(rear==size-1&& front!=0){
            rear=0;
            arr[rear]=data;
        }
        else if(front==0 && rear==size-1){
            cout<<"Circular queue is full now"<<endl;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void popFront()
    {
        if (front==-1 && rear==-1)
        {
            cout << "array is empty now" << endl;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }

    }
     void popBack()
    {
        if (front==-1 && rear==-1)
        {
            cout << "array is empty now" << endl;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0){
           rear=size-1;
        }
        else{
            rear--;
        }
        
    }
    int getfront()
    {
        if (front==-1 && rear==-1)
        {
            cout << "array is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    int getback()
    {
        if (front==-1 && rear==-1)
        {
            cout << "array is empty" << endl;
            return -1;
        }
        else{
              return arr[rear];
        }
        
          
        
    }
    bool isempty()
    {
        if (front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getsize(){
       
            return abs(rear-front+1);
    
    }

} ;
int main()
{
    CircularQueue q(6);
    q.pushFront(10);
    q.pushFront(20);
    q.pushBack(30);
    q.pushBack(40);
    q.pushFront(50);
    q.pushBack(60);
    cout<<"find size of a Circularqueue  "<<q.getsize()<<endl;
     cout<<"front element of Circularqueue is "<<q.getfront()<<endl;
   
    cout<<"back element of Circularqueue is "<<q.getback()<<endl;
     if (q.isempty())
    {
        cout << "Circularqueue is empty" << endl;
    }
    else
    {
        cout << "Circularqueue is not empty" << endl;
    }
    // q.popFront();
    // q.pushBack(70);
    //  cout<<"find size of a Circularqueue  "<<q.getsize()<<endl;
    //  cout<<"front element of Circularqueue is "<<q.getfront()<<endl;
   
    // cout<<"back element of Circularqueue is "<<q.getback()<<endl;
    //  if (q.isempty())
    // {
    //     cout << "Circularqueue is empty" << endl;
    // }
    // else
    // {
    //     cout << "Circularqueue is not empty" << endl;
    // } 
    
    return 0;
}