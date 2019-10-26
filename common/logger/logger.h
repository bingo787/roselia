//
// Created by bingo on 2019-10-26.
//

#ifndef ROSE_LOGGER_H
#define ROSE_LOGGER_H

#include <iostream>

#include "glog/logging.h"

namespace rose {
namespace common {
namespace logger {

class Logger {
public:
    Logger();

    ~Logger();
};

#define RLOG_DEBUG std::cout
#define RLOG_INFO std::cout
#define RLOG_WARN std::cout
#define RLOG_ERROR std::cout

}
}
}


#endif //ROSE_LOGGER_H
