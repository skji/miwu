//
//  RBoss.h
//  miwu
//
//  Created by Ji Shankai on 13-5-28.
//
//

#ifndef __miwu__RBoss__
#define __miwu__RBoss__

#include "GameObject.h"

#include "cocos2d.h"
#include "cocos-ext.h"

class RBoss : public GameObject
{

private:    
    bool init();
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(RBoss, create);
    
    virtual void update(float delta);
    virtual void handleCollisionWith(GameObject* gameObject);
    virtual float radius();
    virtual void resetSpeed();
    virtual bool isMaxHp();
};

#endif /* defined(__miwu__RBoss__) */