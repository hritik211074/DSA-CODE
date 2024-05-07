#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int size;
    int data;
    int front;
    int rear;
    int *arr;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        rear = 0;
        front = 0;
    }
    void push(int data)
    {
        if (front == size)
        {
            cout << "array is full " << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        if (front == rear)
        {
            cout << "array is empty now" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (rear == front)
            {
                rear = 0;
                front = 0;
            }
        }
    }
    int getfront()
    {
        if (front == rear)
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
        if (rear == front)
        {
            cout << "array is empty" << endl;
            return -1;
        }
        else{
              return arr[rear-1];
        }
        
          
        
    }
    bool isempty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getsize(){
       
            return rear-front;
    
    }

} ;
int main()
{
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<"find size of a queue  "<<q.getsize()<<endl;
     cout<<"front element of queue is "<<q.getfront()<<endl;
   
    cout<<"back element of queue is "<<q.getback()<<endl;
     if (q.isempty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
    q.pop();
      cout<<"find size of a queue  "<<q.getsize()<<endl;
     cout<<"front element of queue is "<<q.getfront()<<endl;
   
    cout<<"back element of queue is "<<q.getback()<<endl;
     if (q.isempty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    } 
    
    return 0;
}