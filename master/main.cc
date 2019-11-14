//
// Created by bingo on 2019-10-26.
//

#include <memory>
#include <thread>
#include <chrono>

#include "common/logger/logger.h"

using namespace std::chrono_literals;

int main() {

  auto logger = std::make_shared<rose::common::logger::Logger>();

  std::this_thread::sleep_for(3s);
  return 0;

}

