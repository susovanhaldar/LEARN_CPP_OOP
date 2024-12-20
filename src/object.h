#ifndef OBJECT_H
#define OBJECT_H

#include "base_class.h"

class Object:public BaseClass{
    public: 
       virtual void hello();
};

class Student{
    private:
        int age;
        std::string name;
    public:
        Student(int age, std::string name);
        void display();

};

class User{
    private:
        std::string name;
        std::string email;
        std::string password;
        bool check_password(std::string old_password);
        bool logged_in = false;
    public:
        User(std::string name, std::string email, std::string password);
        void display();
        bool change_password(std::string old_password, std::string new_password);
        void forgot_password();
        void login(std::string email, std::string password);
        void logout();
        void is_logged_in();
};

#endif