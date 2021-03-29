#include "Room.h"

Room::Room()
{
}

Room::~Room()
{
}

void Room::initialise(int t_id, std::string t_name, std::string t_description)
{
	m_id = t_id;
	m_name = t_name;
	m_description = t_description;
}

void Room::addObject(int t_id)
{
	std::deque<int>::iterator i = m_contents.begin();
	for (i; i != m_contents.end(); i++) {
		if (t_id == *i) {
			return;
		}
	}
	m_contents.push_back(t_id);
}

void Room::addObject(GameObject * t_gameObject)
{
	int id = t_gameObject->getId();
	addObject(id);
}

void Room::addExit(int t_id)
{
	std::deque<int>::iterator i = m_exits.begin();
	for (i; i != m_exits.end(); i++) {
		if (t_id == *i) {
			return;
		}
	}
	m_exits.push_back(t_id);
}

void Room::addExit(Room * t_room)
{
	int id = t_room->getId();
	addExit(id);
}

void Room::tunnel(Room * t_room)
{
	addExit(t_room);
	t_room->addExit(m_id);
}

int Room::getId()
{
	return m_id;
}
