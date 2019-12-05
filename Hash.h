#pragma once

template<typename T>
class Hash{

  private:
    T* data;
    int size;
    int capacity;
    int hash( int value ) const;
    int total_collisions = 0;

  public:
    Hash();
    Hash( int capacity );
    void insert_linear( T data );
    void insert_quadratic( T data );
    bool isFull() const;
    void printHash() const;
    int getTotalCollisions() const;
};

#include "Hash.cpp"
