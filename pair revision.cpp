#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n=4;
pair<string,int> p[n];
for(int i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<p[i].first<<p[i].second<<endl;
}
return 0;
}
