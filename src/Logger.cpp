#include "Logger.hpp"

Logger::Logger(const char* logFile) noexcept : logFile(fopen(logFile, "w")) {}

Logger::~Logger() noexcept
{
    if (logFile)
        fclose(logFile);
}

void Logger::Log(Error& error)
{
    if (error)
        error.Print(logFile);
}
