#include <bits/stdc++.h>
using namespace std;
#define PI 3.14
float circlearea(float r){
    return PI * r* r;
    }
float perimeterofcircle(float r){
        return 2 * PI * r;
    }
int main()
{
    cout<<circlearea(3.1681)<<endl;
    cout<<perimeterofcircle(3.22)<<endl;
    return 0;
}