#include<iostream>
using namespace std;
#include<queue>//this header file include both queue and priority queue



int main(){
    priority_queue<int> pq;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        pq.push(no);

    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
