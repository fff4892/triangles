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

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	auto bgSprite = Sprite::create("background.png");
	if (bgSprite) {
		bgSprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
		this->addChild(bgSprite, 0);
	}

	return true;
}
