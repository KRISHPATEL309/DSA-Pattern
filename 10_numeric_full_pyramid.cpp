#include <iostream>
using namespace std;

// - - - - 1           r-0  space : num-r  1              row+1 
// - - - 2 3 2         r-1                 2 3
// - - 3 4 5 4 3       r-2                 3 4 5
// _ 4 5 6 7 6 5 4     r-3                 4 5 6 7
// 5 6 7 8 9 8 7 6 5   r-4                 5 6 7 8 9


int main(){
    int num;
    cout<<"enter any number: ";
    cin>>num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num-row; col++)
        {
            cout<<"  ";
        }
        int k = row+1;
        for (int col = 0; col < k; col++)
        {
            cout<<k+col<<" ";
        }
        for (int col = 0; col < row; col++)
        {
            cout<<((row*2)-col)<<" ";
        }
        cout<<endl;
    }
    
}