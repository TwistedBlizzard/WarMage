#include "WarMage.h"

int main(int argc, char * argv[])
{
	RoomManager * roomManager = new RoomManager();
	Room * room1 = roomManager->create("Room 1", "Test Room");
	Room * room2 = roomManager->create("Room 2", "Another Test Room");
	room1->addExit(room2);
	room1->tunnel(room2);

	Player * player = new Player();
	player->initialise();
	player->setRoom(room1);

	Item * item1 = new Item();
	Item * item2 = new Item();
	item1->initialise(0, "Book", "Test Item", 1, 0.5f);
	item2->initialise(1, "Guitar", "Another Test Item", 10, 2);

	player->addItem(item1);
	player->addItem(item1);

	return 0;
}
