//  ------>   JUMP SEARCH 
// For this technique the array must be sorted  

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,c=0,key;
	cout<<"Enter size of the Array : ";
	//here Size is the size of the Array . 
	cin>>size;
	int arr[size];
	cout<<"Enter elements of the Array : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element to search : ";
	cin>>key;
	// Key is the element which we have  to search .
	int k=2,n=2,s=0,l=0;
	while(n<size)
	{
		if(key > arr[n])
		{
			s=n;
			n=n+n;	
		}
		else
		{
			if(l==0)
			{
				l=1;
				for(int i=s;i<=n;i++)
				{
					if(arr[i]==key)
					{
						c=1;
						cout<<"Element " <<key <<" found at index "<<i<<endl;
						
						break;
					}
				}
				break;
			}
		}
	}
	if(l==0)
	{
		
		for(int i=s;i<=size;i++)
		{
			if(arr[i]==key)
			{
				cout<<"Element " <<key <<" found at index "<<i<<endl;
				c=1;
				break;
			}
		}
		
		if(c==0)
			cout<<"Element not Found "<<endl;
		}
	
	
	
}
















