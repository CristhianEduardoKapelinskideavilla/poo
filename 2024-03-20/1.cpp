#include <iostream>

using namespace std;

class User
{
    private:
        string name;
        int age;
        FILE *profile_image;
        string email;
        string password;
    
    public:
        void set_name(string name)
        {
            this->name = name;
        }

        void set_age(int age)
        {
            this->age = age;
        }

        void set_profile_image(FILE *profile_image)
        {
            this->profile_image = profile_image;
        }

        void set_email(string email)
        {
            this -> email = email;
        }

        void set_password(string password)
        {
            this->password = password;
        }

        string get_name()
        {
            return this->name;
        }

        int get_age()
        {
            return this->age;
        }

        FILE *get_profile_image()
        {
            return this->profile_image;
        }

        string get_email()
        {
            return this->email;
        }

        string get_password()
        {
            return this->password;
        }

        void update_name(string name)
        {
            this->name = name;
        }
};

int main(void)
{
    User user_1;
    user_1.set_name("Vladmir");
    user_1.set_age(20);
    user_1.set_email("vladmir@gmail.com");
    user_1.set_password("12345678");

    cout << "Name: " << user_1.get_name() << "\nAge: " << user_1.get_age() << "\nEmail: " << user_1.get_email() << "\nPassword: " << user_1.get_password() << endl;
    return 0;
}