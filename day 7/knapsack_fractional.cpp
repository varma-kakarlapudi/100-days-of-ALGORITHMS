#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b);
void sort(int p[],int w[],int r[],int n);

int main()
{
	int n,m;
	cout<<"enter max no. of items and capacity of bag :"<<endl;
	cin>>n>>m;
	
	int p[n],w[n];
	float r[n];
	
	cout<<"enter the profits of items : "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	cout<<"enter the weights of items : "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
	}
	
	for(int i=0;i<n;i++)
	{
		r[i] =((float)p[i])/w[i];
	}
	
	//sort(&p[n],&w[n],&r[n],n);
	
	for(int j=0;j<n;j++)
	{
		for(int k =j+1;k<n;k++)
		{
			if(r[j] < r[k])
			{
				int t;
				t=r[j];
				r[j]=r[k];
				r[k]=t;
				
				t=p[j];
				p[j]=p[k];
				p[k]=t;
				
				t=w[j];
				w[j]=w[k];
				w[k]=t;
				
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<r[i]<<" ";
	}
	cout<<endl;
	int i=0;
	float profit=0;
	while(m>0)
	{
		if(w[i] < m)
		{
			profit+=p[i];
			m=m-w[i];
		}
		else{
			profit+=m*r[i];
			m=0;
		}
		i++;
		
	}
	//cout<<"profit is "<<profit<<endl;
	cout<<"profit is "<<profit<<endl;
	return 0;
}

