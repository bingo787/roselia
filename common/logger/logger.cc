//
// Created by bingo on 2019-10-26.
//
#include <iostream>
#include "logger.h"
#include <glog/logging.h>


rose::common::logger::Logger::Logger() {
    // Initialize Google's logging library.
    google::InitGoogleLogging("INFO");

    LOG(INFO) << "rose logger init ok \n";
}

rose::common::logger::Logger::~Logger() {
    LOG(INFO) << __FUNCTION__;
    google::ShutdownGoogleLogging();
}
