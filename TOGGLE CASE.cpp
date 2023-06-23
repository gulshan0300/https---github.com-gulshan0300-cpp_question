#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[1000];
	cin.getline(a,1000);
	char ch;
	for(int i=0;i<strlen(a);i++){
     ch=a[i];
	 if(ch>= 'a' && ch<= 'z'){
        a[i]=ch-32;
	 }
	 else if(ch>= 'A' && ch<= 'Z'){
		 a[i]=ch+32;
	 }
	 //ch=cin.get();
	}
	cout<<a;
	cout<<endl;
	return 0;
}
