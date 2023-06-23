#include<iostream>
using namespace std;
class hero{
    public:
int level;
static int time;
};
int hero::time=10;

int main(){
cout<<hero::time<<endl;
return 0;
}
