#include<iostream>
using namespace std;

void printprime(int n){
int no,i;
for(no=2;no<= n;no++){
    for(i=2;i<no;i++){
        if(no%i==0){
            break;
        }

        }
        if(i==no){
           cout<<no<<endl;
    }
}
}
int main(){
int n;
cin>>n;
printprime(n);
cout<<endl;
return 0;
}
