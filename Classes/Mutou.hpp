//
//  Mutou.hpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#ifndef Mutou_hpp
#define Mutou_hpp

#include "cocos2d.h"

USING_NS_CC;

enum EnumState{
    enStateWriteCode,  //状态：写代码
    enStatewriteArticle,  //状态：写教程
    enStateRest,   //状态：休息
};

class Mutou : public Node {
public:
    CREATE_FUNC(Mutou);
    virtual bool init();
    
    EnumState enCurState;  //当前状态
    
    bool isTire();  //判断是否写代码写累了
    bool isWantToWriteArticle(); //是否想写教程
    
    void writeCode();   //写代码
    void writeAriticle();  //写教程
    void rest();  //休息
    
    void changeState(EnumState enState);  //切换状态
    virtual void update(float dt);
    
};

#endif /* Mutou_hpp */




























