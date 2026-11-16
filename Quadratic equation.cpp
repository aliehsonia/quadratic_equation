#include<iostream>
#include<math.h>
using namespace std;
void quadratic(int a,int b,int c){
	
	if(a==0){
		cout<<"not a quadratic equation";
	}
	else {
		double D=(b*b)-(4.0*a*c);
		double x1,x2;

	   if (D==0){
			cout<<"real and equal roots"<<endl;
			x1=-b/(2.0*a);
			cout<<"root="<<x1;
		}
	
	else if(D>0){
		cout<<"real and distinct roots"<<endl;
		x1=(-b+sqrt(D))/(2.0*a);
		x2=(-b-sqrt(D))/(2.0*a);
		cout<<"first root="<<x1<<endl;
		cout<<"second root="<<x2;
	}
	else{
		cout<<"complex roots"<<endl; 
		double real=-b/(2.0*a);
		double imaginary=sqrt(-D)/fabs(2.0*a);
		
	cout<<"D="<<D<<endl;
	cout<<"real="<<real<<endl;
	cout<<"imaginary="<<imaginary<<endl;
cout<<"first root="<<real<<"+"<<imaginary<<"i"<<endl;

cout<<"second root="<<real<<"-"<<imaginary<<"i";
      }
  }
}

int main(){
	int a,b,c;
	cout<<"enter a,b,c: ";cin>>a>>b>>c;
	quadratic(a,b,c);
	return 0;
}

