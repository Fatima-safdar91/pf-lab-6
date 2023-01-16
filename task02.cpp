#include<iostream>
using namespace std;
bool greaternumber(int num1, int num2, int num3);

main()
{
    
    int num1, num2, num3;
    int result;
    cout << "enter number 1:";
    cin >> num1;
    cout << "enter number 2:";
    cin >> num2; 
    cout << "enter number 3:";
    cin >> num3;
    result = greaternumber(num1,  num2,  num3);
    cout << result;
}


bool greaternumber(int num1, int num2, int num3)
{
    if(num1 == num2 && num2 == num3 && num1 == num3)
    {
           return true; 
    }
   else
   {
      return false;
   }

}
