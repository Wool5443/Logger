#pragma once

#include <stdio.h>
#include "Utils.hpp"

class Logger
{
private:
    FILE* logFile;
    Logger() = delete;
    Logger(const Logger& other) = delete;
    Logger(Logger&& other) = delete;

    Logger& operator=(const Logger& other) = delete;
    Logger& operator=(Logger&& other) = delete;
public:
    Logger(const char* logFile) noexcept;
    ~Logger() noexcept;

    void Log(Error& error);
};
