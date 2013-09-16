//
//  S8.cpp
//  miwu
//
//  Created by Ji Shankai on 13-5-28.
//
//

#include "S8.h"

#define kCJStartSpeed 21
#define kCJHP 120
#define kCJATK 20
#define kCJDEF 10

USING_NS_CC;
USING_NS_CC_EXT;


bool S8::init()
{
    Soldier::init();
    effectSoundFileName = "s8_a1.wav";
    
    xSpeed = kCJStartSpeed;
    hp = kCJHP;
    maxHp = kCJHP;
    atk = kCJATK;
    def = kCJDEF;
    
    return true;
}

float S8::radius()
{
    return 150+25.0f;
}
