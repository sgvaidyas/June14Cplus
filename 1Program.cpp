/*
	0	1	2	3		n1
a	11	22	33	44		
						
b	99	88				n2
						
	a[0]	b[0]	a[1]	b[1]	a[2]	a[3]
c	11		99		22		88		33		44
	0		1		2		3		4		5
						
*/	
#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
	cout<<"\n Enter the no of elements in array 1 =";
	cin>>n1;
	
	cout<<"\n Enter the no of elements in array 2 =";
	cin>>n2;
	
	n3=n1+n2;
	int a[n1],b[n2],c[n3];
	cout<<"\n Enter array elements of array1 \n";
	for(int i=0;i<n1;i++)
		cin>>a[i];
		
	cout<<"\n Enter array elements of array2 \n";
	for(int i=0;i<n2;i++)
		cin>>b[i];
	int k=0;
	int max = (n1>n2)?  n1  :   n2  ;
	for(int i=0;i<max;i++)
	{
		if(i<n1)
		{
			c[k]=a[i];
			k++;
		}
		if(i<n2)
		{
			c[k]=b[i];
			k++;
		}
	}
	cout<<"\n array 3 elements \n";
	for(int i=0;i<n3;i++)
		cout<<c[i]<<"\t";	
}








					
