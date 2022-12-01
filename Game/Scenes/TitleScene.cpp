/*
	Game.cpp

	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/

#include <DxLib.h>						//	������ł��g�����߁ADxLib.h���C���N���[�h���Ă���
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

	//�^�C�g��������0.5�b�ԓ_��
	if (flashtimer <= -30)
	{
		flashtimer = 30;
	}
	else
	{
		flashtimer--;
	}

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
	DrawGraph(0, 0, m_titleTexture, false);

	//Update�̕ϐ����當����_�ł�����
	if (flashtimer >= 0)
	{
		//�X�y�[�X�L�[�摜��`��
		DrawGraph(220, 400, m_spaceKeyTexture, TRUE);
	}

}

void TitleScene::Finalize()
{

}




