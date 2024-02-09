#include<iostream>
#include<string>
using namespace std;
int happy(int n)
{
    int i=0,t,t1=0;
    t=n;
    
        while(n!=0)
    {
      i=n%10;
    t1+=(i*i);
     n/=10;
     
    }
    return t1;
    
}
int main()
{
    int n,i,j,k,sum=0,size=0;
    cout<<"enter the number to check happy or not";
    cin>>n;
    k=n;
   while(k!=1&&k!=4)
   {
    k=happy(k);
   }
   if(k==1)
   {
    cout<<n<<"is  happy number";
   }
   else if(k==4)
   {   cout<<n<<" is Not happy";
   }

}
