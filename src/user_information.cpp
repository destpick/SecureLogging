#include "../include/user_information.h"


User::User(string temp_user_name)
{
        m_user_name = temp_user_name;
}

string User:getUserName()
{
        return m_user_name;
}
