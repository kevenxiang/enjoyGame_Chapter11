//
//  StateWriteCode.cpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#include "StateWriteCode.hpp"
#include "MutouT.hpp"
#include "StateRest.hpp"

void StateWriteCode::execute(MutouT *mutou) {
    //如果累了就休息，并且切换到休息状态
    if (mutou->isTire()) {
        mutou->rest();
        mutou->changeState(new StateRest());
    }

}
