#include<iostream>
#include<cstring>
using namespace std;
//class implementation of hashtable


class node{
public:
    string key;
    int value;
    node*next;

    node(string key,int val){
    this->key=key;
    this->value=val;
    next=NULL;
    }
    ~node(){
    if(next!=NULL){
        delete next;
    }
    }
};

class hashtable{

    node**table;
    int table_size;
    int current_size;
    //hash function
 int hashfun(string key){
    int idx=0;
    int p=1;
    for(int i=0;i<key.length();i++){
        idx=idx+(key[i]*p)%table_size;
        idx=idx%table_size;
        p=(p*27)%table_size;
    }
    return idx;
    }

 void rehash(){
    node**oldtable=table;
    int oldtablesize=table_size;
    table_size=2*table_size;
    table=new node*[table_size];
    //now putting null to all bucket of new table
    for(int i=0;i<table_size;i++){
        table[i]=NULL;
    }
    current_size=0;
    //now copy all the values to new table from old table

    for(int j=0;j<oldtablesize;j++){
        node*temp=oldtable[j];
        while(temp!=NULL){
            insertfun(temp->key,temp->value);
            temp=temp->next;
        }
        if(oldtable[j]!=NULL){
            delete oldtable[j];
        }
    }
    delete [] oldtable;
 }

public:

 hashtable(int table_size=7){
       this-> table_size=table_size;
      table=new node*[table_size];
      current_size=0;
      for(int i=0;i<table_size;i++){
        table[i]=NULL;
      }
    }

 void insertfun(string key,int value){
        int idx=hashfun(key);
        node*n=new node(key,value);
        n->next=table[idx];
        table[idx]=n;
        current_size++;

        float load_factor=current_size/(1.0*table_size);

        if(load_factor>0.7){
            rehash();
        }

    }
 void print(){
    for(int i=0;i<table_size;i++){
        cout<<"row of table "<<i<<" ";
        node*temp=table[i];
        while(temp!=NULL){
            cout<<temp->key<<":"<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    return ;
 }

 node* searchkey(string key){
    int idx=hashfun(key);
    node*temp=table[idx];
    while(temp!=NULL){
        if(temp->key==key){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
 }

 int& operator[](string key){
 node*temp=searchkey(key);
 if(temp==NULL){
    int garbage;
    insertfun(key,garbage);
    temp=searchkey(key);
 }
 return temp->value;
 }

 void erasekey( string key){
    node*key_delete=searchkey(key);

    int idx=hashfun(key);
    if(key_delete!=NULL){
        node*temp=table[idx];
        if(temp->key == key_delete->key){
            node*pre=NULL;
            if(temp->next!=NULL){

            pre=temp->next;
            temp->next=NULL;
            }
            table[idx]=pre;
            delete key_delete;
            return ;

        }

        while(temp->next!=key_delete){
            temp=temp->next;
        }
        temp->next=key_delete->next;
        key_delete->next=NULL;
        delete key_delete;
    }
    else{
        return ;
    }

 }

};
