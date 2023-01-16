#include<iostream>
using namespace std;
int isgreater(int num1, int num2, int num3);
main()
{
  int num1, num2 ,num3;
  int result;
  cout << "enter num1:";
  cin >> num1;
  cout << "enter num2:";
  cin >> num2;
  cout << "enter num3:";
  cin >> num3;
  result=isgreater( num1,  num2,  num3);
  cout << result << "is greater." ;
}
int isgreater(int num1, int num2, int num3)
{  int greatest;
      if (num1 > num2 && num1 > num3)
   {
       greatest = num1;
   }
    else if (num2 > num1 && num2 > num3)
   {
       greatest = num2;
   }
  else if (num3 > num1 && num3 > num2)
   {
     greatest = num3;
   }
   else 
   {
     greatest = 0;
   }
     return greatest;
}