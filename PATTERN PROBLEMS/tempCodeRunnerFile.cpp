#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    
    //Left side
    for (int row=0; row< n; row++)
    {
        for (int col=0; col< row+1; col++)
        {
            cout << "*";
        }

        //Lft side space
        for (int space1=0; space1< n-row-1; space1++)
        {
            cout << " ";
        }
    
    //Right side
   
        for (int space2=0; space2< n-row-1; space2++)
        {
            cout << " ";
        }

        //Right side space
        for (int star=0; star< row+1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    
    for (int srow=0; srow< n; srow++)
    {
        //Left side lower
        for (int trow=0; trow< n-srow; trow++)
        {
            cout << "*";
        }
        for (int space1=0; space1< srow; space1++)
        {
            cout << " ";
        }

        //Right side lower
        for (int space2=0; space2< srow; space2++)
        {
            cout << " ";
        }
        for (int frow=0; frow< n-srow; frow++)
        {
            cout << "*";
        }
        cout << endl;
    }

    

}