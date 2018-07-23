#include <iostream>
using namespace std;
int main()
{
int n1,n2,r,p=1,i;
cout<<"";
cin>>n1;
n2 = n1;
for(i=n1;i>0;i=i/10)
{
r=i%10;
p=p*r;
}
cout<<""<<p<<endl;
}
