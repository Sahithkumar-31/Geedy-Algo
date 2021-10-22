#include <iostream>
using namespace std;

int fuel(long long x[],long long n,long long l)
{
	int fills=0,cfill=0,pfills=0;
    for(int index=0;index<=n;index++)
    {
    	if(x[index]-cfill>l)
    	{
    		if(pfills==cfill&&index!=0||pfills-cfill>l)
    		{
    			return -1;
			}
			fills++;
			cfill=pfills;
		}
		pfills=x[index];
	}
	return x[n]-x[n-1]<=l?fills:-1;
}





int main()
{
	long long d,l,n;
	cin>>d;
	cin>>l;
	cin>>n;
	long long x[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	x[n]=d;
	cout<<fuel(x,n,l);
	return 0;
}
