#include<iostream>
using namespace std;
string checktitle(char gender, int age);

main()
{
    char gender;
    int age;
    string result;
    cout << "enter your gender:";
    cin >> gender;
    cout << "enter your age:";
    cin >> age;
  result=checktitle( gender,  age);
  cout << "your title is:" << result;


}
string checktitle(char gender, int age)
{    string output;
    if(gender == 'm' && age >= 16)
    {
       output="Mr.";  
    }
    else if(gender == 'm' && age < 16)
    {
       output="Master" ; 
    }
     else if(gender == 'f' && age >= 16)
    {
       output="Ms.";  
    }
     else if(gender == 'f' && age < 16)
    {
       output="Miss"  ;
    }
    else
    {
        output = "invalid";
    }
    return output;
}