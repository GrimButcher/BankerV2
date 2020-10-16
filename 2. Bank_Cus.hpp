#include<iostream>
#include<string>
#include<map>

class Bank_Cus{
	public:
		//account details
		int Age, Account_num;
		std::string First_name, Last_name;
		double Money_bal;
		std::string login, password;
		//boolean to see if the account has been used
		bool account_used = false;
};