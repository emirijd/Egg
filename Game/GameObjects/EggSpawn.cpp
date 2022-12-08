/*
	Player.cpp

	ì¬Ò@F@’†¼@˜a‹P
	ì¬“ú@F@2022/11/24
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
	m_pos.up_left_x = 73;
	m_pos.up_left_y = 223;
	m_pos.bottom_left_x = 75;
	m_pos.bottom_left_y = 330;
	m_number = rand() % 4;
	m_count = 0;
}

void EggSpawn::Update()
{
	UpLeftUpdate();
	BottomLeftUpdate();
	//m_time++;
	//if (m_time > 50)
	//{
	//	m_rotate = m_rotate - 5;
	//	m_pos.up_left_x = m_pos.up_left_x + 15;
	//	m_pos.up_left_y = m_pos.up_left_y + 10;
	//	m_time= 0;
	//	m_count = m_count + 1;
	//}
	//if (m_count > 5)
	//{
	//	m_count = 0;
	//	m_pos.up_left_x = 73;
	//	m_pos.up_left_y = 223;
	//}
}

void EggSpawn::Render()
{
	UpLeftRender();
	BottomLeftRender();
	////—‘•`‰æ
	////DrawGraph(70, 263, m_Texture, false);
	//if (m_count == 5)
	//{
	//	//—‚¿‚½•û‚Ì•`‰æ
	//	DrawGraph(140, 430, m_drop, false);
	//}
	//else
	//{
	//	//‰ñ“]•`‰æA—‘
	//	DrawRotaGraph2(m_pos.up_left_x, m_pos.up_left_y,
	//		9, 9.5, 1.0, m_rotate,
	//		m_texture, false, false);
	//}
}

void EggSpawn::Finalize()
{
}


//À•W‚ğ“n‚·
void EggSpawn::SetEggSpawnPosX(int x)
{
	x = m_pos.x;
}

void EggSpawn::SetEggSpawnPosY(int y)
{
	y = m_pos.y;
}

//•Ï”‚ğİ’è
float EggSpawn::GetEggSpawnPosX()
{
	return m_pos.x;
}

float EggSpawn::GetEggSpawnPosY()
{
	return m_pos.y;
}

//¶ãXV
void EggSpawn::UpLeftUpdate()
{
	m_time++;
	if (m_time > 50)
	{
		m_rotate = m_rotate - 5;
		m_pos.up_left_x = m_pos.up_left_x + 15;
		m_pos.up_left_y = m_pos.up_left_y + 10;
		m_time = 0;
		m_count = m_count + 1;
	}
	if (m_count > 5)
	{
		m_count = 0;
		m_pos.up_left_x = 73;
		m_pos.up_left_y = 223;
	}

}

//¶ã•`‰æ
void EggSpawn::UpLeftRender()
{
	//—‘•`‰æ
	//DrawGraph(70, 263, m_Texture, false);
	if (m_count == 5)
	{
		//—‚¿‚½•û‚Ì•`‰æ
		DrawGraph(140, 430, m_drop, false);
	}
	else
	{
		//‰ñ“]•`‰æA—‘
		DrawRotaGraph2(m_pos.up_left_x, m_pos.up_left_y,
			9, 9.5, 1.0, m_rotate,
			m_texture, false, false);
	}

}

/// ////////////////////////////////////////////////////////////////////////////////////////////////
void EggSpawn::BottomLeftUpdate()
{
	m_time++;
	if (m_time > 50)
	{
		m_rotate = m_rotate - 5;
		m_pos.bottom_left_x = m_pos.bottom_left_x + 15;
		m_pos.bottom_left_y = m_pos.bottom_left_y + 10;
		m_time = 0;
		m_count = m_count + 1;
	}
	if (m_count > 5)
	{
		m_count = 0;
		m_pos.bottom_left_x = 75;
		m_pos.bottom_left_y = 330;
	}

}

void EggSpawn::BottomLeftRender()
{
	//—‘•`‰æ
	//DrawGraph(70, 263, m_Texture, false);
	if (m_count == 5)
	{
		//—‚¿‚½•û‚Ì•`‰æ
		DrawGraph(140, 430, m_drop, false);
	}
	else
	{
		//‰ñ“]•`‰æA—‘
		DrawRotaGraph2(m_pos.bottom_left_x, m_pos.bottom_left_y,
			9, 9.5, 1.0, m_rotate,
			m_texture, false, false);
	}

}

