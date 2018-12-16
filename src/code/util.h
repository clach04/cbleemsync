/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   util.h
 * Author: screemer
 *
 * Created on 11 grudnia 2018, 23:12
 */

#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <unistd.h>

using namespace std;

class DirEntry {
public:
    string name;
    bool dir;

    DirEntry(string name, bool dir) {
        this->dir = dir;
        this->name = name;
    }

};

class Util {
public:
    static const char *separator();

    // File System operations
    static vector<DirEntry> dir(string path);

    static bool copy(string source, string dest);

    static bool exists(const std::string &name);

    static bool createDir(const std::string name);

    static std::string getWorkingPath();

    static bool isInteger(const char *input);

    static int strcicmp(char const *a, char const *b);



};




#endif /* UTIL_H */
