/*
	Game.cpp

	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/

#include <DxLib.h>						//	������ł��g�����߁ADxLib.h���C���N���[�h���Ă���
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
	//�L�[�ݒ�
	int keyState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	//�X�y�[�X�L�[�Ńv���C�V�[���Ɉړ�
	if ((keyState & PAD_INPUT_10) != 0)
	{
		pGame->ChangeScene(Game::SceneID::EGG);
	}
}

void TitleScene::Render()
{
	//	�e�X�g�̕����`��
	DrawFormatString(0, 0, GetColor(255, 255, 255), "TITLE");
}

void TitleScene::Finalize()
{

}




