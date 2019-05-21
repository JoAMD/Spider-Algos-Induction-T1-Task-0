#include <bits/stdc++.h>

using namespace std;

int func(int x,int y,int m)
{
    int keep=0;
    int i;
    int temp=y;
    
    if(y==1)
    return (x%m);
    
    else if (y==0)
    return 1;
    
    else
    {
    while (temp>0)
    {
        temp/=2;
        keep++;
    }
        temp=x;
        
            temp=temp%m;
		if (temp>m/2)
		temp=temp-m;

            for(i=1;i<keep;i++)
            {
                temp*=temp;
                temp=temp%m;
		if (temp>m/2)
		temp=temp-m;
            }
            return(temp*func(x,y-pow(2,keep-1),m));
    }
    }

int main()
{
    int x,y,m,ans;
    cin>>x>>y>>m;                      //x is base y is power m is divisor
    
    if(m==1||x==0)
    cout<<" ans is "<<0;
    
    else 
    cout<<" ans is "<<func(x,y,m)%m;;
}
