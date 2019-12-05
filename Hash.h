#pragma once

template<typename T>
class Hash{

  private:
    T* data;
    int size;
    int capacity;
    int hash( int value ) const;
    int hash_quadratic( int value, int probe ) const;
    int total_collisions = 0;
    int probe = 0;

  public:
    Hash();
    Hash( int capacity );
    void insert_linear( T data );
    void insert_quadratic( T data );
    bool isFull() const;
    void printHash() const;
    int getTotalCollisions() const;
    int getProbe() const { return this->probe; }
};

#include "Hash.cpp"
