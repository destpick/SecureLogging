/***
  * Programmer: Desta Pickering
  * Started: March 3, 2019
  * Description: Class will store users information.
  ***/

#include <iostream>
using namespace std;

class User
{
        private:
            string m_user_name;
                        

        public:
            User(string user_name);
            string getUserName();
};

