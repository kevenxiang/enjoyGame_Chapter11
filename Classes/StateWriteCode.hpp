//
//  StateWriteCode.hpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#ifndef StateWriteCode_hpp
#define StateWriteCode_hpp

#include "cocos2d.h"
#include "State.hpp"
USING_NS_CC;

class MutouT;
class StateWriteCode : public State {
public:
    virtual void execute(MutouT *mutou);
};


#endif /* StateWriteCode_hpp */
