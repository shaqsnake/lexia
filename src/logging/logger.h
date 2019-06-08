#ifndef _LEXIA_LOGGER_H
#define _LEXIA_LOGGER_H

#include <string>

namespace lexia {

enum log_level {
    TRACE = 0,
    DEBUG = 1,
    INFO = 2,
    WARN = 3,
    ERROR = 4,
    FATAL = 5,
};

class Logger {
public:
    Logger(std::string name = "lexia-logger") : name_(name){};
    std::string getLoggerName();

private:
    std::string name_;
};

std::string Logger::getLoggerName() { return name_; }

} // namespace lexia

#endif