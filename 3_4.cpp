#include <iostream>
#include <vector>
using namespace std;


void large(long long x[],int n)
{
	int k=n;
	long long s[n];
	int j = 0;
	
	while(j<k)
	{
		int index= -1;
		for(int i=0; i<n; i++ )
		{
			if (index==-1 || x[i]>x[index] )
			{
				index=i;
			}
		}
		s[j]=x[index];
		j++;
		n=n-1;
		for(index;index<n;index++)
		{
			int l=1;
			x[index]=x[ index + l];
			l++;
		}
		x[n];
		
	}
	
	for(int i=0;i<k;i++)
	{
		x[i]=s[i];
	}
	
	
}

int main()
{
	int n;
	cin>>n;
	long long a[n],b[n],c[n],j=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	large(a,n);
	large(b,n);
	
	for(int i=0;i<n;i++)
	{
		j+=a[i]*b[i];
		
	}
	cout<<j;
}
