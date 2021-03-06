//
//  S6Loader.h
//  miwu
//
//  Created by Ji Shankai on 13-6-1.
//
//

#ifndef __miwu__S6Loader__
#define __miwu__S6Loader__

#include "cocos2d.h"
#include "cocos-ext.h"

#include "S6.h"

class S6Loader : public cocos2d::extension::CCNodeLoader
{
    
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(S6Loader, loader);
    static cocos2d::CCNode* load();
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(S6);
    
};


#endif /* defined(__miwu__S6Loader__) */
