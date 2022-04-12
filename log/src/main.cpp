#include "logSingleton.h"
#include <iostream>

int main(void)
{
    std::cout << "main start!" << std::endl;

    std::cout << "main -> get instance 1" << std::endl;
    LogSingleton::GetInstance().hello();

    std::cout << "main -> get instance 2" << std::endl;
    LogSingleton::GetInstance().hello();

    std::cout << "main -> get instance 3" << std::endl;
    LogSingleton::GetInstance().hello();
    
    std::cout << "main -> get instance 4" << std::endl;
    LogSingleton::GetInstance().hello();

    __LOG_PRINT__.hello();

    return 0;
}