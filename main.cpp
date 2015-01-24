/* 
 * File:   main.cpp
 * Author: eamorrow
 *
 * Created on January 23, 2015, 7:30 PM
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

/*
 * Project Euler 1
 */
int main(int argc, char** argv) {

    int sum;
    for(int i=0;i<1000;i++)
    { 
        if(i%3 == 0 || i%5 == 0)
        {
            sum += i;
        }
    }
    std::cout<<sum;
    return 0;
}

