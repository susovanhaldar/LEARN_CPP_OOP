#include <iostream>
#include "object.h"


class Main{
    // create a function that creates object of classes and call functions
    private:
    User* create_user(std::string name, std::string email, std::string password){
        if(!Validator::validate_email(email) || !Validator::validate_password(password) || !Validator::validate_name(name)){
            std::cout<<"Invalid email"<<std::endl;
            return NULL;
        }
        User *user = new User(name, email, password);
        return user;
    }
    public:
    void run(){
        // Student susovan(26, "Susovan Haldar");
        // susovan.display();
        User* user = create_user("Susovan Haldar", "s.haldar@gmail.com", "pwd@123");
        if(user == NULL){
            std::cout<<"User not created"<<std::endl;
            return;
        }
        user->display();
        user->change_password("pwd@123", "pwd@1234");
        user->login("s.haldar@gmail.com", "pwd@1234");
        user->is_logged_in();
        user->logout();

    }

};

int main(){
    Main main_class;
    main_class.run();

    return 0;
}

