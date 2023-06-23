#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
//public:
 class car{
    public:
string car_name;
int x;
int y;
car(string car_name,int x,int y){
   this->car_name=car_name;
   this->x=x;
   this->y=y;
}
int dis(){
return x*x + y*y;
}

};

bool compare(car a,car b){
int da=a.dis();
int db =b.dis();
if(da==db){
    return a.car_name.length() < b.car_name.length();

}
return da< db;
}

int main(){
    int n;
    cin>>n;
    vector<car> v;
    for(int i=0;i<n;i++){
        string name;
        int x,y;
        cin>>name>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);

    }
    sort(v.begin(),v.end(),compare);
    for(auto c: v){
        cout<<"car "<<c.car_name<<" distance "<<c.dis()<<" location "<<c.x<<","<<c.y<<endl;
    }
return 0;
}
