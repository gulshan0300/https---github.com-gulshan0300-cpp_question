#include<iostream>
using namespace std;
void update(int *x){
*x=*x+1;
cout<<"inside function "<<*x<<endl;
}
int main(){
int x=10;
update(&x);
cout<<"inside main " << x<<endl;
return 0;
}
