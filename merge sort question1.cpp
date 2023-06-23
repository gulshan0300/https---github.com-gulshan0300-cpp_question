#include<iostream>
using namespace std;
void merge1(int *a,int *b,int *c,int s,int e){
	int m=(s+e)/2;
	int i=s;
	int j=m+1;
	int k=s;
	while(i<=m && j<=e){
		if(b[i]<=c[j]){
			a[k++]=b[i++];
		}
		else{
			a[k++]=c[j++];
		}
	}
	while(i<=m){
		a[k++]=b[i++];
	}
	while(j<=e){
		a[k++]=c[j++];
	}
}
void print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void mergesort(int *a,int s,int e){
    int b[50000];
    int c[50000];
	if(s>=e){
		return;
	}
	int m=(s+e)/2;
	for(int i=s;i<=m;i++){
		b[i]=a[i];
	}
	for(int i=m+1;i<=e;i++){
		c[i]=a[i];
	}
	mergesort(b,s,m);
	mergesort(c,m+1,e);
	merge1(a,b,c,s,e);
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	print(a,n);
	return 0;
}
