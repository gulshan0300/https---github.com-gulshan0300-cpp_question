#include<iostream>
using namespace std;
int main() {
	int i=1,n,no,sum=0;
	cin>>n;
	while(true){
        cin>>no;
        if(no>-1000||no<1000){
            sum+=no;
            if(sum>=0){
                cout<<no<<endl;
            }
            else{
                break;
            }
        }
        i++;
	}
	return 0;
}
