#include <iostream>
using namespace std;

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
int main(){
    int num;
    cout<<"enter any number: ";
    cin>>num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num-row; col++)
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    
}