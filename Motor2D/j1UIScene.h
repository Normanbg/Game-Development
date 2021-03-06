#ifndef __j1UISCENE_H__
#define __j1UISCENE_H__

#include "j1Module.h"
#include "p2List.h"

class Button;
class UI_element;

enum menu_id
{
	START_MENU,
	SETTINGS_MENU,
	INGAME_MENU,
	PAUSE_MENU,
	CREDITS_MENU
};

struct menu
{
	menu(menu_id id): id(id)
	{}

	p2List<UI_element*> elements;
	menu_id id;
	menu_id previous_menu;
};

struct settings_values
{
	bool fullscreen = false;
	float music = 0.5f;
	float fx = 0.5f;
};

class j1UIScene : public j1Module
{
public:

	j1UIScene();
	~j1UIScene();

	// Called before render is available
	bool Awake();

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate(float dt);

	bool OnUIEvent(UI_element* element, event_type event_type);

	// Called before quitting
	bool CleanUp();

	bool loadMenu(menu_id id);

	void applySettings(settings_values values);

	void pauseChronos();
	void playChronos();

public:

	p2List<menu*> menus;
	menu* current_menu = nullptr;

	settings_values newValues;
	settings_values startValues;
	settings_values defaultValues;
};

#endif // !__j1UISCENE_H__