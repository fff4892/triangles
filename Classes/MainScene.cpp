#include "MainScene.h"

USING_NS_CC;

cocos2d::Scene * MainScene::createScene()
{
	return MainScene::create();
}

bool MainScene::init()
{
	if (!Scene::init()) {
		return false;
	}

	return true;
}
