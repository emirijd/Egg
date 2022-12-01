/*
	Game.h
	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
*/
#pragma once
#include "Scenes/Egg.h"
#include "Scenes/TitleScene.h"

class Game
{
public:
	enum SceneID
	{
		TITLE,
		EGG
	};
private:
	SceneID sceneID;
	SceneID nextSceneID;
	TitleScene titleScene;
	Egg egg;

public:
	Game();									//	�R���X�g���N�^�ƌĂ΂��֐�
	~Game();								//	�f�X�g���N�^�ƌĂ΂��֐�

	void Initialize();						//	�Q�[���̏��������s���֐�
	void Update();							//	�Q�[���̍X�V�������s���֐�
	void Render();							//	�Q�[���̕`����s���֐��BDraw�Ə����ꍇ������
	void Finalize();						//	�Q�[���̏I���������s���֐��B����������K�v�ȏꍇ�iRelease�֐��Ȃǂ��Ăяo���j�́A���̊֐����ŏ�������

	void InitializeScene();
	void UpdateScene();
	void RenderScene();
	void FinalizeScene();

	void ChangeScene(SceneID nextScene);
	//	�֐��錾�I���I
};

