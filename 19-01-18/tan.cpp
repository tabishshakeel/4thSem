#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

  int result;
  for(int i=57;i<=69;i++)
{

 result=20*tan(i/5.0);
 if(result>=0)
{
cout<<setw(60);
cout<<"||";
for(int i=0;i<result;i++)
cout<<'-';
//cout << setw(result)<<setfill('-');
cout <<'*'<<endl;
}
  else
{
if(result==-1)
cout<<setw(59+result)<<'*';
else{
cout<<setw(60+result)<<'*';
for(int i=0;i<(-1)*result-2;i++)
cout<<'-';}
cout<<"||"<<endl;
}
}
  return 0;
}

