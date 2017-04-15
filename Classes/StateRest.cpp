//
//  StateRest.cpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#include "StateRest.hpp"

void StateRest::execute(MutouT *mutou) {
    //一定的概率写代码，一定的概率写教程，并且切换到相应的状态
    if (mutou->isWantToWriteArticle()) {
        mutou->writeArticle();
        mutou->changeState(new StateWriteArticle());
    } else {
        mutou->writeCode();
        mutou->changeState(new StateWriteCode());
    }
}
