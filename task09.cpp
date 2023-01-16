#include<iostream>
using namespace std;
float volleyball(string year, int holidays, int weekends);

main()
{
    string year;
    int weekends;
    int holidays;
    float output;
    cout << "Enter your year ((leap or normal) = ";
    cin >> year;
    cout << "Enter no of holidays in the year = ";
    cin >> holidays;
    cout << "Enter number of weekends = ";
    cin >> weekends;

    output=volleyball(year,weekends,holidays);
    cout << "VILADAMIR has played throughout the year:" << output;
}

float volleyball(string year, int holidays, int weekends)
{
    float playingvolleyball;
    float notplaying;
     notplaying=(3*48)/4;
    playingvolleyball=notplaying+(2*(holidays)/3);

  if( year == "normal")
  {
    
    return playingvolleyball;
    
  }
  else if( year == "leap")
   {
    
    playingvolleyball=(playingvolleyball*0.15)+playingvolleyball;
    return playingvolleyball;

   }
    return 0;
    
}
