#ifndef ERROR_LOG_PROCESS_H
#define ERROR_LOG_PROCESS_H

#include "LogProcessor.h"

class ErrorLogProcess : public LogProcessor
{
public:
    ErrorLogProcess(LogProcessor *nextLogProcessor = nullptr);
    void log(LogLevel logLevel, string message) override;
};

#endif
