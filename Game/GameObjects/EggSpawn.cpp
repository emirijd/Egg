/*
	Player.cpp

	�쐬�ҁ@�F�@�����@�a�P
	�쐬���@�F�@2022/11/24
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
	m_pos.up_right_x = 650;
	m_pos.up_right_y = 223;
	m_pos.bottom_right_x = 650;
	m_pos.bottom_right_y = 330;
	m_number = rand() % 4;
	m_count = 0;
}

void EggSpawn::Update()
{
	m_time++;
	if (m_time > 50)
	{
		m_rotate = m_rotate - 5;

		UpLeftUpdate();
		BottomLeftUpdate();
		UpRightUpdate();
		BottomRightUpdate();

		m_time = 0;
		m_count = m_count + 1;

	}
	if (m_count > 5)
	{
		m_count = 0;
		UpLeftUpdate2();
		BottomLeftUpdate2();
		UpRightUpdate2();
		BottomRightUpdate2();

	}
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
	if (m_count == 5)
	{
		UpLeftRender();
		BottomLeftRender();
		UpRightRender();
		BottomRightRender();

	}
	else
	{
		UpLeftRender2();
		BottomLeftRender2();
		UpRightRender2();
		BottomRightRender2();

	}
	//UpRightRender();
	//BottomRightRender();
	////���`��
	////DrawGraph(70, 263, m_Texture, false);
	//if (m_count == 5)
	//{
	//	//���������̕`��
	//	DrawGraph(140, 430, m_drop, false);
	//}
	//else
	//{
	//	//��]�`��A��
	//	DrawRotaGraph2(m_pos.up_left_x, m_pos.up_left_y,
	//		9, 9.5, 1.0, m_rotate,
	//		m_texture, false, false);
	//}
}

void EggSpawn::Finalize()
{
}


//���W��n��
void EggSpawn::SetEggSpawnPosX(int x)
{
	x = m_pos.x;
}

void EggSpawn::SetEggSpawnPosY(int y)
{
	y = m_pos.y;
}

//�ϐ���ݒ�
float EggSpawn::GetEggSpawnPosX()
{
	return m_pos.x;
}

float EggSpawn::GetEggSpawnPosY()
{
	return m_pos.y;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//����
////////////////////////////////////////////////////////////////////////////////////////////////////
void EggSpawn::UpLeftUpdate()
{
	//m_time++;
	//if (m_time > 50)
	//{
		//m_rotate = m_rotate - 5;
		m_pos.up_left_x = m_pos.up_left_x + 15;
		m_pos.up_left_y = m_pos.up_left_y + 10;
		//m_time = 0;
		//m_count = m_count + 1;
	//}
	//if (m_count > 5)
	//{
	//	m_count = 0;
	//	m_pos.up_left_x = 73;
	//	m_pos.up_left_y = 223;
	//}

}

void EggSpawn::UpLeftUpdate2()
{
	//m_count = 0;
	m_pos.up_left_x = 73;
	m_pos.up_left_y = 223;

}

void EggSpawn::UpLeftRender()
{
	//���`��
	//DrawGraph(70, 263, m_Texture, false);
	//if (m_count == 5)
	//{
		//���������̕`��
		DrawGraph(140, 430, m_drop, false);
	//}
	//else
	//{
	//	//��]�`��A��
	//	DrawRotaGraph2(m_pos.up_left_x, m_pos.up_left_y,
	//		9, 9.5, 1.0, m_rotate,
	//		m_texture, false, false);

	//}

}
void EggSpawn::UpLeftRender2()
{
	//��]�`��A��
	DrawRotaGraph2(m_pos.up_left_x, m_pos.up_left_y,
		9, 9.5, 1.0, m_rotate,
		m_texture, false, false);

}
////////////////////////////////////////////////////////////////////////////////////////////////////
//����
////////////////////////////////////////////////////////////////////////////////////////////////////
void EggSpawn::BottomLeftUpdate()
{
	//m_time++;
	//if (m_time > 50)
	//{
		//m_rotate = m_rotate - 5;
		m_pos.bottom_left_x = m_pos.bottom_left_x + 15;
		m_pos.bottom_left_y = m_pos.bottom_left_y + 10;
		//m_time = 0;
		//m_count = m_count + 1;
	//}
	//if (m_count > 5)
	//{
	//	m_count = 0;
	//	m_pos.bottom_left_x = 75;
	//	m_pos.bottom_left_y = 330;
	//}

}

void EggSpawn::BottomLeftUpdate2()
{
	//m_count = 0;
	m_pos.bottom_left_x = 75;
	m_pos.bottom_left_y = 330;

}

void EggSpawn::BottomLeftRender()
{
	//���`��
	//DrawGraph(70, 263, m_Texture, false);
	//if (m_count == 5)
	//{
		//���������̕`��
		DrawGraph(140, 430, m_drop, false);
	//}
	//else
	//{
	//	//��]�`��A��
	//	DrawRotaGraph2(m_pos.bottom_left_x, m_pos.bottom_left_y,
	//		9, 9.5, 1.0, m_rotate,
	//		m_texture, false, false);
	//}

}
void EggSpawn::BottomLeftRender2()
{
	//��]�`��A��
	DrawRotaGraph2(m_pos.bottom_left_x, m_pos.bottom_left_y,
		9, 9.5, 1.0, m_rotate,
		m_texture, false, false);

}
////////////////////////////////////////////////////////////////////////////////////////////////////
//�E��
////////////////////////////////////////////////////////////////////////////////////////////////////
void EggSpawn::UpRightUpdate()
{
	//m_time++;
	//if (m_time > 50)
	//{
	//	m_rotate = m_rotate - 5;
		m_pos.up_right_x = m_pos.up_right_x + 15;
		m_pos.up_right_y = m_pos.up_right_y + 10;
		//m_time = 0;
		//m_count = m_count + 1;
	//}
	//if (m_count > 5)
	//{
	//	m_count = 0;
	//	m_pos.up_right_x = 650;
	//	m_pos.up_right_y = 223;
	//}

}

void EggSpawn::UpRightUpdate2()
{
	m_pos.up_right_x = 650;
	m_pos.up_right_y = 223;

}

void EggSpawn::UpRightRender()
{
	//���`��
//DrawGraph(70, 263, m_Texture, false);
	//if (m_count == 5)
	//{
		//���������̕`��
		DrawGraph(540, 430, m_drop, false);
	//}
	//else
	//{
	//	//��]�`��A��
	//	DrawRotaGraph2(m_pos.up_right_x, m_pos.up_right_y,
	//		9, 9.5, 1.0, m_rotate,
	//		m_texture, false, false);
	//}

}
void EggSpawn::UpRightRender2()
{
	//��]�`��A��
	DrawRotaGraph2(m_pos.up_right_x, m_pos.up_right_y,
		9, 9.5, 1.0, m_rotate,
		m_texture, false, false);

}
////////////////////////////////////////////////////////////////////////////////////////////////////
//�E��
////////////////////////////////////////////////////////////////////////////////////////////////////
void EggSpawn::BottomRightUpdate()
{
	//m_time++;
	//if (m_time > 50)
	//{
	//	m_rotate = m_rotate - 5;
		m_pos.bottom_right_x = m_pos.bottom_right_x + 15;
		m_pos.bottom_right_y = m_pos.bottom_right_y + 10;
	//	m_time = 0;
	//	m_count = m_count + 1;
	//}
	//if (m_count > 5)
	//{
	//	m_count = 0;
	//	m_pos.bottom_right_x = 650;
	//	m_pos.bottom_right_y = 330;
	//}

}

void EggSpawn::BottomRightUpdate2()
{
	m_pos.bottom_right_x = 650;
	m_pos.bottom_right_y = 330;

}

void EggSpawn::BottomRightRender()
{
	//���`��
	//DrawGraph(70, 263, m_Texture, false);
	//if (m_count == 5)
	//{
		//���������̕`��
		DrawGraph(540, 430, m_drop, false);
	//}
	//else
	//{
	//	//��]�`��A��
	//	DrawRotaGraph2(m_pos.bottom_right_x, m_pos.bottom_right_y,
	//		9, 9.5, 1.0, m_rotate,
	//		m_texture, false, false);
	//}

}

void EggSpawn::BottomRightRender2()
{
	//��]�`��A��
	DrawRotaGraph2(m_pos.bottom_right_x, m_pos.bottom_right_y,
		9, 9.5, 1.0, m_rotate,
		m_texture, false, false);

}

