//
//  IntValScene.cpp
//  IntValLabel
//
//  Created by MAEDAHAJIME on 2015/02/14.
//
//

#include "IntValScene.h"
// UI GUI用
USING_NS_CC;     // cocos2d
using namespace std; // String*

// _/_/_/ コンストラクタ プロパティー _/_/_/
IntValScene::IntValScene()
{
    
}

// MainScene デストラクタで解放 メモリーリークを防ぐ
IntValScene::~IntValScene()
{
    
}

// createSceneはLayerをSceneに貼り付けて返すクラスメソッドです。
// 自分自身(IntValScene)を生成し、空のSceneに貼り付けて返す簡単な処理を行っているだけです。
// これでほかのシーンからの遷移が楽に行えます。
Scene* IntValScene::createScene()
{
    
    auto scene = Scene::create();
    auto layer = IntValScene::create();
    scene->addChild(layer);
    
    return scene;
}

bool IntValScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    // 画面サイズを取得
    Size winSize = Director::getInstance()->getVisibleSize();
    // バックグランドカラー
    auto background = LayerColor::create(Color4B::BLUE,
                                         winSize.width,
                                         winSize.height);
    // バックグランドカラー 第2引数は表示順
    this->addChild(background, 0);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // string型 文字（名前）
    auto label = Label::createWithSystemFont("Stringからの変換（キャスト）", "arial", 50);
    // ラベルの色:ホワイト
    label->setColor(Color3B::WHITE);
    //画面の中央に表示
    label->setPosition(Point(winSize.width/2, winSize.height/1.2));
    // Layerにラベルを追加
    this->addChild(label);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // Label1::createWithSystemFont("文字列", "フォントの種類", 文字サイズ);
    // string型ラベル
    auto label1 = Label::createWithSystemFont
                            ("String型\"abc\"->string型（getCString）", "arial", 40);
    // ラベルの色:ホワイト
    label1->setColor(Color3B::WHITE);
    //画面の中央に表示
    label1->setPosition(Point(winSize.width/2 - 150, winSize.height/1.5));
    // Layerにラベルを追加
    this->addChild(label1);
    
    
    
    // Stringからconst char*型、string型に変換（getCString）
    auto str1 = String::createWithFormat("abc");
    string _string = str1->getCString();
    
    auto label01 = Label::createWithSystemFont(_string, "arial", 40);
    // ラベルの色:ホワイト
    label01->setColor(Color3B::WHITE);
    //画面の中央に表示
    label01->setPosition(Point(winSize.width/2 + 450, winSize.height/1.5));
    // Layerにラベルを追加
    this->addChild(label01);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    //String *score = String::createWithFormat("String型 %s->int型（intValue）","1234");
    // int型ラベル
    auto label2 = Label::createWithSystemFont
                                    ("String型\"12345\"->int型（intValue）", "arial", 40);
    // ラベルの色:ホワイト
    label2->setColor(Color3B::WHITE);
    //画面の中央に表示
    label2->setPosition(Point(winSize.width/2 - 150, winSize.height/1.9));
    // Layerにラベルを追加
    this->addChild(label2);
    
    
    // Stringからint型に変換（intValue）
    auto str2 = String::createWithFormat("12345");
    int _int = str2->intValue();
    
    auto label02 = Label::createWithSystemFont(StringUtils::toString(_int),"arial", 40);
    // ラベルの色:ホワイト
    label02->setColor(Color3B::WHITE);
    //画面の中央に表示
    label02->setPosition(Point(winSize.width/2 + 450, winSize.height/1.9));
    // Layerにラベルを追加
    this->addChild(label02);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // bool型ラベル
    auto label3 = Label::createWithSystemFont
                                ("String型\"true\"->bool型（boolValue）", "arial", 40);
    // ラベルの色:ホワイト
    label3->setColor(Color3B::WHITE);
    //画面の中央に表示
    label3->setPosition(Point(winSize.width/2 - 150, winSize.height/2.5));
    // Layerにラベルを追加
    this->addChild(label3);
    
    // Stringからbool型に変換（boolValue）
    auto str3 = String::create("true");
    bool _bool = str3->boolValue();
    
    auto label03 = Label::createWithSystemFont(StringUtils::toString(_bool),"arial", 40);
    // ラベルの色:ホワイト
    label03->setColor(Color3B::WHITE);
    //画面の中央に表示
    label03->setPosition(Point(winSize.width/2 + 450, winSize.height/2.5));
    // Layerにラベルを追加
    this->addChild(label03);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // float型ラベル
    auto label4 = Label::createWithSystemFont
                            ("String型\"123.45\"->float型（floatValue）", "arial", 40);
    // ラベルの色:ホワイト
    label4->setColor(Color3B::WHITE);
    //画面の中央に表示
    label4->setPosition(Point(winSize.width/2 - 150, winSize.height/3.5));
    // Layerにラベルを追加
    this->addChild(label4);
    
    // Stringからfloat型に変換（floatValue）
    auto str4 = String::create("123.45");
    float _float = str4->floatValue();
    
    auto label04 = Label::createWithSystemFont(StringUtils::toString(_float),"arial", 40);
    // ラベルの色:ホワイト
    label04->setColor(Color3B::WHITE);
    //画面の中央に表示
    label04->setPosition(Point(winSize.width/2 + 450, winSize.height/3.5));
    // Layerにラベルを追加
    this->addChild(label04);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // double型ラベル
    auto label5 = Label::createWithSystemFont
                    ("String型\"123.456789\"->double型（doubleValue）", "arial", 40);
    // ラベルの色:ホワイト
    label5->setColor(Color3B::WHITE);
    //画面の中央に表示
    label5->setPosition(Point(winSize.width/2 - 150, winSize.height/6));
    // Layerにラベルを追加
    this->addChild(label5);
    
    
    // Stringからdouble型に変換（doubleValue）
    auto str5 = String::create("123.456789");
    double _double = str5->doubleValue();
    
    auto label05 = Label::createWithSystemFont(StringUtils::toString(_double),"arial", 40);
    // ラベルの色:ホワイト
    label05->setColor(Color3B::WHITE);
    //画面の中央に表示
    label05->setPosition(Point(winSize.width/2 + 450, winSize.height/6));
    // Layerにラベルを追加
    this->addChild(label05);
    
    // ログ表示
    log("string: %s", _string.c_str());
    log("int: %d", _int);
    log("bool: %d", _bool);
    log("float: %f", _float);
    log("double: %f", _double);
    
    return true;
}