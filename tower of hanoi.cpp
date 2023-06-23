#include<iostream>
using namespace std;
void tower(int n,char a,char b,char c){
if(n==1){
    cout<<"move 1st disc from "<< a << " to "<< c <<endl;
    return ;
}
tower(n-1,a,c,b);
cout<<"move " <<n<< " disc from "<< a<< " to "<< c <<endl;
tower(n-1,b,a,c);
}
int main(){
int n;
cin>>n;
char a='a';
char b='b';
char c='c';
tower(n,a,b,c);
return 0;
}
