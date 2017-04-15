//
//  MutouT.cpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#include "MutouT.hpp"

bool MutouT::init() {
    mCurState = NULL;
    this->scheduleUpdate();
    return true;
}

bool MutouT::isTire() {
    return true;
}

bool MutouT::isWantToWriteArticle() {
    float ran = CCRANDOM_0_1();
    if (ran < 0.1f) {
        return true;
    }
    
    return false;
}

void MutouT::writeCode() {
    log("mutou is writing Code.");
}

void MutouT::writeArticle() {
    log("mutou is writing article.");
}

void MutouT::rest() {
    log("mutou is resting.");
}

void MutouT::changeState(State *state) {
    CC_SAFE_DELETE(mCurState);
    mCurState = state;
}

void MutouT::update(float dt) {
    mCurState->execute(this);
}
