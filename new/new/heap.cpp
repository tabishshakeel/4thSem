#include<bits/stdc++.h>
using namespace std;
void check(int node,int arr[]);
void del(int node,int arr[],int n);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		check(i,arr);
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		arr[0]=-1;
		del(0,arr,n);
		for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
		cout<<endl;
	}
	


}
void del(int node,int arr[],int n)
{
	if(node<n && 2*node+1<n)
	{
		int max=0,val=0;
	if(arr[2*node+1]>arr[2*node+2])
	{
		max=2*node+1;
		val=arr[2*node+1];
	}
	else
	{
		max=2*node+2;
		val=arr[2*node+2];
	}

	arr[node]=val;
	arr[max]=-1;
	if(max < n)
	del(max,arr,n);
	}
	else
		return;
}
void check(int node,int arr[])
{
	if(node == 0)
		return;
	else
	{
		int n= (node-1)/2;
		while(arr[n] < arr[node] && n>=0)
		{
			int t= arr[n];
			arr[n]=arr[node];
			arr[node]=t;
			node=n;
			n=(node-1)/2;
		}
	}
}