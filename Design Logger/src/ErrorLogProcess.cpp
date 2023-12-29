#include "ErrorLogProcess.h"
#include "LogProcessor.h"

ErrorLogProcess::ErrorLogProcess(LogProcessor *nextLogProcessor) : LogProcessor(nextLogProcessor)
{
}

void ErrorLogProcess::log(LogLevel logLevel, string message)
{
    if (logLevel == LogLevel::ERROR)
    {
        cout << "ERROR: " << message << endl;
    }
    else
    {
        nextLogProcessor->log(logLevel, message);
    }
}
