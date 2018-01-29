#include <iostream>
#include <string.h>
using namespace std;
int main()
{
string a,b;
cin>>a>>b;
int l1=a.length();
int l2=b.length();
int m,n;
string max,min;
if(l1>l2)
{
m=l1;
n=l2;
max=a;
min=b;
}
else
{
m=l2;
n=l1;
max=b;
min=a;
}
int carry=0,k=m;
int l=m;
int arr[m+1]={0};
while(n)
{
int sum=carry+max[m-1]+min[n-1]-96;
arr[k]=sum%10;
k--;
carry=sum/10;
m--;
n--;
}
while(m)
{

int sum=carry+max[m-1]-48;
arr[k]=sum%10;
carry=sum/10;
m--;
k--;
}
for(int i=0;i<=l;i++)
cout<<arr[i];

cout<<endl;
}
