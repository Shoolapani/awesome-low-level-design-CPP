#ifndef INFO_LOG_PROCESS_H
#define INFO_LOG_PROCESS_H

#include "LogProcessor.h"

class InfoLogProcess : public LogProcessor
{
public:
    InfoLogProcess(LogProcessor *nextLogProcessor = nullptr);
    void log(LogLevel logLevel, string message) override;
};

#endif
