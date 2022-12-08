/*
	Player.cpp

	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/
#include <DxLib.h>
#include <math.h>
#include "EggSpawn.h"

EggSpawn::EggSpawn()
{

}

EggSpawn::~EggSpawn()
{

}

void EggSpawn::Initialize(int playerTexture,int dropTexture)
{
	m_texture = playerTexture;
	m_drop = dropTexture;
	m_rotate = 0;
	m_time = 0;
	m_pos.x = 73;
	m_pos.y = 223;
	m_number = rand() % 4;
	m_count = 0;
}

void EggSpawn::Update()
{
	m_time++;
	if (m_time > 50)
	{
		m_rotate = m_rotate - 5;
		m_pos.x = m_pos.x + 15;
		m_pos.y = m_pos.y + 10;
		m_time= 0;
		m_count = m_count + 1;
	}
	if (m_count > 5)
	{
		m_count = 0;
		m_pos.x = 73;
		m_pos.y = 223;
	}
}

void EggSpawn::Render()
{
	//卵描画
	//DrawGraph(70, 263, m_Texture, false);
	if (m_count == 5)
	{
		DrawGraph(140, 430, m_drop, false);
	}
	else
	{
		//回転描画
		DrawRotaGraph2(m_pos.x, m_pos.y,
			9, 9.5, 1.0, m_rotate,
			m_texture, false, false);
	}
}

void EggSpawn::Finalize()
{

}