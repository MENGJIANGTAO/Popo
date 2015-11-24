//
//  StartScene.cpp
//  Popo
//
//  Created by Mengjiangtao on 10/27/15.
//
//

#include "StartScene.hpp"

StartScene::StartScene()
{
    
}

StartScene::~StartScene()
{
    
}


Scene *StartScene::createScene()
{
    Scene * scene = NULL;
    do
    {
        scene = Scene::create();
        CC_BREAK_IF(!scene);
        
        StartScene *layer = StartScene::create();
        CC_BREAK_IF(!scene);
        
        scene->addChild(layer);
        
    }while(0);
    return scene;
}

bool StartScene::init()
{
    if(!Layer::init())
    {
        return false;
    }
    _startNode = CSLoader::createNode("Start/StartLayer.csb");
    addChild(_startNode);

    
    return true;
}