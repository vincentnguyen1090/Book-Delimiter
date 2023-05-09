//
// Created by vince on 1/29/2023.
//
#include "functions.h"

std::vector<std::string> split(std::string key, std::string delimiter)
{
    std::string word = "";
    std::vector<std::string> res;

    //delimiter == -+
    while (key.find(delimiter) != std::string::npos) {
        int position = key.find(delimiter);
        word = key.substr(0, position);
        res.push_back(word);
        key.erase(0, position + delimiter.length());
    }
    res.push_back(key);
    return res;
}