#include "Item.h"

Item::Item()
{
}

Item::~Item()
{
}

void Item::initialise(int t_id, std::string t_name, std::string t_description, int t_value, float t_weight)
{
	m_id = t_id;
	m_name = t_name;
	m_description = t_description;
	m_value = t_value;
	m_weight = t_weight;
}
