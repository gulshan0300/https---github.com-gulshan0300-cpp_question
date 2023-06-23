#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void copy(char largest[100],char a[100]){
for(int i=0;i<=strlen(a);i++){
    largest[i]=a[i];
}
}
int main(){
char a[100];
int n;
int len=0;
char largest[100];
cin>>n;
cin.get();
for(int i=0;i<n;i++){
    cin.getline(a,100);
    for(int j=0;j<strlen(a);j++){
        if(len<strlen(a)){
            len=strlen(a);
            copy(largest,a);
        }
    }

}
cout<<largest<<endl;
return 0;
}
