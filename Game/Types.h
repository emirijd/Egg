/*
	Types.h
	作成者　：　中西和輝
	作成日　：　2021/09/07
*/
#pragma once
struct Vector
{
	float x;
	float y;
	float up_right_x;
	float up_right_y;

	float bottom_right_x;
	float bottom_right_y;

	float up_left_x;
	float up_left_y;

	float bottom_left_x;
	float bottom_left_y;

};

typedef struct Vector Position;