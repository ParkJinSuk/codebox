#pragma once

#include <iostream>
// #define EB_LOG LogSingleton::GetInstance()

class LogSingleton
{
private:
    LogSingleton();
    LogSingleton(const LogSingleton &ref);
    LogSingleton &operator=(const LogSingleton &ref);
    ~LogSingleton();

public:
    static LogSingleton& GetInstance();


public:/* TODO: add log function */
    void hello();
};
