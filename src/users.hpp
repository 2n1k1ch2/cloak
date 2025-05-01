#include <string>
#include "userconnectionmanager.hpp"
class User{
public:
	enum class Role {
        REGULAR,
        MODERATOR,
        ADMIN,
        OWNER
    };
    enum class Status {
        OFFLINE,
        ONLINE
    };
private:
	std::string login_;
	std::u32string nickname_;
	Role role_;
	User::Status status_;
	UserConnectionManager manager_connection_;
public: 
	// --rights--	
	bool can_ban(){return role_ >=Role::MODERATOR; }
	bool can_give_timeout(){return role_ >=Role::MODERATOR;}
	bool can_unban() {return role_ >=Role::MODERATOR;}
	bool can_edit_chatroom(){return role_ >=Role::ADMIN;}

	// --getters--
	const std::string& login() const { return login_; }
    const std::u32string& nickname() const { return nickname_; }
    Role role() const { return role_; }

};
