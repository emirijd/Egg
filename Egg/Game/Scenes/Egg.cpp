/*
	Game.cpp

	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/

#include <DxLib.h>						//	������ł��g�����߁ADxLib.h���C���N���[�h���Ă���
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
	//�L�[�ݒ�
	int keyState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	//���̃V�[���J��(���L�[�Ń^�C�g����)
	if ((keyState & PAD_INPUT_UP) != 0)
	{
		pGame->ChangeScene(Game::SceneID::TITLE);
	}

	player.Update();
}

void Egg::Render()
{
	//	�e�X�g�̕����`��
	DrawFormatString(0, 0, GetColor(255, 255, 255), "PlayScene");

	player.Render();
}

void Egg::Finalize()
{
	player.Finalize();
}




