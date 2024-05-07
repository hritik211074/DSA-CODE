#include<bits/stdc++.h>
using namespace std;
int main()
{
string str1,str2;
cin>>str1>>str2;
cout<<"if i talk about length of string"<<endl;
cout<<"first string length"<<str1.length()<<"and"<<"second string length"<<str2.length();
cout<<endl;
cout<<"lets talk about push_back function"<<endl;
string str3="Hritik";
str3.push_back('k');
cout<<"new string 3 is-->>"<<str3<<endl;
cout<<"lets talk about pop_back function"<<endl;
str3.pop_back();
cout<<"after pop back->"<<str3<<endl;
cout<<"if i talk about substring"<<endl;
string str4="my name is Hritik kumar maurya";
cout<<"substring is-->"<<str4.substr(0,7)<<endl;
cout<<"if i talk about compare fuction -->it find whether both string equal or not"<<endl;
string str5="Hritik";
string str6="hritik";
bool res= str5.compare(str6)==0;
cout<<res<<endl;
cout<<"Here a find function-->> it find index of character and string"<<endl;
string str7="my college name is TIT";
string target="TIT";
cout<<"index is-->>"<<str7.find(target)<<endl;
cout<<"lets talk about replace function"<<endl;
string str8="This is my name";
string str9="Hritik";
str8.replace(0,4,str9);
cout<<"new string is->"<<str8<<endl;
return 0;

}