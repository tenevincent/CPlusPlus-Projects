// hashInfo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <unordered_set>

void getInfo(const std::unordered_set<int>& hash){

  std::cout << "hash.bucket_count(): " << hash.bucket_count() << std::endl;
  std::cout << "hash.load_factor(): " << hash.load_factor() << std::endl;

}

void fillHash(std::unordered_set<int>& h, int n){

  std::random_device seed;
  // default generator
  std::mt19937 engine(seed());
  // get random numbers 0 - 1000
  std::uniform_int_distribution<> uniformDist(0, 1000);

  for ( int i=1; i<= n; ++i){
    h.insert(uniformDist(engine));
  }

}

int main(){

  std::cout << std::endl;

  std::unordered_set<int> hash;
  std::cout << "hash.max_load_factor(): " << hash.max_load_factor() << std::endl;

  std::cout << std::endl;

  getInfo(hash);

  std::cout << std::endl;

  // only to be sure
  hash.insert(500);
  // get the bucket of 500
  std::cout << "hash.bucket(500): " << hash.bucket(500) << std::endl;

  std::cout << std::endl;

  // add 100 elements
  fillHash(hash, 100);
  getInfo(hash);

  std::cout << std::endl;

  // at least 500 buckets
  std::cout << "hash.rehash(500): " << std::endl;
  hash.rehash(500);

  std::cout << std::endl;

  getInfo(hash);

  std::cout << std::endl;

  // get the bucket of 500
  std::cout << "hash.bucket(500): " << hash.bucket(500) << std::endl;

  std::cout << std::endl;

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
