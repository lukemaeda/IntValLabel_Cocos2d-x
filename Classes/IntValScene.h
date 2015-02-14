//
//  IntValScene.h
//  IntValLabel
//
//  Created by MAEDAHAJIME on 2015/02/14.
//
//

#ifndef __IntValLabel__IntValScene__
#define __IntValLabel__IntValScene__

#include "cocos2d.h"
USING_NS_CC;

class IntValScene :public Layer
{
protected:
    // コンストラクタ
    IntValScene();
    // デストラクタ
    virtual ~IntValScene();
    // メソッド CREATE_FUNCとの連携
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(IntValScene);
};

#endif /* defined(__IntValLabel__IntValScene__) */
