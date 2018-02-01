#include "profile.h"

Profile::Profile(char * name) {
    this->name = name;
}

char * Profile::getName() {
    return this->name;
}
