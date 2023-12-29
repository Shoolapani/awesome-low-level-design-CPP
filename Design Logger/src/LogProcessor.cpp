#include "LogProcessor.h"

LogProcessor::LogProcessor(LogProcessor *nextLogProcessor)
{
    this->nextLogProcessor = nextLogProcessor;
}

void LogProcessor::log(LogLevel logLevel, string message)
{
    if (nextLogProcessor != nullptr)
    {
        nextLogProcessor->log(logLevel, message);
    }
}
