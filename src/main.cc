#include <iostream>
#include <memory>
#include "logging/logger.h"

int main() {
    std::shared_ptr<lexia::Logger> logger(new lexia::Logger);
    std::cout << "Hello, " << logger->getLoggerName() << "!" <<  std::endl;
    return 0;
}