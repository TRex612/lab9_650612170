#include <iostream>
#include <string>
using namespace std;


int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  string x,y,z,i,j;
    x = "You have received Super Ultra Rare Unit!!!\n";
    y ="You have received 5 gems.\n";
    z = "You have received 1 gems.\n";
    i = "You have received 2000 coins.\n";
    j = "You have received very KAK items.\n";

  if (rank == 'S'  )
  {
    cout << x<<y<<z<<i<<j;
  }
  else if (rank == 'A' )
  {
    cout << y<<z<<i<<j;
  }
  else if (rank == 'B' )
  {
    cout << z<<i<<j;
  }
  else if (rank == 'C' )
  {
    cout <<i<<j;
  }
  else if (rank == 'D')
  {
    cout << j;
  }
  
}
