#include<iostream>
using namespace std;
void printdec(int n){
if(n==0){
    return ;
}

printdec(n-1);
cout<<n<<" ";

}
int main(){
    int n;
    cin>>n;
    printdec(n);
return 0;
}
