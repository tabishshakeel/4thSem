#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

   
   
	int n;
    cout<<"enter the number\n";
    cin>>n;
   
       int a[200];
    a[0]=1;
     int k=1;
    
    for(int m=1;m<=n;m++)
    {
    
   
    int i=0;
    int x;
    int tmp=0;
    while(k!=0 || tmp!=0)
    { if(k!=0)
        {x=a[i]*m+tmp;
      a[i]=x%10;
      
      tmp=x/10;
      i++;
      k--;
    }
    else
    {
        a[i]=tmp%10;
       
        tmp/=10;
        i++;
        
    }
	} k=i;}
for(int q=k-1;q>=0;q--)
cout<<a[q];
 
cout<<endl;
}
       