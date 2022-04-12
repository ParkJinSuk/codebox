#pragma once

#include <iostream>

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

#define __LOG_PRINT__ LogSingleton::GetInstance()