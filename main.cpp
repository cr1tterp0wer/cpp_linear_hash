#include<iostream>
#include"Hash.h"
#include<ctime>

//
// CHRISTOPHER APODACA
// SIMPLE HASH implementation
//   tests the number of insertions: linear + quadratic
//

using std::cout;
using std::endl;

const int NUM_INSERTIONS = 20;

int main(){

  srand( time(0) );
  Hash<int> h(31);

  for( int i = 0; i < NUM_INSERTIONS; i++ ){
    h.insert_linear( (int)(rand() % 100) );
  }

  cout << "****************************" << endl;
  cout << "****************************" << endl;
  cout << "Number of Collissions for 20 LINEAR Insertions: "
    << h.getTotalCollisions() << endl;
  h.printHash();
  return 0;
}
