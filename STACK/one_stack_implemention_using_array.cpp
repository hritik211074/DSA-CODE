#include <iostream>
using namespace std;
class stack{
private:
    int top;
    int *arr;
    int size;
    public:
    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "overflow of satck" << endl;
        }
    }
    int gettop(){
     if(top==-1){
        cout<<"not have a top value"<<endl;
     }else{
        return arr[top];
     }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "underfow of stack" << endl;
        }
        else
        {
            top--;
        }
    }
    int getsize()
    {
        return top + 1;
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(!st.isempty()){
        cout<<st.gettop()<<" ";
        st.pop();
    }
    return 0;
}