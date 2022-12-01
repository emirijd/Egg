/*
	Game.h
	作成者　：　中西　和輝
	作成日　：　2022/11/24
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
	Game();									//	コンストラクタと呼ばれる関数
	~Game();								//	デストラクタと呼ばれる関数

	void Initialize();						//	ゲームの初期化を行う関数
	void Update();							//	ゲームの更新処理を行う関数
	void Render();							//	ゲームの描画を行う関数。Drawと書く場合もある
	void Finalize();						//	ゲームの終了処理を行う関数。解放処理が必要な場合（Release関数などを呼び出す）は、この関数内で処理する

	void InitializeScene();
	void UpdateScene();
	void RenderScene();
	void FinalizeScene();

	void ChangeScene(SceneID nextScene);
	//	関数宣言終了！
};

