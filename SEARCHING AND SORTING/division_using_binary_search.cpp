#include<iostream>
using namespace std;
int divide(int dividend,int divisor){
    int s=0;
    int ans=0;
    int e=abs(dividend);
    while(s<=e){
        int mid=s+(e-s)/2;
        if(abs(divisor*mid)==abs(dividend)){
            ans=mid;
            break;
        }
        else if(abs(divisor*mid)>abs(dividend)){
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
    }
        if((dividend>0&&divisor>0)||(dividend<0&&divisor<0)){
         return ans;
        }else{
            return -ans;
        }
    
    
}
int main(){
    int dividend=22;
    int divisor=3;
    int ans=divide(dividend,divisor);
    int precision;
    cout<<"Enter a precision value"<<endl;
    cin>>precision;
    double finalAnswer=ans;
    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=finalAnswer;j*divisor<=dividend;j=j+step){
            finalAnswer=j;
        }
        step=step/10;
    }
    cout<<"value is"<<finalAnswer;
    return 0;
}