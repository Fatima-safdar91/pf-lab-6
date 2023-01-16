#include<iostream>
using namespace std;
float lowestprice(int distance, string time);
 main()
 {
   int distance;
   string time;
   float output;
   cout << "enter your distance :";
   cin >> distance;
   cout << "enter day or night:";
   cin >> time;
  output = lowestprice( distance, time );
  cout << output;

 }
float lowestprice(int distance, string time)
{   float output;
 if(distance < 20 && time == "day" )
   {
        output = distance*0.79+0.70;
   }
 else if(distance < 20 && time == "night" )
   {
        output = distance*0.90+0.70;
   }
else if ((distance >= 20 && distance < 99) && (time == "day" || time == "night"))
   {
       output = distance*0.09;
   }
else if (distance >= 100 && time == "day" || time == "night")
   {
       output = distance*0.06;
   }
else 
   {
        output = 0;
   }
       return output;
}

