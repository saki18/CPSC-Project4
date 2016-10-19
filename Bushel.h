/*********************************
 * Bushel header
 * Created by Mark Bowman
 *********************************/

#include <iostream>
using namespace std;

class bushel
{ public:
    bushel();              // Constructor - empty
    bushel(int,int);       // Constructor with counts
    bool get(istream &);   // Input
    void put(ostream &);   // Output
  private:
    int apples;            // Apples in bushel
    int oranges;           // Oranges in bushel 
};
