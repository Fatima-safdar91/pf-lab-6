#include<oiostream>
using namespace std;

main()
{
    int price;
    string brand;
  cout << "enter your dress price:";
  cin >> price;
 
 if (price <= 1500)
  {
    cout << "buy the dress!" << endl;
  }
   if (price > 1500)
  {
    cout << " do not buy the dress!" << endl;
  }
}