#include <bits/stdc++.h>
using namespace std;
void printpermutation(string &str, int i)
{
    if (i >= str.length())
    {
        cout << str << " ";
        return; 
    }
    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        printpermutation(str, i + 1);
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "abc";
    int i = 0;
    printpermutation(str, i);

    return 0;
}