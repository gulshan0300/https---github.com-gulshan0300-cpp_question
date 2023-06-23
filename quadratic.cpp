#include<iostream>
#include<cmath>
using namespace std;

int main(){
int a,b,c,x1,x2;
cin>>a;
cin>>b;
cin>>c;
    if(b*b-4*a*c>=0){
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }

cout<<x1<<endl;
cout<<x2<<endl;
return 0;
}
