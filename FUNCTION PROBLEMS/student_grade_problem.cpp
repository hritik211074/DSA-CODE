#include<iostream>
using namespace std;
void gradeStudent(int marks){
    if(marks>=90){
        cout<<"A"<<endl;
    }
    else if(marks>=80){
        cout<<"B"<<endl;
    }
    else if(marks>=70){
        cout<<"C"<<endl;
    }
    else{
        cout<<"D"<<endl;    }

}
int main(){
    int score;
    cout<<"Enter the score of student"<<endl;
    cin>>score;
    gradeStudent(score);
    return 0;
}