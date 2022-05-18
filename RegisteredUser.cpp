#include "RegisteredUser.h"
#include <cstring>
RegisteredUser::RegisteredUser()
{
strcpy(Username, "");
strcpy(Password, "");
}
RegisteredUser::RegisteredUser(char pUsername[],char pPassword[]):UnregisteredUser( pcustid, pname,   paddress,  pemail , pnumber )
{
  strcpy(Username,pUsername);
  strcpy(Password,pPassword);
}
void RegisteredUser::setUsername(char pname[] )
{
  
}
void RegisteredUser::setPassword(char pwd [])
{
  
}
void RegisteredUser::displayDetails()
{

}
void RegisteredUser::login()
{ 
