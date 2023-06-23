#include<iostream>
#include<cstring>
using namespace std;
void maping(char a[]){
	int fre[26]={0};

	char x;
	for(int i=0;i<strlen(a);i++){
		char ch=a[i];
		int index=ch - 'a';
		fre[index]++;
	}
	int maxe=0;
	for(int i=0;i<26;i++){
            //x=i+'a';
		if(maxe<fre[i]){
			maxe=fre[i];
			  x=i+'a';
			  //cout<<maxe<<endl;
		}
	}
	cout<<maxe<<endl;
    	cout<<x<<endl;

}
int main() {
	char a[1000];
	cin.getline(a,1000);
	maping(a);

	return 0;
}
