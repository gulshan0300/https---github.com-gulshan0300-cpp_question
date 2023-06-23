#include<iostream>
using namespace std;
int invert(int n){
	int i,ans=0,a=1,r,newn;
	for(i=1;n>0;i++){
		r=n%10;
		newn=9-r;
		if(r<newn||n==9){
			ans+=(r*a);
		}
		else if(r>newn){
			ans+=(newn*a);

		}
		n/=10;
		a=a*10;
	}
	return ans;
}
int main() {
int n;
cin>>n;
cout<<invert(n)<<endl;

	return 0;
}
