/*
a	11	22	11	22	55	66	
	0	1	2	3	4	5	
						i	
	a[0]	a[1]	a[4]	a[5]			
na	11		22		55		66			
	0		1		2		3		4				
*/	
#include<iostream>
using namespace std;

int main()
{
	int n,flag;
	cout<<"\n Enter the no of elements in array 1 =";
	cin>>n;
	
	int a[n],b[n];
	int aptr,bptr=0;
	
	cout<<"\n Enter array elements of array1 \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	for(aptr=0;aptr<n;aptr++)
	{
		if(bptr==0)
		{
			b[bptr]=a[aptr];			
			bptr++;
		}
		flag=1;
		for(int j=0;j<bptr;j++)
		{
			if(b[j]==a[aptr])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			b[bptr]=a[aptr];
			bptr++;
		}
			
	}

	cout<<"\n array  elements \n";
	for(int i=0;i<bptr;i++)
		cout<<b[i]<<"\t";	
}








					
