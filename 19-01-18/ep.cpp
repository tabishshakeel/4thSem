#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n;
cout<<"enter the number"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<setw(n-i+1);
if(i==1)
	cout<<1<<endl;
else if(i==n)
{for(int i=0;i<2*n-1;i++)
	cout<<1;
cout<<endl;
}
else
{
	cout<<1;
cout<<setw(2*i-2);
	cout<<1;
cout<<endl;	
}

}
}
  

