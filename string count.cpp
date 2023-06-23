#include<iostream>
#include<cstring>
using namespace std;
int main(){
char a[1000];
cin.getline(a,1000);
int i=0,j=1;
int ans=1;
while(j<=strlen(a)){
    if(a[i]==a[j]){
        ans++;
    }
    else{
        if(ans>1){
            cout<<a[i]<<ans;
            ans=1;
        }

        else{
            cout<<a[i];
            ans=1;
        }
    }
    i++;
    j++;

}
return 0;
}
