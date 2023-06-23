#include<iostream>
using namespace std;
int bits(int n){
    int ans=0;
while(n>0){
				//j=(j&1);
				if( (n&1)==1 ){
					ans++;
				}
				n=(n>>1);
			}
			return ans;
}
int main() {
	int q,a,b;
	int ans;
	cin>>q;
	for(int i=0;i<q;i++){
            ans=0;
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			 //ans=bits(j);
			 ans+=bits(j);
			//cout<<ans<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}
