//
// Created by CYL on 2020/8/30.
//

#ifndef ADDRESSBOOK_ADDRESSBOOK_H
#define ADDRESSBOOK_ADDRESSBOOK_H

#include <string>

namespace address {
    const int maxNum = 1e5 + 10;

    struct person {
        std::string mName,
                    mAddress;
        int mAge;
    };

    class addressbook {
    private:
        person * personList;
        unsigned personNum;

    public:
        addressbook();
        ~addressbook();

        void firstRun();
        void help();

        void addPerson();
        void showPerson();
        void findPerson();
        void renamePerson();
        void deletePerson();
        void deleteAllPerson();
        bool quit();

        int personExist(std::string);
    };

}

#endif //ADDRESSBOOK_ADDRESSBOOK_H
