#include<iostream>
using namespace std;
#include<cstring>
#include<unordered_map>

class student{
  public:
      string firstname;
      string lastname;
      string rollno;

      student(string f,string l,string no){
        firstname=f;
        lastname=l;
        rollno=no;
      }

      //for comparing rollno of same name
      bool operator==(const student &s)const{
        return rollno==s.rollno?true:false;
      }
};

//creating own hash function

class hashfn{

public:
    size_t operator()(const student &s)const{
    return s.firstname.length()+s.lastname.length();
    }


};

int main(){
    unordered_map<student,int,hashfn> mp;

    student s1("gulshan", "kumar","001");
    student s2("rahul","saxena","23" );
    student s3("suraj","chauhan","43");
    student s4("farhan","khan","20");

    //adding marks to students

    mp[s1]=100;
    mp[s2]=75;
    mp[s3]=88;
    mp[s4]=89;
    for(auto s:mp){
        cout<<s.first.firstname<<" "<<s.first.rollno<<" marks "<<s.second<<endl;
    }

return 0;

}
