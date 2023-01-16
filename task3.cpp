#include<iostream>
using namespace std;
float discount(string day, string month, float amount);

main()
{ string day;
  string month;
  float amount;
 float result;
 cout << "enter your day:";
 cin >> day;
 cout << "enter your month:";
 cin >> month;
 cout << "enter your amount:";
 cin >> amount;
result=discount( day,  month, amount);
 cout << "payable amount after discount is:" << result;
}
float discount(string day, string month, float amount)
{
    float payableamount;
    if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        payableamount= amount - (amount*0.1);
    }
   
    else
    {    
        payableamount=amount;
    }
    return payableamount;
}