#include "logSingleton.h"

LogSingleton::LogSingleton()
{
    std::cout << "new LogSingleton!" << std::endl;
}

LogSingleton::~LogSingleton()
{
    std::cout << "delete LogSingleton!" << std::endl;
}

LogSingleton& LogSingleton::GetInstance()
{
    static LogSingleton instance_;
    return instance_;
}
/*********************************************************/

/* TODO: add log function */
void LogSingleton::hello()
{
    std::cout << "hello!" << std::endl;
}