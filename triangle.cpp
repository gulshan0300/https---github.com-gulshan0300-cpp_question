#include <iostream>

using namespace std;

int main ()
{
  int num1 = 0, num2 = 1, totalElements, nextNum;
  cin>>totalElements;
  num1 = 0;
  num2 = 1;
      cout << "***************** Fibonacci triangle *************" << endl;
      cout<< " "<<num1<<endl;

  for (int i = 2; i <= totalElements; i++)
    {

      for (int j = 1; j <= i; j++)
  {
    nextNum = num1 + num2;
    cout << " " << num2;
    num1 = num2;
    num2 = nextNum;
  }
  cout << endl;
    }
    return 0;
}
