//  -------->  Program for  BUBBLE SORT 


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of the array : ";
	cin>>n;
	int arr[n];
	
	// reading the elements of the Array
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	// sorting the given Array 
	
	for(int i=0;i<n;i++)
	{
	
	//Here from i=0 to i=1 the element at index 0 is sored and that is the least element of the Array.
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//now the Array is SORTED ...
	
	cout<<"The SORTED order of Elements is " ;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
