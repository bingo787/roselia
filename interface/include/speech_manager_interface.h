//
// Created by bingo on 2019-10-25.
//

#ifndef ROSE_SPEECH_MANAGER_H
#define ROSE_SPEECH_MANAGER_H
namespace rose {
namespace interface {
namespace include {

class SpeechManagerInterface {
 public:
  virtual void recognize() = 0;
};

}
}
}

#endif //ROSE_SPEECH_MANAGER_H
