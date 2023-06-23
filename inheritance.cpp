#include<iostream>
using namespace std;
class Human{
    public:
    int age;
   // private:
    int height;
    public:
        int get(){
        return this->age;
        }
        void setheight(int x){
        this->height=x;
        }


};
class male:private Human{
  public:
      string colour;
      void sleep(){
      cout<<"gulshan sleeping"<<endl;
      }
      int get(){
      return this->age;
      }
};
int main(){
   male m1;
   cout<<m1.get()<<endl;







    /*
male rohan;
//cout<< "sab badiya hai"<<endl;
cout<<rohan.age<<endl;
rohan.sleep();
rohan.setheight(20);
cout<<rohan.height<<endl;*/
return 0;
}
