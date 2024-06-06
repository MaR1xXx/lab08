#include <iostream>

#include "formatter_ex.h"

int main()
{
    std::ofstream out;
    out.open("log.txt");
    out << "hello, world!" << std::endl;
    out.close();
}
