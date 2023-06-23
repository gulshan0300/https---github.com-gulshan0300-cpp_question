#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a[]={10,15,20,40,40,40,50};
int n=sizeof(a)/sizeof(int);
int*ans=lower_bound(a,a+n,45 );
int index=ans-a;
cout<< "lower bound found at : "<<index<<endl;
return 0;
}
