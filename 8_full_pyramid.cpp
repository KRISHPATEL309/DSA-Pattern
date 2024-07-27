#include <iostream>
using namespace std;

// -----*          r-0  num-r  1 
// ----* *         r-1         2
// ---* * *        r-2         3
// --* * * *       r-3         4
// -* * * * *      r-4         5
// * * * * * *     r-5         6


int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num-row; col++)
        {
            cout<<" ";
        }

        for (int col = 0; col < row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}