#pragma once
class GameObject
{
protected:
	int m_id = -1;

public:
	GameObject();
	~GameObject();

	int getId();
};

