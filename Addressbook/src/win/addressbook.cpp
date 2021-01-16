//
// Created by CYL on 2020/8/30.
//

#include "addressbook.h"
#include <fstream>
#include <iostream>


const char * datapath = "../.data.txt";


address::addressbook::addressbook() {
    personList = new person [maxNum];
    personNum = 0;

    std::ifstream fin(datapath);

    if (!fin) {
        firstRun();
        fin.close();
    }

    else {
        char ch;

        do {
            std::cout << "Data found! Are you want to import the book? (y/n): ";
            std::cin >> ch;
            if (ch == 'y' || ch == 'n')
                break;
            else std::cout << "Input uncorrectly! " << std::endl;
        }while (true);

        if (ch == 'n') {
            fin.close();
            return;
        }
        fin >> personNum;
        for (int i = 1; i <= personNum; i++)
            fin >> personList[i].mName
                >> personList[i].mAge
                >> personList[i].mAddress;
        fin.close();
    }
}


address::addressbook::~addressbook() { delete [] personList; }


void address::addressbook::firstRun() {
    std::ofstream fout(datapath);
    std::cout << "Type \"HELP\" for help. " << std::endl;
}


void address::addressbook::help() {
    std::cout << std::endl;
    std::cout << "Commands:                                           " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "ADDPERSON: add a person to the book.                " << std::endl;
    std::cout << "SHOWPERSON: show all the person in the book.        " << std::endl;
    std::cout << "FINDPERSON: find a person in the book.              " << std::endl;
    std::cout << "RENAMEPERSON: rename a person in the book           " << std::endl;
    std::cout << "DELETEPERSON: delete a person in the book.          " << std::endl;
    std::cout << "DELETEALLPERSON: delete all the person in the book. " << std::endl;
    std::cout << "QUIT/EXIT: quit the program.                        " << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << std::endl;
}


void address::addressbook::addPerson() {
    personNum++;

    std::cout << "Enter the name: ";
    std::cin >> personList[personNum].mName;
    std::cout << "Enter the age: ";
    std::cin >> personList[personNum].mAge;
    std::cout << "Enter the address: ";
    std::cin >> personList[personNum].mAddress;

    std::cout << "Add person successfully! " << std::endl << std::endl;
}


void address::addressbook::showPerson() {
    std::cout << "NAME\tAGE\tADDRESS" << std::endl;
    for (int i = 1; i <= personNum; i++)
        std::cout << personList[i].mName << '\t'
                  << personList[i].mAge << '\t'
                  << personList[i].mAddress << std::endl;
}


void address::addressbook::findPerson() {
    std::string name;

    std::cout << "Enter the name: ";
    std::cin >> name;
    int rtVal = personExist(name);

    if (rtVal == -1)
        std::cout << "Person not found!" << std::endl;
    else
        std::cout << "NAME\tAGE\tADDRESS" << std::endl
                  << personList[rtVal].mName << '\t'
                  << personList[rtVal].mAge << '\t'
                  << personList[rtVal].mAddress << std::endl;
}


void address::addressbook::renamePerson() {
    std::string name;

    std::cout << "Enter the name: ";
    std::cin >> name;
    int rtVal = personExist(name);

    if (rtVal == -1) {
        std::cout << "Person not found!" << std::endl;
    }
    else {
        std::cout << "Enter the name: ";
        std::cin >> personList[rtVal].mName;
        std::cout << "Enter the age: ";
        std::cin >> personList[rtVal].mAge;
        std::cout << "Enter the address: ";
        std::cin >> personList[rtVal].mAddress;

        std::cout << "Rename person successfully! " << std::endl;
    }
}


void address::addressbook::deletePerson() {
    std::string name;

    std::cout << "Enter the name: ";
    std::cin >> name;
    int rtVal = personExist(name);

    if (rtVal == -1)
        std::cout << "Person not found!" << std::endl;
    else {
        for (int i = rtVal; i < personNum; i++) {
            personList[i].mName = personList[i+1].mName;
            personList[i].mAge = personList[i+1].mAge;
            personList[i].mAddress = personList[i+1].mAddress;
        }
        personNum--;

        std::cout << "Delete person successfully! " << std::endl;
    }
}


void address::addressbook::deleteAllPerson() {
    personNum = 0;
    std::cout << "Delete all person successfully! " << std::endl;
}


bool address::addressbook::quit() {
    char ch;

    do {
        std::cout << "Are you really want to quit the program? (y/n): ";
        std::cin >> ch;
        if (ch == 'y' || ch == 'n')
            break;
        else std::cout << "Input uncorrectly! " << std::endl;
    }while (true);

    if (ch == 'n')  return false;

    do {
        std::cout << "Are you want to save the book? (y/n): ";
        std::cin >> ch;
        if (ch == 'y' || ch == 'n')
            break;
        else std::cout << "Input uncorrectly! " << std::endl;
    }while (true);

    if (ch == 'n')
        ;
    else {
        std::ofstream fout(datapath);
        fout << personNum << std::endl;
        for (int i = 1; i <= personNum; i++)
            fout << personList[i].mName << ' '
                 << personList[i].mAge << ' '
                 << personList[i].mAddress << std::endl;
        fout.close();

        std::cout << "Save book successfully! " << std::endl;
    }

    return true;
}


int address::addressbook::personExist(std::string toFind) {
    for (int i = 1; i <= personNum; i++)
        if (personList[i].mName == toFind)
            return i;
    return -1;
}


// !ADDRESSBOOK.cpp
