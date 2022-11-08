#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector<int> Fibonacci;
    int total=0, n1=0, n2=1;
    
    Fibonacci.push_back(n1);
    Fibonacci.push_back(n2);
    
    for (int i = 0; i < 8; i++)
    {
        
        total = n1 + n2;
        Fibonacci.push_back(total);
        n1 = n2;
        n2 = total;
        
    }
    
    for (int i=0; i<Fibonacci.size(); i++)
    {
        
        cout<<Fibonacci[i]<<endl;
        
    }

    return 0;
}

