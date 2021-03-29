#pragma once
#include "pch.h"
class Room
{
private:
	int m_id = -1;

	std::string m_name;
	std::string m_description;

	std::deque<int> m_contents;
	std::deque<int> m_exits;

public:
	Room();
	~Room();

	void initialise(int t_id, std::string t_name, std::string t_description);

	void addObject(int t_id);
	void addObject(GameObject* t_gameObject);

	void addExit(int t_id);
	void addExit(Room *t_room);

	void tunnel(Room *t_room);


	int getId();
};

