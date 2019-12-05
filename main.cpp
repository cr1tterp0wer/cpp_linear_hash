#include<iostream>
#include"Hash.h"
#include<ctime>

//
// CHRISTOPHER APODACA
// SIMPLE HASH implementation
//   tests th_linear. number of insertions: linear + quadratic
//

using std::cout;
using std::endl;

const int NUM_INSERTIONS = 20;
const int HASH_SIZE = 31;

int main(){

  srand( time(0) );
  Hash<int> h_linear( HASH_SIZE );
  Hash<int> h_quadratic( HASH_SIZE );

  cout << "****************************" << endl;
  cout << "****************************" << endl;
  cout << "  LINEAR INSERTIONS BEGIN:" << endl<< endl;

  for( int i = 0; i < NUM_INSERTIONS; i++ ){
    h_linear.insert_linear( (int)(rand() % 100) );
  }
  cout << endl;

  cout << "****************************" << endl;
  cout << "****************************" << endl;
  cout << "QUARDRATIC INSERTIONS BEGIN:" << endl;


  for( int i = 0; i < NUM_INSERTIONS; i++ ){
    h_quadratic.insert_quadratic( (int)(rand() % 100) );
  }

  cout << "****************************" << endl;
  cout << "****************************" << endl;
  cout << "Number of Collissions for 20 LINEAR Insertions: "
    << h_linear.getTotalCollisions() << endl;
  h_linear.printHash();

  cout << "****************************" << endl;
  cout << "****************************" << endl;
  cout << "Number of Collissions for 20 QUADRATIC Insertions: "
    << h_quadratic.getTotalCollisions() << endl;
  h_quadratic.printHash();



  return 0;
}
