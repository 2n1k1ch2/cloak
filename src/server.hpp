#include <iostream>
#include <boost/asio.hpp>

class Server{
private:
	boost::asio::io_context io;
	
public:
	void Run();
		
}
