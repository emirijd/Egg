/*
	Game.h
	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/
#pragma once
class Game;

class TitleScene
{
private:
	Game* pGame;
	int m_titleTexture;

public:
	TitleScene();									//	�R���X�g���N�^�ƌĂ΂��֐�
	~TitleScene();								//	�f�X�g���N�^�ƌĂ΂��֐�

	void Initialize(Game* game);						//	�Q�[���̏��������s���֐�
	void Update();							//	�Q�[���̍X�V�������s���֐�
	void Render();							//	�Q�[���̕`����s���֐��BDraw�Ə����ꍇ������
	void Finalize();						//	�Q�[���̏I���������s���֐��B����������K�v�ȏꍇ�iRelease�֐��Ȃǂ��Ăяo���j�́A���̊֐����ŏ�������

	//	�֐��錾�I���I
};

