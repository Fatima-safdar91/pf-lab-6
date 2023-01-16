#include<iostream>
using namespace std;
float checkcost(string city, string product, int quantity);

main()
{ 
     string city;
     string product;
     int quantity;
     float result;
      cout << "enter your city:";
      cin >> city;
      cout << "enter your product:";
      cin >> product;
      cout << "enter your quantity:";
      cin >> quantity;
     result = checkcost( city,  product,  quantity);
     cout << result;
}

float checkcost(string city, string product, int quantity)
{  float output;
    if(city == "sofia")
    {
         if(product == "coffee")
      {
        output = 0.50*quantity;
      }
         if(product == "water")
       {
        output = 0.80*quantity;
       }
         if(product == "beer")
       {
        output = 1.20*quantity;
       } if(product == "sweets")
       {
        output = 1.45*quantity;
       } if(product == "peanuts")
       {
        output = 1.60*quantity;
       }
    }
    else if(city == "plovdlv")
    {
        if(product == "coffee")
      {
        output = 0.40*quantity;
      }
         if(product == "water")
       {
        output = 0.70*quantity;
       }
         if(product == "beer")
       {
        output = 1.15*quantity;
       }
        if(product == "sweets")
       {
        output = 1.30*quantity;
       } 
       if(product == "peanuts")
       {
        output = 1.50*quantity;
       }
    }
    else if (city == "varna")
    {
         if(product == "coffee")
      {
        output = 0.45*quantity;
      }
         if(product == "water")
       {
        output = 0.70*quantity;
       }
         if(product == "beer")
       {
        output = 1.10*quantity;
       }
        if(product == "sweets")
       {
        output = 1.35*quantity;
       } 
       if(product == "peanuts")
       {
        output = 1.55*quantity;
       } 


    }
    return output;
}