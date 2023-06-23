#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int i,j,rows;
    cin>>rows;
 for(i=1; i<=rows; i++){//outer for loop
   for(j=1; j<=rows-i; j++){//inner for loop
   cout<<" ";//print space
   }
   for(j=1; j<=rows; j++){//inner for loop
        if(i==1 || i==rows || j==1 || j==rows )
   cout<<"*";//print character after space
    else
   cout<<" ";
    }
 cout<<"\n";//move to next line
}
getch();
    return 0;
}
