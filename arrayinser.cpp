#include<bits/stdc++.h>
using namespace std;
void targetSum(int a[], int n, int x)
{
    int sum=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        sum=a[i]+a[j];
        if(sum==x){
            cout<< a[i] <<"and"<< a[j] << endl;
        }
    }
}

}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	targetSum(a,n,x);
	return 0;
}
