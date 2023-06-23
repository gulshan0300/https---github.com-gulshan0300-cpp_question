#include<iostream>
using namespace std;

void game(int n,int x){
int i,M,N,a=0,h=0;

for(i=1;a<=M&&h<=N;i++){

   a=a+2*i-1;
   h=h+2*i;


}

    if(a>h){
        cout<<"ayush"<<endl;
    }
    else if(h>a){
        cout<<"harshit"<<endl;
    }

}
int main(){
int i,n,M,N;
cin>>n;
for(i=1;i<=n;i++){
    cin>>M; cout<<"\t"; cin>>N;

game(M,N);
}

return 0;

}
