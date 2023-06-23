#include<iostream>
#include<climits>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long a[n];
	int i,j;
	long long max=INT_MIN;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<endl;
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<max<<endl;
	return 0;
}
