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
	int m_texture;
	int m_drop;
	int m_rotate;
	int m_time;
	int m_number;
	int m_count;


	Position m_pos;

public:
	EggSpawn();									//	�R���X�g���N�^�ƌĂ΂��֐�
	~EggSpawn();								//	�f�X�g���N�^�ƌĂ΂��֐�

	void Initialize(int playerTexture,int dropTexture);		//	�Q�[���̏��������s���֐�
	void Update();							//	�Q�[���̍X�V�������s���֐�
	void Render();							//	�Q�[���̕`����s���֐��BDraw�Ə����ꍇ������
	void Finalize();
	
	//���W��n��
	void SetEggSpawnPosX(int x);
	void SetEggSpawnPosY(int y);

	float GetEggSpawnPosX();
	float GetEggSpawnPosY();

	//����X�V
	void UpLeftUpdate();
	//����`��
	void UpLeftRender();

	//�����X�V
	void BottomLeftUpdate();
	//�����`��
	void BottomLeftRender();

};