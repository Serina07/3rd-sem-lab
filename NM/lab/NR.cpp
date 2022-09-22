#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float fun1(float x)
{
	return(x*x-28);
};
float fun2(float x)
{
	return(2*x);
};
int main()
{
	float x1,E=0.0005,fx1,ffx1,x2,fx2,root;
	cout<<"Guess the initial root:";
	cin>>x1;
	fx1= fun1(x1);
	fx2=fun1(x2);
	ffx1= fun2(x1);
	here:
	x2=x1-(fx1/ffx1);
	x1=x2;
	if(fx2>E)
	{
		goto here;
	}
	root=x2;
	cout<<"root= "<<root;
}
