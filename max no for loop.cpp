#include<iostream>
#include<climits>
using namespace std;

int main(){
int i,n,no;
cin>>n;
int largest=INT_MIN;
for(i=1;i<=n;i=i+1){
    cin>>no;
    if(largest<no){
        largest=no;
    }
}
cout<<"The Largest no is:"<<largest;
return 0;

}
