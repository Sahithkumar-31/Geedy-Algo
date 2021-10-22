#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long change,change10,change5;
	
	change10=n/10;
	n=n-(change10*10);
	change5=n/5;
	n=n-(change5*5);
    change=change10+change5+n;
    cout<<change;
	return 0;	
}
