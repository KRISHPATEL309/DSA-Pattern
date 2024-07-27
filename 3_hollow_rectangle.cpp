#include <iostream>
using namespace std;

// * * * * * r-1
// *       * r-2
// * * * * * r-3

int main()
{
    int num_r, num_c;
    cout << "enter number of rows : ";
    cin >> num_r;
    cout << "enter number of cols : ";
    cin >> num_c;

    for (int row = 0; row < num_r; row++)
    {
        if (row == 0 || row == num_r - 1)
        {
            for (int col = 0; col < num_c; col++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for (int j = 0; j < (num_c-2); j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        
        cout << endl;
    }
}
