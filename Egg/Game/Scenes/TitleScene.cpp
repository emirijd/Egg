/*
	Game.cpp

	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/

#include <DxLib.h>						//	こちらでも使うため、DxLib.hをインクルードしておく
#include "TitleScene.h"
#include "../Game.h"


TitleScene::TitleScene()
{

}


TitleScene::~TitleScene()
{

}


void TitleScene::Initialize(Game* game)
{
	pGame = game;
	m_titleTexture = LoadGraph("Resources/Textures/Title.png");
}

void TitleScene::Update()
{
	//キー設定
	int keyState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	//スペースキーでプレイシーンに移動
	if ((keyState & PAD_INPUT_10) != 0)
	{
		pGame->ChangeScene(Game::SceneID::EGG);
	}
}

void TitleScene::Render()
{
	//	テストの文字描画
	DrawFormatString(0, 0, GetColor(255, 255, 255), "TITLE");
}

void TitleScene::Finalize()
{

}




