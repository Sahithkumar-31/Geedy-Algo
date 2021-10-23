/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int>noprize(int n)
{
    vector<int>a;
    if(n<=2)
    {
        return vector<int>({n});
    }
    long long k =static_cast<int>(floor(sqrt(n)));
    while((k*(k+1))/2<=n)
    {
        k++;
    }
    k--;
    a.reserve(k);
    
    
    for(int i=1;i<=k;i++)
    {
        if(i==k)
        {
            a.push_back(n);
        }
        else
        {
            n=n-i;
            a.push_back(i);
        }
        
    }
    return a;
}

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>prizes= noprize(n);
    cout<<prizes.size()<<"\n";
    for(size_t i=0;i<prizes.size();++i)
    {
        cout<<prizes[i]<<" ";
    }
}
