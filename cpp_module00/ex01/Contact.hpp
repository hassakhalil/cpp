#ifndef CONTACT_H
#define  CONTACT_H

class Contact {
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public: 
    void  fill_field(int index);
    std::string  get_field(int index);
};
#endif