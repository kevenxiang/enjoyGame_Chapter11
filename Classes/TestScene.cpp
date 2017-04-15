//
//  TestScene.cpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#include "TestScene.hpp"
#include "Mutou.hpp"
#include "MutouT.hpp"
#include "StateRest.hpp"

Scene *TestScene::createScene() {
    auto scene = Scene::create();
    auto layer = TestScene::create();
    scene->addChild(layer);
    return scene;
}

bool TestScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //新建木头角色
    MutouT *mMutou = MutouT::create();
    //初始化木头的状态为休息
    mMutou->changeState(new StateRest());
    
    this->addChild(mMutou);
    
    return true;
}

































