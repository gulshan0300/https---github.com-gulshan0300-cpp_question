#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
/*int mindiff(int a[],int n,int x){
int m=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]-a[j]>m && a[i]+a[j]==x){
            m=a[i]-a[j];
        }
    }
}
//cout<<m<<" ";
return m;
}*/
void rosepair(int a[],int n,int x){
    int m=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==x && a[i]-a[j]>m ){
                    m=a[i]-a[j];
				//cout<<"Deepak should buy roses whose price are "<<a[i]<<" and "<<a[j]<<".";
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==x && a[i]-a[j]==m ){
                    //m=a[i]-a[j];
				cout<<"Deepak should buy roses whose price are "<<a[i]<<" and "<<a[j]<<".";
			}
		}
	}
}
void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int x;
		cin>>x;
		bubblesort(a,n);
		rosepair(a,n,x);
		//mindiff(a,n,x);
		cout<<" "<<endl;
	}
	return 0;
}
