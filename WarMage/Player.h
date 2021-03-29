#pragma once
#include "Room.h"
#include "Item.h"
class Player
{
private:
	int m_health = 0;
	Room *m_currentRoom = nullptr;
	std::deque<int> m_inventory;
public:
	Player();
	~Player();

	void initialise();

	void setRoom(Room *t_room);

	void addItem(int t_id);
	void addItem(Item * t_item);

	void removeItem(int t_id);
	void removeItem(Item * t_item);
};

