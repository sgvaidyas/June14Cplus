//distincr elements
#include<iostream>
using namespace std;

int main()
{
	int n,flag,ele;
	cout<<"\n Enter the no of elements in array 1 =";
	cin>>n;
	
	int a[n],j,maxval = 99999;
	
	cout<<"\n Enter array elements of array1 \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"\n Unique elements \n";
	for(int i=0;i<n;i++)
	{
		ele = a[i];
		flag=1;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==ele)
			{
				a[j]=maxval;
				flag=0;
			}
		}
		if(flag==1 && ele!=maxval)
		{
			cout<<ele<<"\t";
		}
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
