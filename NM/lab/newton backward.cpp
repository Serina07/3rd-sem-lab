#include<iostream>
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
	float xp,bd[100],fx[100],y[100];
	int n,i,j,k;
	float v,x[100],p,h;
	cout<<"enter the no:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl<<"x["<<i<<"] = ";
        cin>>x[i];
        cout<<"y["<<i<<"] = ";
        cin>>y[i];
	}
	cout<<"enter xp:"<<endl;
	cin>>xp;
	h=x[1]-x[0];
	cout<<"h = "<<h<<endl;
	float s=((xp-x[n-1])/h);
	cout<<"s = "<<s;
	for(i=0;i<=n-1;i++)
	{
		bd[i]=fx[i];
	}
	for(i=n-1;i<=1;i--)
	{
		for(j=0;j<=i-1;j++)
		{
			bd[j]=bd[j+1]-bd[j];
		}
	}
	v=bd[n-1];
	for(i=1;i<=n-1;i++)
	{
		for(k=1;k<=i;k++)
		{
			p=p*(s+k-1);
	    }
			v=v+((bd[n-i-1]*p)/fact(i));	
		    p=1;
		    cout<<"the interpolated value v at xp is:"<<v;
	}
	//cout<<"the interpolated value v at xp is:"<<v;
}
