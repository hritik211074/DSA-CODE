#include<bits/stdc++.h>
using namespace std;
class Param{
    public:
    int val;
    void operator +(Param &obj){
        int value1=this->val;
        int value2=obj.val;
        cout<<value1-value2<<endl;

    }
};
int main()
{
    Param obj1,obj2;
    obj1.val=5;
    obj2.val=7;
    obj1+obj2;
return 0;
}