// main.cpp by Bill Weinman <http://bw.org/>

#include <cstdio>
#include <vector>
#include <string>
#include <utility>
#include <iostream>

void message(const std::string& s);

template <typename T>
void swap(T &a, T & b) {

    message("inside the swap function...");

    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

void message(const std::string & s) {
    puts(s.c_str());
    fflush(stdout);
}

void disp_vector(const std::vector<std::string> & v) {
    size_t size = v.size();
    printf("vector size: %ld\n", size);
    if(size) {
        for( std::string s : v ) {
            printf("[%s]", s.c_str());
        }
        puts("");
    }
    fflush(stdout);
}

int main( int argc, char ** argv ) {
    std::vector<std::string> v1 = { "one", "two", "three", "four", "five" };
    std::vector<std::string> v2 = { "six", "seven", "eight", "nine", "ten" };
    
    message("v1");
    disp_vector(v1);
    message("v2");
    disp_vector(v2);

    std::cout << "------------------------" << std::endl;

    ::swap(v1,v2);
    //v2 = std::move(v1);
    
    message("v1");
    disp_vector(v1);
    message("v2");
    disp_vector(v2);


    return 0;
}
