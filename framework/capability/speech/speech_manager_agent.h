#ifndef ROSE_SPEECH_MANAGER_AGENT_H
#define ROSE_SPEECH_MANAGER_AGENT_H

#include "speech_manager_interface.h"
namespace rose{
namespace framework{
namespace capability{
namespace speech{

class SpeechManagerAgent : public rose::interface::include::SpeechManagerInterface{
public:
    void recognize() override;
};

}
}
}
}
#endif //ROSE_SPEECH_MANAGER_H
