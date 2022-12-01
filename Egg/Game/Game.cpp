/*
	Game.cpp

	作成者　：　中西　和輝
	作成日　：　2022/11/24
*/

#include <DxLib.h>						//	こちらでも使うため、DxLib.hをインクルードしておく
#include "Game.h"


Game::Game()
{

}


Game::~Game()
{

}


void Game::Initialize()
{
	sceneID = SceneID::TITLE;
	InitializeScene();
	nextSceneID = sceneID;
}

void Game::Update()
{
	if (nextSceneID != sceneID)
	{
		FinalizeScene();
		sceneID = nextSceneID;
		InitializeScene();
	}

	UpdateScene();
}

void Game::Render()
{
	RenderScene();
}

void Game::Finalize()
{
	FinalizeScene();
}

void Game::InitializeScene()
{
	switch (sceneID)
	{
	case SceneID::TITLE:
		titleScene.Initialize(this);
		break;
	case SceneID::EGG:
		egg.Initialize(this);
	default:
		break;
	}
}

void Game::UpdateScene()
{
	switch (sceneID)
	{
	case SceneID::TITLE:
		titleScene.Update();
		break;
	case SceneID::EGG:
		egg.Update();
	default:
		break;
	}
}

void Game::RenderScene()
{
	switch (sceneID)
	{
	case SceneID::TITLE:
		titleScene.Render();
		break;
	case SceneID::EGG:
		egg.Render();
	default:
		break;
	}
}

void Game::FinalizeScene()
{
	switch (sceneID)
	{
	case SceneID::TITLE:
		titleScene.Finalize();
		break;
	case SceneID::EGG:
		egg.Finalize();
	default:
		break;
	}
}

void Game::ChangeScene(SceneID nextScene)
{
	nextSceneID = nextScene;
}


