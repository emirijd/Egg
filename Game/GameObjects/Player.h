/*
	Player.h

	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/
#pragma once
#include "../Types.h"

class Player
{
private:

	int m_keyFlag;
	//上向き用のテクスチャ
	int m_topTexture;
	//下向き用のテクスチャ
	int m_underTexture;

public:
	Player();									//	コンストラクタと呼ばれる関数
	~Player();								//	デストラクタと呼ばれる関数

	void Initialize(int playerTopTexture, int playerUnderTexture);						//	ゲームの初期化を行う関数
	void Update();							//	ゲームの更新処理を行う関数
	void Render();							//	ゲームの描画を行う関数。Drawと書く場合もある
	void Finalize();
};