/*
	Player.h

	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/
#pragma once
#include "../Types.h"

class EggSpawn
{
private:


public:
	EggSpawn();									//	コンストラクタと呼ばれる関数
	~EggSpawn();								//	デストラクタと呼ばれる関数

	void Initialize(int playerTopTexture, int playerUnderTexture);						//	ゲームの初期化を行う関数
	void Update();							//	ゲームの更新処理を行う関数
	void Render();							//	ゲームの描画を行う関数。Drawと書く場合もある
	void Finalize();
};