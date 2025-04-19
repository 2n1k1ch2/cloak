#include <string>
class User{
private:
	std::string login_;
	std::u32string nickname_;
	Role role_;
	Status status_;
	UserConnectionManager manager_connection_;
public: 
	enum class Role {
		REGULAR,
		MODERATOR,
		ADMIN,
		OWNER
	}
	enum class Status{
		offline,
		online
	}
	// --rights--	
	bool can_ban(return role_ >=MODERATOR;)
	bool can_give_timeout(return role_ >=MODERATOR;)
	bool can_unban(return role_ >=MODERATOR;)
	bool can_edit_chatroom(return role_ >=ADMIN;)

	// --getters--
	const std::string& login() const { return login_; }
    const std::u32string& nickname() const { return nickname_; }
    Role role() const { return role_; }

}
