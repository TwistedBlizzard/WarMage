#pragma once

#include "pch.h"

class RoomManager
{
private:
	int m_currentIndex = 0;
	std::deque<Room*> m_rooms;
public:
	RoomManager();
	~RoomManager();

	void initialise();

	Room* create(std::string t_name, std::string t_description);

	Room* getRoom(int t_id);
};