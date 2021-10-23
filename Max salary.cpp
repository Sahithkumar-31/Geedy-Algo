#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <ostream>
#include <iostream>
using namespace std;

string large_salary(vector<string>a)
{
    std::stringstream k;
    
    sort(a.begin(),a.end(),[](const string &a,const string &b)
    {
        return (a+b)>(b+a);
    });
    
    for(auto& i:a)
    {
        k<<i;
    }
    
    string res;
    k>>res;
    return res;
}
int main()
{
    int n;
    cin>>n;
    
    vector<string>a(n);
    
    for(size_t i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    
    cout<<large_salary(a);

}
