#include<bits/stdc++.h>

/* The above  header file includes all the other header files in it ,
   so that we dont need to include other header files again like math.h ,string.h  etc ..!   */
   
using namespace std;
int main()
{
	/*  SIZE is the size of the array on which we will search our key */
	/*   KEY is the value which we have to search  or the element to search */
	int size,key,flag=0,c=-1;  
	cin>>size>>key;
	int array[size];
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	//NOTE :  Here index starts at ZERO(0)   &&    this is linear search WITHOUT RECURSION .
	for(int j=0;j<size;j++)
	{
		if(key==array[j]){
			flag=1;
			c=j;
			break;  // break is used in order to reduce the time complexity 
			//when we find the KEY at FIRST element then we dont need to check the rest of the array
		}
	}
	if(flag==1)
		cout<<"key "<<key<<" is found at index " <<c<<endl;
	else
		cout<<"key not found"<<endl;
}




TIME COMPLEXITY of SUCCESS searching:
	
	BEST CASE : O(1) 
    WORST CASE: O(n)  //here n is size of the array
    
    
TIME COMPLEXITY of UN-SUCCESSFUL Searching :

	ANY CASE: O(n)  //here n is size of the array
