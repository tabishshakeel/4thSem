#include <bits/stdc++.h>
using namespace std;
struct node
{
	vector <int> ls;
	int num;
};
int main()
{
	int n;
	cin>>n;
	struct node arr[n];
	for(int i=0;i<n;i++)
	{
		int h;
		cin>>h;
		arr[i].num = i;
		for(int j=0;j<h;j++)
		{
			int k;
			cin>>k;
			arr[i].ls.push_back(k);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i].num<<"--> ";
		
				for(int j=0;j<arr[i].ls.size();j++)
					if(j != arr[i].ls.size()-1)
					cout<<arr[i].ls[j]<<" -- ";
					else
						cout<<arr[i].ls[j]<<endl;
			
	}
}
