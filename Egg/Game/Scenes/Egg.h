/*
	Game.h
	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/
#pragma once
#include "../GameObjects/Player.h"

class Game;

class Egg
{
private:
	Game* pGame;
	int m_playerTopTexture;
	int m_playerUnderTexture;

	Player player;

public:
	Egg();									//	�R���X�g���N�^�ƌĂ΂��֐�
	~Egg();								//	�f�X�g���N�^�ƌĂ΂��֐�

	void Initialize(Game* game);						//	�Q�[���̏��������s���֐�
	void Update();							//	�Q�[���̍X�V�������s���֐�
	void Render();							//	�Q�[���̕`����s���֐��BDraw�Ə����ꍇ������
	void Finalize();						//	�Q�[���̏I���������s���֐��B����������K�v�ȏꍇ�iRelease�֐��Ȃǂ��Ăяo���j�́A���̊֐����ŏ�������

	//	�֐��錾�I���I
};

