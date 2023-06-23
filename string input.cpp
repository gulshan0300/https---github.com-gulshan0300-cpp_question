#include<iostream>
using namespace std;
int main(){
//string s1;
//getline(cin,s1, '@' );
//cout<<s1<<endl;
string s1="hello";
string s2="hello";
if(s1<s2){//according to dictinory.
    cout<< "s1 is smaller than s2"<<endl;

}
else{
    cout<< "s2 is smaller than s1"<<endl;
}
cout<<s1.compare(s2)<<endl;//if s1==s2 -->0,>0,<0
return 0;
}
