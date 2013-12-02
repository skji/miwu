//
//  EBoss2Loader.cpp
//  miwu
//
//  Created by long on 2013-03-01.
//
//

#include "EBoss2Loader.h"

USING_NS_CC;
USING_NS_CC_EXT;

CCNode* EBoss2Loader::load()
{
    cocos2d::extension::CCNodeLoaderLibrary * ccNodeLoaderLibrary = cocos2d::extension::CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    
    ccNodeLoaderLibrary->registerCCNodeLoader("EBoss2", EBoss2Loader::loader());    
    
    /* Create an autorelease CCBReader. */
    cocos2d::extension::CCBReader * ccbReader = new cocos2d::extension::CCBReader(ccNodeLoaderLibrary);
    ccbReader->autorelease();
    
    /* Read a ccbi file. */
    cocos2d::CCNode * node = ccbReader->readNodeGraphFromFile("EBoss2.ccbi");

    return node;
}
