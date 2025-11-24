#include<iostream>
#include<cmath>
using namespace std;
float a;
float qart(float x) 
{	float y=0.5*(x+a/x);
if(abs(x-y)<1e-5) return y;	
else return qart(y);
}
int main(){	
	cin>>a;	
	if(a>0) cout<<qart(a);
	else if(a==0) cout<<0;	
	else a=-a,cout<<qart(a)<<"i";
	return 0;}