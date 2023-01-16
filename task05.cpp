#include<iostream>
using namespace std;
float totalincome(string screen, int rows, int columns);

main()
{
     string screen;
     int rows;
     int columns;
     float result;
     cout << "enter your screen:";
     cin >> screen;
     cout << "enter the rows:";
     cin >> rows;
     cout << "enter the columns:";
     cin >> columns;
     result=totalincome( screen,  rows,  columns);
     cout << "total income price is   " << result;


}

float totalincome(string screen, int rows, int columns)
{    
     float totalincomeprice;

    if (screen == "premiere")
    {
  totalincomeprice=12*rows*columns;
    }
    else if (screen == "normal" )
    {
  totalincomeprice=7.5*rows*columns;
    }
    else if (screen == "discount" )
    {
  totalincomeprice=5*rows*columns;
    }
    return totalincomeprice;
}

