//
//  StateWriteArticle.hpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#ifndef StateWriteArticle_hpp
#define StateWriteArticle_hpp

#include "cocos2d.h"
#include "State.hpp"
#include "MutouT.hpp"
#include "StateRest.hpp"
USING_NS_CC;
class StateWriteArticle : public State {
public:
    virtual void execute(MutouT *mutou);
};

#endif /* StateWriteArticle_hpp */
