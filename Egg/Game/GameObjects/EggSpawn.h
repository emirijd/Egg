/*
	Player.h

	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/
#pragma once
#include "../Types.h"

class EggSpawn
{
private:


public:
	EggSpawn();									//	�R���X�g���N�^�ƌĂ΂��֐�
	~EggSpawn();								//	�f�X�g���N�^�ƌĂ΂��֐�

	void Initialize(int playerTopTexture, int playerUnderTexture);						//	�Q�[���̏��������s���֐�
	void Update();							//	�Q�[���̍X�V�������s���֐�
	void Render();							//	�Q�[���̕`����s���֐��BDraw�Ə����ꍇ������
	void Finalize();
};