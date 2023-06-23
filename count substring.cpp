#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char a[]){
 int i=0;
 int j=strlen(a)-1;
while(i<j){
    if(a[i]!=a[j]){
        return false;
    }
    i++;
    j--;
}
return true;
}
auto subarray(char a[],int i,int j){
for(i=0;i<strlen(a);i++){
    for(j=i;j<strlen(a);j++){
        for(int k=i;k<=j;k++){
            cout<<a[k];
        }
        cout<<endl;
    }
}
}
int main(){
char a[1000];
int ans=0,i,j,k;
cin.getline(a,1000);
char ar[1000];
for( i=0;i<strlen(a);i++){

    for( j=i;j<strlen(a);j++){

            for( k=i;k<=j;k++){

                ar[k]=subarray(a,i,j);
                cout<<ar[k];
                if(ispalindrome(ar)==true){
                    ans++;
                }
            }
           // ar[j]=a[k];
            //cout<<ar[k];
        cout<<endl;
    }
    //cout<<endl;
}
cout<<ans<<endl;
return 0;
}

