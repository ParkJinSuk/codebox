#include "logSingleton.h"
#include <iostream>

int main(void)
{
    std::cout << "main start!" << std::endl;

    std::cout << "main -> get instance 1" << std::endl;
    LogSingleton::GetInstance().hello();

    return 0;
}