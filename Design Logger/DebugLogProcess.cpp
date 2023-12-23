#include "DebugLogProcess.h"
#include "LogProcessor.h"

DebugLogProcess::DebugLogProcess(LogProcessor *nextLogProcessor) : LogProcessor(nextLogProcessor)
{
}

void DebugLogProcess::log(LogLevel logLevel, string message)
{
    if (logLevel == LogLevel::DEBUG)
    {
        cout << "DEBUG: " << message << endl;
    }
    else
    {
        nextLogProcessor->log(logLevel, message);
    }
}
