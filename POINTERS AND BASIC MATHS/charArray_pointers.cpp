#include<iostream>
using namespace std;
int main(){
    char ch[20]="babbar";
    char *c=ch;
    cout<< ch<<endl;
    cout<< &ch<<endl;
    cout<< ch[0]<<endl;
    cout<< & c<<endl;
    cout<< *c<<endl;
    cout<< c<<endl;
    char *cptr="Hritik";
    cout<< cptr<<endl;
    return 0;
}