#ifndef LOG_PROCESSOR_H
#define LOG_PROCESSOR_H

#include <bits/stdc++.h>
using namespace std;

enum class LogLevel
{
    INFO,
    DEBUG,
    ERROR
};

class LogProcessor
{
public:
    LogProcessor(LogProcessor *nextLogProcessor = nullptr);
    virtual void log(LogLevel logLevel, string message);

protected:
    LogProcessor *nextLogProcessor;
};

#endif
