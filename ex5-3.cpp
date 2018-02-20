#include <iostream>
using namespace std;

int main()
{
  unsigned short UShortValue = 65535;
  cout << "Incrementing unsigned short " << UShortValue << " gives: ";
  cout << ++UShortValue << endl;

  short SShortValue = 32767;
  cout << "Incrementing signed short " << SShortValue << " gives: ";
  cout << ++SShortValue << endl;
}
