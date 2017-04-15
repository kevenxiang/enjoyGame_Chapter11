//
//  Mutou.cpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#include "Mutou.hpp"

bool Mutou::init() {
    this->scheduleUpdate();
    return true;
}

void Mutou::changeState(EnumState enState) {
    this->enCurState = enState;
}

bool Mutou::isTire() {
    return true;
}

bool Mutou::isWantToWriteArticle() {
    //有10%的概率想写教程
    float ran = CCRANDOM_0_1();
    if (ran < 0.1f) {
        return true;
    }
    
    return false;
    
}

void Mutou::writeCode() {
    log("mutou is writing Code.");
}

void Mutou::writeAriticle() {
    log("mutou is writing article.");
}

void Mutou::rest() {
    log("mutou is resting");
}

void Mutou::update(float dt) {
    //判断在每一种状态下应该做什么事情
    switch (enCurState) {
        case enStateWriteCode:
            //如果累了就休息，并且切换到休息状态
            if (isTire()) {
                rest();
                changeState(enStateRest);
            }
            break;
            
        case enStatewriteArticle: {
            //如果累了就休息，并且切换到休息状态
            if (isTire()) {
                rest();
                changeState(enStateRest);
            }
        }
            
            break;
            
       case enStateRest:
            
            //一定的概率写代码，一定的概率写教程，并且切换到相应的状态
            if (isWantToWriteArticle()) {
                writeAriticle();
                changeState(enStatewriteArticle);
            } else {
                writeCode();
                changeState(enStateWriteCode);
            }
            
            break;
            
        default:
            break;
    }
}






























