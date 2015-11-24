//
//  StartScene.hpp
//  Popo
//
//  Created by Mengjiangtao on 10/27/15.
//
//

#ifndef StartScene_hpp
#define StartScene_hpp

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "SimpleAudioEngine.h"

using namespace cocostudio;
using namespace CocosDenshion;
USING_NS_CC;

class StartScene : public Layer
{
public:
    StartScene();
    ~StartScene();
    static Scene *createScene();
    virtual bool init();
    
    void menuNewGameCallBack(Ref* pSender);
    void menuVolCallBack(Ref *pSender);
    
    Node *_startNode;
    
    CREATE_FUNC(StartScene);
    
};

#endif /* StartScene_hpp */
