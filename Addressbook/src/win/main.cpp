#include "addressbook.h"
#include <iostream>
#include <ctype.h>

#define BR break

int rtCmd(std::string);
std::string upStr(std::string);

int main() {
    address::addressbook book;

    while (true) {
        std::string cmd = "";

        std::cout << ">>> ";
        std::cin >> cmd;

        switch (rtCmd(cmd)) {
            case 0:
                std::cout << "This isn't a command. Please input again." << std::endl;
                BR;

            case 1:
                book.addPerson();
                BR;

            case 2:
                book.showPerson();
                BR;

            case 3:
                book.findPerson();
                BR;

            case 4:
                book.renamePerson();
                BR;

            case 5:
                book.deletePerson();
                BR;

            case 6:
                book.deleteAllPerson();
                BR;

            case 8:
                book.help();
                BR;

            case 7:
                bool rtVal = book.quit();
                if (rtVal)
                    return 0;
                else BR;
        }
    }
}

int rtCmd(std::string cmd) {
    if (upStr(cmd) == "ADDPERSON")                           return 1;
    else if (upStr(cmd) == "SHOWPERSON")                     return 2;
    else if (upStr(cmd) == "FINDPERSON")                     return 3;
    else if (upStr(cmd) == "RENAMEPERSON")                   return 4;
    else if (upStr(cmd) == "DELETEPERSON")                   return 5;
    else if (upStr(cmd) == "DELETEALLPERSON")                return 6;
    else if (upStr(cmd) == "QUIT" || upStr(cmd) == "EXIT")   return 7;
    else if (upStr(cmd) == "HELP")                           return 8;
    else                                                     return 0;
}

std::string upStr(std::string oriStr) {
    for (auto & c: oriStr) c = toupper(c);
    return oriStr;
}