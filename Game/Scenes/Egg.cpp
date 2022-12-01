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
	m_backTexture = LoadGraph("Resources/Textures/back.png");
	m_playerTopTexture = LoadGraph("Resources/Textures/PlayerTop.png");
	m_playerUnderTexture = LoadGraph("Resources/Textures/PlayerUnder.png");
	m_eggTexture = LoadGraph("Resources/Textures/��2.png");
	m_eggDropTexture = LoadGraph("Resources/Textures/EggDrop.png");

	player.Initialize(m_playerTopTexture, m_playerUnderTexture);
	eggSpawn.Initialize(m_eggTexture,m_eggDropTexture);
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
	eggSpawn.Update();
}

void Egg::Render()
{
	DrawGraph(0, 0, m_backTexture, false);
	//	�e�X�g�̕����`��
	DrawFormatString(0, 0, GetColor(255, 255, 255), "PlayScene");

	player.Render();
	eggSpawn.Render();
}

void Egg::Finalize()
{
	player.Finalize();
	eggSpawn.Finalize();
}




