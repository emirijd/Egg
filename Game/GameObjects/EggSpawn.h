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
	int m_texture;
	int m_drop;
	int m_rotate;
	int m_time;
	int m_number;
	int m_count;

	Position m_pos;

public:
	EggSpawn();									//	コンストラクタと呼ばれる関数
	~EggSpawn();								//	デストラクタと呼ばれる関数

	void Initialize(int playerTexture,int dropTexture);		//	ゲームの初期化を行う関数
	void Update();							//	ゲームの更新処理を行う関数
	void Render();							//	ゲームの描画を行う関数。Drawと書く場合もある
	void Finalize();
};