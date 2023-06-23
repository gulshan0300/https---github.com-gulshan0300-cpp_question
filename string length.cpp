#include<iostream>
#include<cstring>
using namespace std;
int lengt(char a[100]){
    int i,count=0;
for( i=0 ; a[i]!= '\0' ; i++){
     count++;
}
cout<<count<<endl;
return count;
}
int main(){
char a[100];
cin.getline(a , 100);
int ans=lengt(a);
//cout<<strlen(a)<<endl;;
cout<<ans<<endl;
return 0;
}
