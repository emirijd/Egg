/*
	Game.cpp

	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/

#include <DxLib.h>						//	こちらでも使うため、DxLib.hをインクルードしておく
#include "TitleScene.h"
#include "../Game.h"


TitleScene::TitleScene():
	flashtimer(0)
{

}


TitleScene::~TitleScene()
{

}


void TitleScene::Initialize(Game* game)
{
	pGame = game;
	m_titleTexture = LoadGraph("Resources/Textures/EGG.jpg");
	m_spaceKeyTexture = LoadGraph("Resources/Textures/Push_Space_Key.png");
}

void TitleScene::Update()
{

	//タイトル文字の0.5秒間点滅
	if (flashtimer <= -30)
	{
		flashtimer = 30;
	}
	else
	{
		flashtimer--;
	}

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
	DrawGraph(0, 0, m_titleTexture, false);

	//Updateの変数から文字を点滅させる
	if (flashtimer >= 0)
	{
		//スペースキー画像を描画
		DrawGraph(220, 400, m_spaceKeyTexture, TRUE);
	}

}

void TitleScene::Finalize()
{

}




