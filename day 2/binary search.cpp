// ----------->  BINARY SEARCH PROGRAM WITHOUT  RECURSION  

#include<bits/stdc++.h>

			 /*  Binary search is only applicable for   SORTED ARRAY's  ONLYY  */

			/*  The above  header file includes all the other header files in it ,
   		                      so that we dont need to include other header files again like math.h ,string.h  etc ..!   */

using namespace std;
int main()
{
	int n,key,i;
					//Here n is the SIZE of the array or length of the Array & KEY the the element which we searching for ....
	cout<<"enter len of array : ";
	cin>>n;
	int arr[n],low=0,high=n-1,mid,c=0;
	cout<<"enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element to search : ";
	cin>>key;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid] == key){
			printf("element %d found at index %d  ",key,mid);
			c=1;
			break;
		}		
		else if(arr[mid]> key)
			high=mid-1;
		else
			low=mid+1;
	}
	if(c==0)
		printf("element not found  ");
		
}

// NOTE :  Here in cpp we can use    ---->  printf()  and cout   also  **so both syntax's are accepted here ..


TIME COMPLEXITY :
	
	(FOR SUCCESSFUL SEARCH )
	BEST CASE : O(1)   
	//When the element is at the mid position 
	WORST CASE : O(Log N)
	//here N is the size or len of the Array .
