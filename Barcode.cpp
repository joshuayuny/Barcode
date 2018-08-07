#include<iostream>
using namespace std;
int main()
{
  char y;
  do {
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
  cout << "Enter 11 digits: ";
  cin >> d1;
  cin >> d2;
  cin >> d3;
  cin >> d4;
  cin >> d5;
  cin >> d6;
  cin >> d7;
  cin >> d8;
  cin >> d9;
  cin >> d10;
  cin >> d11;
  cout << "11 digits: " << d1 << " " << d2 << d3 << d4 << d5 << d6 << " " << d7 << d8 << d9 << d10 << d11;
  cout << "\nCheck digit: " << 10-((3*(d1 +d3 +d5 +d7 +d9 +d11)+d2 +d4 +d6 +d8 +d10) % 10);
  cout << "\nDo you wish to continue?(Y/N) ";
  cin >> y;
} while(y == 'y' || y == 'Y' );
  cout << "Have a nice day!";
  cout << endl;
  return 0;
}
