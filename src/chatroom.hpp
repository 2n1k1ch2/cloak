#pragma once
#include <boost/asio.hpp>
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>
#include "users.hpp"
class Chatroom{
	private:
	bool save_history_;
	
	
	std::vector<User> users_;	
	
	public:
	void send_message()

}
