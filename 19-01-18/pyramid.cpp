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
for(int j=1;j<=i;j++)
cout<<j;
for(int j=i-1;j>0;j--)
cout<<j;
cout<<endl;
}
}
