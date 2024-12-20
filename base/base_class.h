#ifndef BASE_H
#define BASE_H

#include<iostream>

class BaseClass{
    public:
    virtual void greet();
};

class Validator{
    public:
    static bool validate_email(std::string email);
    static bool validate_password(std::string password);
    static bool validate_name(std::string name);
    static bool validate_age(int age);
    
};

#endif