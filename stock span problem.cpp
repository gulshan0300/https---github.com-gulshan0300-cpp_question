#include<iostream>
using namespace std;
#include<stack>

void span_stock(int*price,int*span,int n){
stack<int> s;
s.push(0);
span[0]=1;
for(int i=1;i<n;i++){
    int current_price=price[i];
    while(current_price>=price[s.top() ] and !s.empty()){
        s.pop();
    }
    if(!s.empty()){
        int pre_high=s.top();
        span[i]=i-pre_high;
    }
    else{
        span[i]=i+1;
    }
    s.push(i);
}

}

int main(){
int price[]={100,85,60,70,60,75,85};
int n=sizeof(price)/sizeof(int);
int span[20]={0};

span_stock(price,span,n);

for(int i=0;i<n;i++){
    cout<<span[i]<<" ";
}
return 0;

}
