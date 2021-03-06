//
//  RBoss2Loader.h
//  miwu
//
//  Created by Ji Shankai on 13-6-1.
//
//

#ifndef __miwu__RBoss2Loader__
#define __miwu__RBoss2Loader__

#include "cocos2d.h"
#include "cocos-ext.h"

#include "RBoss2.h"

class RBoss2Loader : public cocos2d::extension::CCNodeLoader
{
    
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(RBoss2Loader, loader);
    static cocos2d::CCNode* load();
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(RBoss2);
    
};


#endif /* defined(__miwu__RBoss2Loader__) */
