#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<"SECOND"<<endl;

	    }
	    else if(x<y){
	        cout<<"FIRST"<<endl;
	    }
	    else{
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
