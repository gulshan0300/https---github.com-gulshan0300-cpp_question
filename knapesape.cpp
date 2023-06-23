#include<iostream>
#include<climits>
using namespace std;
int knapesape(int *wt,int *price,int n,int cap){
if(cap==0|| n==0){
    return 0;
}
int inc=INT_MIN, exc=INT_MIN;
if(cap>=wt[n-1]){
    inc=price[n-1]+knapesape(wt,price,n-1,cap-wt[n-1]);
}
exc=0+knapesape(wt,price,n-1,cap);
return max(inc,exc);
}
int main(){
int wt[]={1,2,3,5};
int price[]={20,50,60,100};
cout<<knapesape(wt,price,4,6);
return 0;
}
