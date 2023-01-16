#include<iostream>
using namespace std;
string checkspeed(float speed);

main()
{
    
    int speed;
    string result;
    cout << "enter your speed:";
    cin >> speed;
    
  result=checkspeed(speed);
  cout  << result;


}
string checkspeed(float speed)
{    string output;
    if(speed <= 10)
    {
       output="slow";  
    }
    else if(speed > 10 && speed < 50)
    {
       output="Average" ; 
    }
     else if(speed >= 50 && speed < 150)
    {
       output="fast";  
    }
     else if(speed >= 150 && speed < 1000)
    {
       output="ultra fast"  ;
    }
    else
    {
        output = "invalid";
    }
    return output;
}