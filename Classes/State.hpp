//
//  State.hpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#ifndef State_hpp
#define State_hpp

#include "cocos2d.h"
USING_NS_CC;

class MutouT;
class State {
public:
    virtual void execute(MutouT *mutou) = 0;
};

#endif /* State_hpp */
