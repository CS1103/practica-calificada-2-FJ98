#include <iostream>
#include "Fight.h"
#include "Arena.h"
#include <cassert>
int main() {
    std::cout << "Hello, World!" << std::endl;
    const std::string LINK = "pelea.txt";
    Arena a1;
    a1.load_fights(LINK);

    a1.run_all();

    //std::cout<<a1.get_fights()<<std::endl;
    return 0;
}