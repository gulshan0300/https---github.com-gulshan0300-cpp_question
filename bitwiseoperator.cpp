#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++){
		int no;
		cin>>no;
		for(int j=0;no>0;j++){
			int r=no%10;
			int p=r*pow(2,j);

			ans=ans+p;

		}
		cout<<ans<<endl;
	}
	return 0;
}
