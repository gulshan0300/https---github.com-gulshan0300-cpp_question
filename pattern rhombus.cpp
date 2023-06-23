#include<iostream>
using namespace std;
int main() {
	int i,j,k,n,no=0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(j=1;j<=i;j++){
			no++;
			cout<<no<<" ";
		}
		for(k=1;k<i;k++){
			no--;
			cout<<no<<" ";
		}
		cout<<endl;
	}

	for(i=n-1;i>=1;i--){
         no=i-1;
		for(j=1;j<=n-i;j++){
			cout<<"  ";
		}

		for(j=1;j<=i;j++){
			no++;
			cout<<no<<" ";

		}
		for(k=1;k<i;k++){
			no--;
			cout<<no<<" ";
		}

		cout<<endl;
	}
	return 0;
}
