#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int max(vector<double>value,vector<double>weight)
{
	int mi=-1;
	double max=0;
	for(size_t i=0;i<weight.size();i++)
	{if(weight[i] !=0 && (double)value[i]/weight[i]>max )
	{
		max= (double)value[i]/weight[i];
		mi=i;
	}}
	return mi;
}

double Min(int capacity,int in,vector<double>weight)
{
	if(capacity<weight[in])
	return capacity;
    else
    return weight[in];
}


double tvalue(vector<double>value,vector<double>weight,int capacity)
{
	double ivalue=0;
	for(size_t i=0;i<weight.size();i++)
	{   if(capacity==0)
	      return ivalue; 
	
	    int in=max(value,weight);
		double a= Min(capacity,in,weight);
		ivalue+=a*(double)value[in]/weight[in];
		capacity-=a;
		weight[in]-=a;
		
		
	}
	return ivalue;
}

int main()
{
	double n,capacity;
	cin>>n>>capacity;
	
	vector<double>value(n);
	vector<double>weight(n);
	for(int i=0;i<n;i++)
	{
		cin>>value[i]>>weight[i];
	}
	
	cout<<tvalue(value,weight,capacity);
}
