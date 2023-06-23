#include<iostream>
using namespace std;
#include<stack>

bool isvalid(char*s){
stack<char> st;
for(int i=0;s[i]!='\0';i++){
    char ch=s[i];
    if(ch=='('){
        st.push(ch);
       }
       else if(ch==')'){
        if(st.empty() or st.top()!='('){
            return false;
        }
        st.pop();
       }
}
return st.empty();
}

int main(){
char s[100]="((a+d))-(((a+g)*a)/e)";

if(isvalid(s)){
    cout<<"valid";
}
else{
    cout<<"not valid";
}
return 0;

}
