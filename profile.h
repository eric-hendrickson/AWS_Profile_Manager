#ifndef PROFILE_H
#define PROFILE_H

# include <iostream>
#include <QString>

class Profile
{
public:
    Profile(char * name);
    char *getName();

private:
    char * name;
    std::string output;
    std::string region;
    std::string key_id;
    std::string secret_access_key;
};

#endif // PROFILE_H
