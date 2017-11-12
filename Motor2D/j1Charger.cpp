#include "j1App.h"
#include "j1Textures.h"
#include "j1Input.h"
#include "j1Render.h"
#include "j1Collision.h"
#include "j1Charger.h"
#include "p2Log.h"
#include "j1Window.h"
#include "j1Map.h"
#include "j1Scene.h"
#include "j1Audio.h"

Charger::Charger() : Entity("charger")
{
	graphics = App->tex->Load("textures/enemies/charger.png");
	speed = 2;
	jump_force = 6;
	animation = idle_right;
	collider = App->collision->AddCollider({ 0, 0, 97, 72 }, COLLIDER_ENEMY, this);
}

Charger::~Charger()
{
}

bool Charger::Awake(pugi::xml_node&)
{
	return true;
}
bool Charger::Start()
{
	return true;
}
bool Charger::Update(float dt)
{
	
	return true;
}
bool Charger::PostUpdate()
{
	return true;
}
bool Charger::CleanUp()
{
	return true;
}
void Charger::OnCollision(Collider* c1, Collider* c2)
{
	Entity_OnCollision(c1, c2);
}

bool Charger::Load(pugi::xml_node&)
{
	return true;
}
bool Charger::Save(pugi::xml_node&) const
{
	return true;
}