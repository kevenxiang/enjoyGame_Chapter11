//
//  StateWriteArticle.cpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#include "StateWriteArticle.hpp"
void StateWriteArticle::execute(MutouT *mutou) {
    if (mutou->isTire()) {
        mutou->rest();
        mutou->changeState(new StateRest());
    }
}
