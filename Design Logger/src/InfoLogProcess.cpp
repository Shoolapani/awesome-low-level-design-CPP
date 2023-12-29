#include "InfoLogProcess.h"
#include "LogProcessor.h"

InfoLogProcess::InfoLogProcess(LogProcessor *nextLogProcessor) : LogProcessor(nextLogProcessor)
{
}

void InfoLogProcess::log(LogLevel logLevel, string message)
{
    if (logLevel == LogLevel::INFO)
    {
        cout << "INFO : " << message << endl;
    }
    else
    {
        nextLogProcessor->log(logLevel, message);
    }
}
