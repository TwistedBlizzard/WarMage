#pragma once

#include "pch.h"

class Item : public GameObject
{
protected:
	std::string m_name;
	std::string m_description;
	int m_value = 0;
	float m_weight = 0.0f;

	Room *room;
public:
	Item();
	~Item();

	void initialise(int t_id, std::string t_name, std::string t_description, int t_value, float t_weight);
};