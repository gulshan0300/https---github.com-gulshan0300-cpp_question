#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=0;
for(int i=0;i<n;i++){
    ans^=a[i];
}
int result=ans;
int pos=0;
while(ans>0){
    if((ans&1)==1 ){

        break;
    }
    pos++;
    ans=ans>>1;
}
int x= (1<<pos);
int uniq1=0;
for(int i=0;i<n;i++){
    if((a[i]&x)==0 ){
        uniq1=uniq1^a[i];
    }
}
int uniq2=result^uniq1;
cout<<uniq1<<" "<<uniq2<<endl;
return 0;
}
