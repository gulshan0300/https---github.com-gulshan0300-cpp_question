#include<iostream>
using namespace std;
int main() {
	int i,n,no,sum=0;

	for(i=1;true;i++){
		cin>>no;
		if(no>-1000||no<1000){
			sum=sum+no;

		if(sum>=0){
			cout<<no<<endl;
		}
		else{
			break;
		}
	    }
		cout<<endl;
	}
	return 0;
}
