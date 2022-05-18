#include"Food.h"
#include"UnregisteredUser.h"


class RegisteredUser :public UnregisteredUser
{
protected:
char Username[10];
char Password[10];

public:

RegisteredUser();
RegisteredUser(char pUsername[],char pPassword[]);
void setUsername(char pname[] );
void setPassword(char pwd []);
void displayDetails();
void login();
void logout();
void searchFood(Food *pfood);
~RegisteredUser();
};
