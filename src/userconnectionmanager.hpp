#pragma once
#include <array>
class Connection;
class UserConnectionManager {
private:
	std::array<Connection,5> devices;_
public:
	bool add_connection(Connection);
	bool terminate_connetion(Connection);
	std::vector<Connection> get_active_connections();
	broadcast(Message )

}

class Connection{
	private:
		
}
