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
	//����X�V
	void UpLeftUpdate2();

	//����`��
	void UpLeftRender();
	//����`��
	void UpLeftRender2();

	//�����X�V
	void BottomLeftUpdate();
	//�����X�V
	void BottomLeftUpdate2();

	//�����`��
	void BottomLeftRender();
	//�����`��
	void BottomLeftRender2();

	//�E��X�V
	void UpRightUpdate();
	//�E��X�V
	void UpRightUpdate2();
	//�E��`��
	void UpRightRender();
	//�E��`��
	void UpRightRender2();


	//�E���X�V
	void BottomRightUpdate();
	//�E���X�V
	void BottomRightUpdate2();
	//�E���`��
	void BottomRightRender();
	//�E���`��
	void BottomRightRender2();



};
