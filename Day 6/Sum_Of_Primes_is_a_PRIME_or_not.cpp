// CPP program chech how many numbers are PRIMES which are formed by adding PRIMES 
//											are present below a given number ..!!



// METHOD 1 :: normal primes findng 
// METHOD 2 :: primes 6n+1  method ..


//METHOD 1 :


#include<bits/stdc++.h>
using namespace std;

int main()
{
	//  finding primes below the given number !!
	int n,k=0,flag;
	cout<<"Enter a no : ";
	cin>>n;
	int arr[n/2]={0};
	for(int i=2;i<=n;i++)
	{
		flag=0;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			arr[k]=i;
			k++;
		}
	}
	
	// cheching whether the sum of primes is a prime or not ...
	
	// initially s=2 since 2 cannot be a sum of 2 primes..!
	int s=2,ans=0;
	for(int i=1;arr[i]!=0;i++)
	{
		s=s+arr[i];
		for(int j=1;arr[j]!=0;j++)
		{
			if(s == arr[j])
			{
				cout<<s<<endl;
				ans++;
			}
		}
		if(s > n)
			break;
	}
	cout<<"ans = "<<ans;
	return 0;
}
