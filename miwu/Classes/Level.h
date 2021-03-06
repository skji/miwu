//
//  Level.h
//  miwu
//
//  Created by long on 2013-03-01.
//
//

#ifndef __miwu__Level__
#define __miwu__Level__

#include "cocos2d.h"
#include "cocos-ext.h"

#include "Miao.h"
#include "Base.h"
#include "RBoss.h"
#include "RBoss2.h"
#include "EBoss.h"
#include "EBoss2.h"
#include "TBoss.h"
#include "TBoss2.h"
#include "CBoss.h"
#include "CBoss2.h"
#include "WBoss.h"
#include "WBoss2.h"
#include "Soldier.h"
#include "Enemy.h"


class Level : public cocos2d::CCLayer, public cocos2d::extension::CCBMemberVariableAssigner
{
private:
    cocos2d::CCArray *_levelArray;
    int _level_hp;
    int _level_max_hp;
    int _base_hp;
    int _base_max_hp
    int _boss_hp;
    int _boss_max_hp;
    bool _is_boss;
public:
    int soldier_dead = 0;
    int s1_call = 0;
    int s2_call = 0;
    int s3_call = 0;
    int s4_call = 0;
    int s5_call = 0;
    int s6_call = 0;
    int s7_call = 0;
    int s8_call = 0;
    int s9_call = 0;
    int scepter_cure = 0;
    int scepter_disaster = 0;
    int scepter_fire = 0;
    int scepter_flash = 0;
    int scepter_food = 0;
    int scepter_poison = 0;
    int scepter_star = 0;
    int scepter_wind = 0;
    int scepter_man = 0;
    int scepter_woman = 0;

    Miao* miao;
    Base* base;
    GameObject* boss;
    float randTime = 0;
    cocos2d::CCArray *_soldiers;
    cocos2d::CCArray *_enimies;
  
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(Level, create);
    
    virtual void onEnter();
    virtual void onExit();
    
    virtual bool onAssignCCBMemberVariable(CCObject* pTarget, const char* pMemberVariableName, CCNode* pNode);
    virtual bool onAssignCCBCustomProperty(CCObject* pTarget, const char* pMemberVariableName, cocos2d::extension::CCBValue* pCCBValue);

    
    //virtual void ccTouchesBegan(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
    //virtual void ccTouchesMoved(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);

    
    void update(float delta);
    void removeSoldier(Soldier* soldier);
    void removeEnemy(Enemy* enemy);
    void winHandler();
    void loseHandler(); 
};

#endif /* defined(__miwu__Level__) */
