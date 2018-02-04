#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n]={0};
	/*for(int i=0;i<n;i++)
	{
		cin>>arr[i][0];
	}*/
	for(int i=0;i<n;i++)
	{
		int h;
		cin>>h;
		for(int j=0;j<h;j++)
		{
			int k;
			cin>>k;
			arr[i][k]=1;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<i<<"--> ";
		for(int j=0;j<n;j++)
		{
			if(arr[i][j] == 1)
				cout<<j<<" ";
		}
		cout<<endl;
	}
}