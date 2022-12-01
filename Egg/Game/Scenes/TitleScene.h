/*
	Game.h
	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/
#pragma once
class Game;

class TitleScene
{
private:
	Game* pGame;
	int m_titleTexture;

public:
	TitleScene();									//	コンストラクタと呼ばれる関数
	~TitleScene();								//	デストラクタと呼ばれる関数

	void Initialize(Game* game);						//	ゲームの初期化を行う関数
	void Update();							//	ゲームの更新処理を行う関数
	void Render();							//	ゲームの描画を行う関数。Drawと書く場合もある
	void Finalize();						//	ゲームの終了処理を行う関数。解放処理が必要な場合（Release関数などを呼び出す）は、この関数内で処理する

	//	関数宣言終了！
};

