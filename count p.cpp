#include <iostream>
#include<string>
using namespace std;

bool isPalindromic(string s, int i, int j)
{
    if (i > j)
        return 1;

    if (s[i] != s[j])
        return  0;

   // return isPalindromic(s, i + 1, j - 1);
}

int main() {
    string str;
    cin>>str;

    int count =0;

    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            if(isPalindromic(str,i,j)){
                count++;
            }
        }
    }
    cout<<count;
}
