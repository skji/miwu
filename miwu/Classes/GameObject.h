//
//  GameObject.h
//  miwu
//
//  Created by Ji Shankai on 13-5-28.
//
//

#ifndef __miwu__GameObject__
#define __miwu__GameObject__

#include "cocos2d.h"

class GameObject : public cocos2d::CCNode
{
public:
    cocos2d::CCSprite* bloodBar;
    CC_SYNTHESIZE(bool, isScheduledForRemove, IsScheduledForRemove);
    CC_SYNTHESIZE(float, atk, Atk);
    CC_SYNTHESIZE(float, def, Def);
    CC_SYNTHESIZE(float, hp, Hp);
    CC_SYNTHESIZE(float, maxHp, MaxHp);
    CC_SYNTHESIZE(float, xSpeed, XSpeed);
    CC_SYNTHESIZE(bool, isCollision, IsCollision);
    
    virtual float radius() = 0;
    virtual void update(float delta) = 0;
    virtual void handleCollisionWith(GameObject* gameObject) = 0;
    virtual void resetSpeed() = 0;
    virtual bool isMaxHp() = 0;
};

#endif /* defined(__miwu__GameObject__) */