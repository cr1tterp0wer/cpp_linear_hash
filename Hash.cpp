#include "Hash.h"

template<typename T>
Hash<T>::Hash(){
  this->capacity = 20;
  this->size = 0;
  data = new T[this->capacity];
}

template<typename T>
Hash<T>::Hash( int capacity ){
  this->capacity = capacity;
  this->size = 0;
  data = new T[this->capacity];
}

template<typename T>
void Hash<T>::insert_linear( T value ){

  int index = this->hash( (int)value );

  while( !this->isFull() ){
    if( index > capacity-1 ){
      index = 0;
    }
    else if( this->data[index] != NULL){
      total_collisions++;
      index++;
    }else{
      std::cout << "INSERTING: " <<
        value << ", INDEX: " <<
        index << std::endl;
      data[index] = value;
      break;
    }
  }
}

template<typename T>
int Hash<T>::hash( int value ) const{
  return ( value % this->capacity );
}

template<typename T>
bool Hash<T>::isFull() const{
  return ( capacity == size );
}

template<typename T>
void Hash<T>::printHash() const{
  for( int i = 0; i < this->capacity ; i++ ){
    std::cout << data[i] << " ";
  }
  std::cout << std::endl;
}

template<typename T>
int Hash<T>::getTotalCollisions() const{
  return total_collisions;
}

