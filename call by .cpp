#include<iostream>
using namespace std;

void update(int &x){
x=x+1;

}
int main(){
int x=1;
cout<<x<<endl;
update(x);
cout<<x;
return 0;
}
