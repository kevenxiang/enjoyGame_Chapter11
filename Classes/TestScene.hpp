//
//  TestScene.hpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#ifndef TestScene_hpp
#define TestScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class TestScene : public Layer {
public:
    static Scene * createScene();
    virtual bool init();
    CREATE_FUNC(TestScene);
};

#endif /* TestScene_hpp */
