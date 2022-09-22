#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
	int i,fact;
	for(i=0;i<n;i++)
	{
		fact=fact*i;
	}
	return (fact );
}
int main()
{
	float n,x[100],fx[100],fd[20],y[100],xp;
	float s,h,v,p=1;
	int k,i,j;
	cout<<"enter the no:"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<endl<<"x["<<i<<"] = ";
        cin>>x[i];
        cout<<"y["<<i<<"] = ";
        cin>>y[i];
	}
	cout<<"enter xp"<<endl;
	cin>>xp;
	h=x[1]-x[0];
	s=((xp-x[0])/h);
	for(i=0;i<n-1;i++)
	{
		fd[i]=fx[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>=i+1.;j--)
		{
			fd[j]=fd[i]-fd[j-1];
		}
	}
	v=fd[0];
	for(i=1;i<n-1;i++)
	{
		for(k=1;k<n;k++)
		{
			p=p*(s-k+1);
		}
		v=v+((fd[i]*p)/fact(i));
	}
	cout<<"the interpolated value v at xp is:"<<v<<endl;
	
}
