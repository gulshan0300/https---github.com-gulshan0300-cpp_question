#include<iostream>
using namespace std;
int main(){
 float N1,N2,ans=0;
char ch;
    cin>>ch;
    cin>>N1;
    cin>>N2;

    if(N1,N2>=0||N1,N2<=1000000000){
       switch(ch){
       case '+':
           cout<<N1+N2;
           break;
       case '-':
        cout<<N1-N2;
        break;
       case '*':
        cout<<N1*N2;
        break;
       case '/':
           if(N2!=0);
        cout<<N1/N2;
        break;

       default:
        cout<<"invalid input";
       }
    }


return 0;
}
