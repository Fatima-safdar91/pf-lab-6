#include<iostream>
using namespace std;
float footballtickets(float budget,string category, int person );

main()
{
   float budget;
   int  person;
   string category;
   cout << "Enter your budget-real number within the range[1000.00...1000000.00]= ";
   cin >> budget;
   cout << "Enter the category-VIP or NORMAL=";
   cin >> category;
   cout << "Enter the number of peoples in the group-an integer within the range[1...200]= ";
   cin >> person;
   float remaining = footballtickets( budget, category,  person );
   
   if(remaining < 0)
   {  
       remaining=remaining*(-1);
    cout << "not enough money! You need " << remaining << "QR";
   }
    else
   {
    cout << "Yes you have " << remaining << "left";
   }
   }

float footballtickets(float budget,string category, int person )
{    
     float remainingvalue;
     float remainingbudget;
     float remainingpercentage;
     float travelcost;
   
   if(person >=1 && person <=4  )
   {
      if(category == "NORMAL")
       {
         travelcost=(75*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*249.99);
       }
  
      if(category == "VIP" )
      {
         travelcost=(75*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*499.99);
        
      }
   } 
  else if (person >=5 && person <=9 )
   {
       if(category == "NORMAL")
       {
        travelcost=(60*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*249.99);
       }
  
      if(category == "VIP" )
      {
         travelcost=(60*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*499.99);
       
      }
   }
else if (person >=10 && person <=24 )
   {
       if(category == "NORMAL")
     {
        travelcost=(50*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*249.99); 
     }
  
         if(category == "VIP" )
      {
       travelcost=(50*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*499.99); 
        
      }
   
   
   }
   else if (person >=25 && person <=49 )
   {
       if(category == "NORMAL")
       {
        travelcost=(40*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*249.99);
       }
  
      if(category == "VIP" )
      {
         
         travelcost=(40*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*499.99);
      }
   }
    else if (person >=50 )
   {
       if(category == "NORMAL")
       {
         travelcost=(25*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*249.99);
       }
  
      if(category == "VIP" )
      {
        travelcost=(25*budget)/100;
         remainingbudget=budget-travelcost;
         remainingpercentage=remainingbudget-(person*499.99);
        
      }
   }
     return remainingpercentage;
}  