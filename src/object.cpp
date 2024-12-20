#include "object.h"

void Object::hello(){
    greet();
}

Student::Student(int age, std::string name){
    this->age = age;
    this->name = name;
}

void Student::display(){
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Age: "<<age<<std::endl;
}

User::User(std::string name, std::string email, std::string password){
    this->name = name;
    this->email = email;
    this->password = password;
}

void User::display(){
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Email: "<<email<<std::endl;
}

bool User::check_password(std::string old_password){
    return old_password == password;
}

bool User::change_password(std::string old_password, std::string new_password){
    if(check_password(old_password)){
        password = new_password;
        std::cout<<"Password changed successfully"<<std::endl;
        return true;
    }
    return false;
}

void User::forgot_password(){
    std::cout<<"Password send to your email"<<std::endl;
}

void User::login(std::string email, std::string password){
    if(this->email == email && this->password == password){
        logged_in = true;
        std::cout<<"Logged in successfully"<<std::endl;
    }
    else{
        std::cout<<"Invalid email or password"<<std::endl;
    }
}

void User::logout(){
    logged_in = false;
    std::cout<<"Logged out successfully"<<std::endl;
}

void User::is_logged_in(){
    if(logged_in){
        std::cout<<"User is logged in"<<std::endl;
    }
    else{
        std::cout<<"User is not logged in"<<std::endl;
    }
}