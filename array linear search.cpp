#include<iostream>
using namespace std;
int main() {
	long long n,m,i;
	cin>>n;
	long long a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<endl;
	cin>>m;
    for(i=0;i<=n;i++){
		if(a[i]==m){
			cout<<i<<"	";

		}


	  else{
		cout<<"-1"<<"	"<<m;
	}
    }
	return 0;
}
