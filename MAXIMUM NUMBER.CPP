#include<iostream>
#include<climits>//stores limit of integers
using namespace std;

int main(){
int i,n,no;
cin>>n;
int largest=INT_MIN;
i=1;
while(i<=n){
    cin>>no;
    if(largest<no){
        largest=no;
    }
    i=i+1;
}
cout<<"THE LARGEST NO IS :"<<largest;
return 0;
}
