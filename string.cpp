#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s="hello";
cout<<s<<endl;
for(int i=0;i<s.length();i++){
    cout<<s[i]<<" ";
}
cout<<endl;
//2 way of initilize
string s2=s;
cout<<s2<<endl;
string s3=s2;
cout<<s3<<endl;
//4th way
char a[]="hello world";
string s4(a);
cout<<s4<<endl;
// now update the string
s="i am learning the string";
cout<<s<<endl;
//now want find particualr word index
string word="learning";
cout<<"learning word is present at:"<<s.find(word)<<endl;
//now i want to delete particular word
int index=s.find(word);
s.erase(index,word.length()+1);
cout<<s<<endl;
return 0;
}
