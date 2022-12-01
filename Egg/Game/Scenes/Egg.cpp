/*
	Game.cpp

	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/

#include <DxLib.h>						//	こちらでも使うため、DxLib.hをインクルードしておく
#include "Egg.h"
#include "../Game.h"

Egg::Egg()
{

}


Egg::~Egg()
{

}


void Egg::Initialize(Game* game)
{
	pGame = game;
	m_playerTopTexture = LoadGraph("Resources/Textures/Player.png");
	m_playerUnderTexture = LoadGraph("Resources/Textures/PlayerUnder.png");

	player.Initialize(m_playerTopTexture, m_playerUnderTexture);
}

void Egg::Update()
{
	//キー設定
	int keyState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	//仮のシーン遷移(↑キーでタイトルに)
	if ((keyState & PAD_INPUT_UP) != 0)
	{
		pGame->ChangeScene(Game::SceneID::TITLE);
	}

	player.Update();
}

void Egg::Render()
{
	//	テストの文字描画
	DrawFormatString(0, 0, GetColor(255, 255, 255), "PlayScene");

	player.Render();
}

void Egg::Finalize()
{
	player.Finalize();
}




