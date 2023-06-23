#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5,6,7};

    v.push_back(16);//adding up element in vector
    for(int x:v){
        cout<<x<<",";
    }
    cout<<endl<<endl;
    v.pop_back();
    for(int x:v){
        cout<<x<<",";
    }
    cout<<endl;
    //insert element in vector
    v.insert(v.begin()+4,3,100);
    for(int x:v){
        cout<<x<<",";
    }
    cout<<endl;
    // erase element
    v.erase(v.begin()+2);
    v.erase(v.begin()+2,v.begin()+5);
    v.clear();
    cout<<v.capacity()<<endl;
    for(int x:v){
        cout<<x<<",";
    }
    cout<<endl;
    // empty concept
    if(v.empty()){
        cout<<"vector is empty"<<endl;
    }
    else{
        cout<<"vector is not empty"<<endl;
    }
// reserve concept
    cout<<"reserve"<<endl;

    int n;
    cin>>n;
    vector<int> a;
    a.reserve(1000);
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        a.push_back(no);
        cout<<"changing capacity"<<a.capacity()<<endl;
    }
    cout<<a.capacity()<<endl;
    for(int x:a){
        cout<<x<<",";

    }


return 0;

}
