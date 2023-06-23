#include<iostream>
using namespace std;
int main(){
char a[100]= "ababcz";
int freq[26]={0};
//fill freq array
for(int i=0;a[i]!='\0';i++){
    char ch=a[i];
    int index=ch-'a';
    freq[index]++;
}
cout<<endl;
/*for(int i=0;i<26;i++){
    cout<<freq[i]<<"    ";
}
cout<<endl;*/
for(int i=0;i<26;i++){
    char x=i+ 'a';
    if(freq[i]>0){
    cout<<" character: "<<x<<" --> "<<freq[i]<<endl;

}
}
cout<<endl;
return 0;
}
