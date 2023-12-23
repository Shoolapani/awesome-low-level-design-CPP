#ifndef DEBUG_LOG_PROCESS_H
#define DEBUG_LOG_PROCESS_H

#include "LogProcessor.h"

class DebugLogProcess : public LogProcessor
{
public:
    DebugLogProcess(LogProcessor *nextLogProcessor = nullptr);
    void log(LogLevel logLevel, string message) override;
};

#endif
