#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::initialise()
{
}

void Player::setRoom(Room * t_room)
{
	m_currentRoom = t_room;
}

void Player::addItem(int t_id)
{
	std::deque<int>::iterator i = m_inventory.begin();
	for (i; i != m_inventory.end(); i++) {
		if (t_id == *i) {
			return;
		}
	}
	m_inventory.push_back(t_id);
}

void Player::addItem(Item * t_item)
{
	int id = t_item->getId();
	addItem(id);
}

void Player::removeItem(int t_id)
{
	std::deque<int>::iterator i = m_inventory.begin();
	for (i; i != m_inventory.end(); i++) {
		if (t_id == *i) {
			m_inventory.erase(i);
			return;
		}
	}
}

void Player::removeItem(Item * t_item)
{
	int id = t_item->getId();
	removeItem(id);
}
