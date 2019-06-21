#include "logging/logger.h"
#include <iostream>
#include <memory>

int main() {
    // std::shared_ptr<lexia::Logger> logger(new lexia::Logger);
    auto logger = std::make_shared<lexia::Logger>();
    std::cout << "Hello, " << logger->getLoggerName() << "!" << std::endl;
    return 0;
}