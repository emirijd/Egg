/*
	Player.cpp

	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/
#include <DxLib.h>
#include <math.h>
#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Initialize(int playerTopTexture, int playerUnderTexture)
{
	m_topTexture = playerTopTexture;
	m_underTexture = playerUnderTexture;
	m_keyFlag = 0;
}

void Player::Update()
{
	//�L�[�ݒ�
	int keyState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	//�E��K(�� D)
	if ((keyState & PAD_INPUT_6) != 0)
	{
		m_keyFlag = 0;
	}
	//����A
	if ((keyState & PAD_INPUT_4) != 0)
	{
		m_keyFlag = 1;
	}
	//�E��M(�� X)
	if ((keyState & PAD_INPUT_2) != 0)
	{
		m_keyFlag = 2;
	}
	//����Z
	if ((keyState & PAD_INPUT_1) != 0)
	{
		m_keyFlag = 3;
	}
}

void Player::Render()
{
	//player�̌����ς���
	if (m_keyFlag == 0)
	{
		DrawGraph(420, 290, m_topTexture, false);
	}
	if (m_keyFlag == 1)
	{
		DrawTurnGraph(140, 290, m_topTexture, false);
	}
	if (m_keyFlag == 2)
	{
		DrawGraph(420, 290, m_underTexture, false);
	}
	if (m_keyFlag == 3)
	{
		DrawTurnGraph(140, 291, m_underTexture, false);
	}
}

void Player::Finalize()
{
}