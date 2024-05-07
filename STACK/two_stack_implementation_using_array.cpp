#include <iostream>
using namespace std;
class stack{
private:
    int top2;
    int top1;
    int *arr;
    int size;
    public:
    stack(int size)
    {
        arr = new int[size];
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
        this->size = size;
        top1 = -1;
        top2=size;
    }
    void push1(int data)
    {
        if (top2 - top1== 1)
        {
           cout << "overflow of satck 1" << endl; 
        }
        else
        {
           top1++;
           arr[top1] = data; 
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "underfow of stack1" << endl;
        }
        else
        {
            top1--;
        }
    }
     void push2(int data)
    {
        if (top2 - top1 == 1)
        {
          cout << "overflow of satck2" << endl;
        }
        else
        {
           top2--;
           arr[top2] = data;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "underfow of stack2" << endl;
        }
        else
        {
            top2++;
        }
    }
    void print(){
        cout<<"stack1 "<<top1 <<endl;
        cout<<"stack2 "<<top2<<endl;
        cout<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }
   
   
};
int main()
{
    stack st(9);

    st.push1(10);
     st.print();
    st.push1(20);
     st.print();
    st.push1(30);
     st.print();
    st.push1(40);
     st.print();
    st.push1(50);
     st.print();

    st.push2(10);
     st.print();
    st.push2(20);
     st.print();
    st.push2(30);
     st.print();
    st.push2(40);
     st.print();
    // st.push2(50);
    //  st.print();
   

    
    return 0;
}