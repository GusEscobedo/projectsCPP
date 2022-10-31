#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector<int> Fibonacci;
    
    int i, total, n1=0, n2=1;
    
    Fibonacci.push_back(n1);
    Fibonacci.push_back(n2);
    
    for (i=0;total<900;i++)
    {
        
        total = n1 + n2;
        Fibonacci.push_back(total);
        n1 = n2;
        n2 = total;
        
    }
    
    for (i=0; i<Fibonacci.size(); i++)
    {
        
        cout<<Fibonacci[i]<<endl;
        
    }

    return 0;
}




