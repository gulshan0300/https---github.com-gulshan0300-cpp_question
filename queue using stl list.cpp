#include<iostream>
using namespace std;
#include<list>
class queue{
list<int> l;
int cs;
public:
    queue(){
    this->cs=0;
    }
   void push(int d){
        l.push_back(d);
        cs++;
   }

   bool isempty(){
   return cs==0;
   }
   void pop(){
   if(!isempty()){
    l.pop_front();
    cs--;
   }
   }
   int front_i(){
   return l.front();
   }
   int size(){
   return cs;
   }

};

int main(){
queue q;
    for(int i=1;i<7;i++){
        q.push(i*i);

    }
    cout<<"size "<<q.size()<<endl;

    while(!q.isempty()){
        cout<<q.front_i()<<" ";
        q.pop();
    }

    return 0;
}

