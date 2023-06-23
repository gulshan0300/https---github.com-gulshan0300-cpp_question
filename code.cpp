#include<iostream>
#include<climits>
using namespace std;

int main() {
int i,no;
int n=3;
int largest=INT_MIN;
for(i=1;i<=3;i=i+1){
	cin>>no;
	if(largest<no){
		largest=no;
	}
}
cout<<"The Largest no:"<<largest;
	return 0;
}
