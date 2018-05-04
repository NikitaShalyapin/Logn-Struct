#include <iostream>
#include "detail_logn_struct.h"

using detail::logn_struct;
using detail::logn_struct_iterator;
using detail::logn_struct_const_iterator;

int main() {

    logn_struct<int> logn_struct_a;
    for(int j = 0; j < 10; j++)
        logn_struct_a.push_back(j);

    logn_struct_a.push_back(55);
    for (logn_struct<int>::iterator j = logn_struct_a.begin(); j!=logn_struct_a.end(); j++)
        std::cout << *j << std::endl;
    std::cout << std::endl;


    logn_struct_a.insert(logn_struct_a.begin() + 5,99);
    for (logn_struct<int>::iterator j = logn_struct_a.begin(); j!=logn_struct_a.end(); j++)
        std::cout << *j << std::endl;
    std::cout << std::endl;

    std::cout << logn_struct_a.at(5) << std::endl;
    std::cout << std::endl;

    logn_struct_a.remove(logn_struct_a.begin());
    for (logn_struct<int>::iterator j = logn_struct_a.begin(); j!=logn_struct_a.end(); j++)
        std::cout << *j << std::endl;
    std::cout << std::endl;


    logn_struct_a.set(logn_struct_a.begin(), 111);
    for (logn_struct<int>::iterator k = logn_struct_a.begin(); k!=logn_struct_a.end(); k++)
        std::cout << *k << std::endl;
    std::cout << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}