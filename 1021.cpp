#include <iostream>
#include <cmath>

using namespace std;

int main(){
	while(1){ 
		double a,b,c,rt;
		const double A=3.90802e-3,B=-5.80195e-7,r0=1000; 
		cin>>rt;
		rt=rt*1000;
		double t=r0/rt;
		a=B*t;
		b=A*t;
		c=t-1;
		double d=sqrt(b*b-4*a*c);
		double x1=(-1*b+d)/(2*a);
		double x2=(-1*b-d)/(2*a);
		cout<<"温度为"<<x1<<endl; 
	}
	return 0;
}
