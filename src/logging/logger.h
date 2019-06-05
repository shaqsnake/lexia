#ifndef _LEXIA_LOGGER_H
#define _LEXIA_LOGGER_H

namespace lexia {

typedef enum log_level {
    INFO,
    DEBUG,
    WARN,
    ERROR,
    TRACE,
} log_level_t;

class Logger {
public:
    Logger() {};
private:
};

}

#endif