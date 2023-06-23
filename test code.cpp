#include<iostream>
#include<cmath>
using namespace std;
int main() {
int a,b,c,x1,x2,D;
cin>>a;
cin>>b;
cin>>c;
D=b*b-4*a*c;
if(D>0){
	x1=(-b-sqrt(D))/(2*a);
	x2=(-b+sqrt(D))/(2*a);
	cout<<"roots are real and distinct"<<endl;
	cout<<x1<<endl;
	cout<<x2<<endl;
}
else if(D=0){
	x1=-b/(2*a);
	x2=-b/(2*a);
	cout<<"roots are real and equal"<<endl;
	cout<<x1<<endl;
	cout<<x2<<endl;
}
cout<<endl;
	return 0;
}
