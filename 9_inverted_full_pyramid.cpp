#include <iostream>
using namespace std;

//num=6

// * * * * * *     r-0  row num-r  6
// -* * * * *      r-1             5
// --* * * *       r-2             4
// ---* * *        r-3             3
// ----* *         r-4             2
// -----*          r-5             1 

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < num-row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}