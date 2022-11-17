#include <iostream>
using namespace std;


class Distance {
   private:
   int feet;
   int inches; 
   public:

   Distance() {
      feet = 0;
      inches = 0;
   }
   Distance(int x, int y) {
      feet = x;
      inches = y;
   }
   friend ostream  &operator<<( ostream &output, Distance &D ) {
      
      output << "F : " << D.feet << " I : " << D.inches;
      
   }
   friend istream &operator>>( istream &input, Distance &D ) {
      input >> D.feet >> D.inches;
      
   }
};
int main() {
   Distance D1(1, 2), D3;
   cout << "Enter the value of  : " << endl;
   cin >> D3;
   cout << "First  : " << D1 << endl;
   cout << "Third  :" << D3 << endl;
}
