//
//  MutouT.hpp
//  enjoyGame_Chapter11
//
//  Created by xiang on 2017/4/15.
//
//

#ifndef MutouT_hpp
#define MutouT_hpp

#include "cocos2d.h"
#include "State.hpp"
USING_NS_CC;

class MutouT : public Node {
public:
    CREATE_FUNC(MutouT);
    virtual bool init();
    
    bool isTire();
    bool isWantToWriteArticle();
    void writeCode();
    void writeArticle();
    void rest();
    void changeState(State *state);
    
    virtual void update(float dt);
    
private:
    State *mCurState;
};

#endif /* MutouT_hpp */
