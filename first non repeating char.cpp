#include<iostream>
//#include<queue>
using namespace std;
template<typename t>
class queue{
    t*arr;
    int cs,ms;
    int f,r;
public:
    queue(int s){
    arr=new t[s];
    ms=s;
    cs=0;
    f=0;
    r=0;
    }
    void push(t d){
    if(cs!=ms){
        arr[r]=d;
        r++;
        cs++;
    }
    }
    void pop(){
    if(cs!=0){
        f++;
        cs--;
    }
    }
    t front(){
    return arr[f];
    }
    bool empty(){
    return cs==0;
    }
};



int main(){
queue<char> q(100);
int fre[27]={0};
char ch;
cin>>ch;
while(ch!='.'){
    //map frequency and push in queue
    q.push(ch);
    fre[ch-'a']++;
    // query check in queue
    while(!q.empty()){
        int index=q.front()-'a';
        if(fre[index]>1){
            q.pop();
        }
        else{
            cout<<q.front()<<endl;
            break;
        }

        }
        if(q.empty()){
            cout<<"-1"<<endl;
        }

    cin>>ch;
}
return 0;
}
