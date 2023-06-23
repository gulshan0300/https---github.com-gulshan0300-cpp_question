#include<iostream>
using namespace std;
#include<set>

int main(){
int arr[]={1,2,3,4,5,6,1,2,4,5,3,2};
int n=sizeof(arr)/sizeof(int);
set<int> s;

for(int i=0;i<n;i++){
    s.insert(arr[i]);

}
cout<<endl;
for(auto i=s.begin();i!=s.end();i++){
    cout<<(*i)<<",";

}
cout<<endl;
return 0;

}
