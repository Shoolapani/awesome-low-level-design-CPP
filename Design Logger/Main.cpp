#include "LogProcessor.h"
#include "InfoLogProcess.h"
#include "DebugLogProcess.h"
#include "ErrorLogProcess.h"

int main()
{
    LogProcessor *logObject = new InfoLogProcess(new DebugLogProcess(new ErrorLogProcess(nullptr)));

    logObject->log(LogLevel::ERROR, "exception happens");
    logObject->log(LogLevel::DEBUG, "need to debug this ");
    logObject->log(LogLevel::INFO, "just for info ");

    return 0;
}
