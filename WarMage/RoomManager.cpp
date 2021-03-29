#include "RoomManager.h"

RoomManager::RoomManager()
{
}

RoomManager::~RoomManager()
{
}

void RoomManager::initialise()
{
}

Room * RoomManager::create(std::string t_name, std::string t_description)
{
	Room *room = new Room();
	room->initialise(m_currentIndex, t_name, t_description);
	m_currentIndex += 1;
	m_rooms.push_back(room);
	return room;
}

Room * RoomManager::getRoom(int t_id)
{
	Room *room = m_rooms.at(t_id);
	return room;
}
