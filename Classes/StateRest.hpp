//
//  StateRest.hpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#ifndef StateRest_hpp
#define StateRest_hpp

#include "cocos2d.h"
#include "State.hpp"
#include "MutouT.hpp"
#include "StateWriteArticle.hpp"
#include "StateWriteCode.hpp"

USING_NS_CC;
class StateRest : public State {
public:
    virtual void execute(MutouT *mutou);
};

#endif /* StateRest_hpp */
