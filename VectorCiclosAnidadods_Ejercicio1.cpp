#include <iostream>

using namespace std;

int main()
{
    
    int array[9][3] = {
        {1, 1, 1},
        {2, 1, 2},
        {3, 1, 3},
        {4, 2, 1},
        {5, 2, 2},
        {6, 2, 3},
        {7, 3, 1},
        {8, 3, 2},
        {9, 3, 3}
    };
        
    for (int i=0; i<9; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<array[i][j];
        }
        
        cout<<"\n";
    }

    return 0;
}