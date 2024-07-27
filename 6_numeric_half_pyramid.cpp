#include <iostream>
using namespace std;

// 1          r-0 
// 1 2        r-1
// 1 2 3      r-2
// 1 2 3 4    r-3
// 1 2 3 4 5  r-4

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    

}