#include <iostream>
#include"3. Functions.hpp"
#include<string>
#include<map>
#include<vector>

//global variables from main.cpp to functions.cpp
Bank_Cus user1;
Bank_Cus user2;
Bank_Cus user3;

int main() {
	//sets the three users account numbers in advance
  user1.Account_num = 0;
	user2.Account_num = 1;
	user3.Account_num = 2;

	//return a string, checks if the user has an account
	std::string account = check_open();

	//runs if account returns no
	if(account == "no"){
		
	}
}