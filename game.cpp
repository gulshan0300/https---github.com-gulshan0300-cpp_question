#include<iostream>
using namespace std;

int main(){
int i,M,N,a=1,h=0;
cin>>M>>N;

for(i=1;a<=M&&h<=N;i++){

   a=a+2;
   h=h+2;


}

    if(a>h){
        cout<<"ayush"<<endl;
    }
    else if(h>a){
        cout<<"harshit"<<endl;
    }
return 0;
}
