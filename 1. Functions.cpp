#include<iostream>
#include<string>
#include<map>
#include"2. Bank_Cus.hpp"
#include<vector>

extern Bank_Cus user1;
extern Bank_Cus user2;
extern Bank_Cus user3;

Bank_Cus account_use(){
	std::string agree;//checks to see if user agrees to overide account
	std::vector<Bank_Cus> user = {user1, user2, user3};
	for(Bank_Cus c: user){
		if(c.account_used == false) return c;
	}
	/*code abovelooks through to see if all acounts have been used, if have return the account
	Bottom code only runs if there isn't any accounts available*/
	do{
		std::cout<<"All accounts have been used, seems like we have to overide the first one, is that ok?";
		std::cout<<"pls input yes or no.";
		std::cin>>agree;
		for(auto c : agree)c = std::tolower(c);
	}while(agree != "yes" && agree != "no");
	if(agree == "yes")return user[0];//haven't added the clear function in Bank_Cus yet
}

std::string check_open(){	
	//function returns yes or no depending on the user response of having a account or not
	std::string account;
	std::cout<<"Do you have an account with us yet?"<<std::endl;
	std::cin>>account;
	for(char &c : account)c = tolower(c);
	while(account != "yes" && account != "no"){
		std::cout<<"pls input either yes or no"<<std::endl;
		std::getline(std::cin, account);
		for(char &c : account)c = tolower(c);
	}
	return account;
}
//sign up function can only be created after the account from account_use has been chosen
void sign_up(){
	
	
}