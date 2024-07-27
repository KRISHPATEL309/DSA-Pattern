#include <iostream>
using namespace std;

// col-5
// * * * * * r-0  5*
// * * * *   r-1 4*
// * * *     r-2 3*
// * *       r-3 2*
// *         r-4 1*

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num-row; col++)
        {
            cout<<"* ";
        }
        cout<<endl; 
    }
    
}