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
    void push(int data)
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
        else if(rear==front-1){
            cout<<"Circular queue is full now"<<endl;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
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
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
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
    q.pop();
    q.push(70);
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
    
    return 0;
}