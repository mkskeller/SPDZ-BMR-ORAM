// (C) 2018 University of Bristol, Bar-Ilan University. See License.txt

/*
 * CutAndChooseMachine.h
 *
 */

#ifndef FHEOFFLINE_CUTANDCHOOSEMACHINE_H_
#define FHEOFFLINE_CUTANDCHOOSEMACHINE_H_

#include "FHEOffline/SimpleMachine.h"

class CutAndChooseMachine : public MultiplicativeMachine
{
    bool covert;

    template <class FD>
    GeneratorBase* new_generator(int i);

public:
    CutAndChooseMachine(int argc, const char** argv);
};

#endif /* FHEOFFLINE_CUTANDCHOOSEMACHINE_H_ */
