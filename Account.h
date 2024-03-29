#pragma once
//#include "DevLibraries.h"
#include "Person.h"
//#include "Library.h"

enum AccountStatus
{
    Active,
    Canceled
};

class Account
{
private:
    ull aID;
    std::string aUsername, aPassword;
    AccountStatus aStatus;
    Person aInfo;
    std::vector<std::string> aBooksBorrowed;
public: 
    Account();
    Account(ull ID, std::string US, std::string Pass, Person info);

public:
    bool checkLogOut(std::string US, std::string Pass);
    bool changePass(std::string Pass);
    bool resetPass();
    bool updateProfile(std::vector<std::string> profile);
    bool blockAccount();
    void updateBooksBorrowed(std::vector<std::string> list);
    std::vector<std::string> displayBorrowedBooks();
     
    Person getInfo();
    std::string getUserName();
    ull getID();
    std::string getPassword();
    AccountStatus getStatus();
    void updateInfo(Person info);
    void updateUser(std::string us, std::string pw, ull id, AccountStatus status);

    //test
    std::string toString() const;
};