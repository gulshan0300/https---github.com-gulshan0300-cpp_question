#include<iostream>
#include<climits>// to get the least value form bucket
using namespace std;

int main(){
int i=1;
int n;
cin>>n;
int largest=INT_MIN; //FOR LEAST VALUE INT_MIN==-2^31,INT_MAX==2^31
int no;
while(i<=n){
    cin>>no;
    if(largest<no){
        largest=no;
    }
    i=i+1;
}
cout<<"LARGEST NO: "<<largest;
cout<<endl;
return 0;

}
