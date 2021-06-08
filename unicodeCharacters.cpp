// Copyright (c) 421 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: June 421
// This program converts characters into unicode hexadecimal

#include <iostream>
#include <string>
#include <map>
#include <list>

std::list<std::string> Conversion(std::string userInput) {
    // this function converts text to unicode

    // declaration
    std::list<std::string> result;  // list
    std::map<std::string, std::string> dictionary;  // map

    // Adding Items
    dictionary.insert(std::pair<std::string, std::string>(" ", "0x20"));
    dictionary.insert(std::pair<std::string, std::string>("!", "0x21"));
    dictionary.insert(std::pair<std::string, std::string>("#", "0x23"));
    dictionary.insert(std::pair<std::string, std::string>("$", "0x24"));
    dictionary.insert(std::pair<std::string, std::string>("%", "0x25"));
    dictionary.insert(std::pair<std::string, std::string>("&", "0x26"));
    dictionary.insert(std::pair<std::string, std::string>("'", "0x27"));
    dictionary.insert(std::pair<std::string, std::string>("(", "0x28"));
    dictionary.insert(std::pair<std::string, std::string>(")", "0x29"));
    dictionary.insert(std::pair<std::string, std::string>("*", "0x2a"));
    dictionary.insert(std::pair<std::string, std::string>("+", "0x2b"));
    dictionary.insert(std::pair<std::string, std::string>(",", "0x2c"));
    dictionary.insert(std::pair<std::string, std::string>("-", "0x2d"));
    dictionary.insert(std::pair<std::string, std::string>(".", "0x2e"));
    dictionary.insert(std::pair<std::string, std::string>("/", "0x2f"));
    dictionary.insert(std::pair<std::string, std::string>("0", "0x30"));
    dictionary.insert(std::pair<std::string, std::string>("1", "0x31"));
    dictionary.insert(std::pair<std::string, std::string>("2", "0x32"));
    dictionary.insert(std::pair<std::string, std::string>("3", "0x33"));
    dictionary.insert(std::pair<std::string, std::string>("4", "0x34"));
    dictionary.insert(std::pair<std::string, std::string>("5", "0x35"));
    dictionary.insert(std::pair<std::string, std::string>("6", "0x36"));
    dictionary.insert(std::pair<std::string, std::string>("7", "0x37"));
    dictionary.insert(std::pair<std::string, std::string>("8", "0x38"));
    dictionary.insert(std::pair<std::string, std::string>("9", "0x39"));
    dictionary.insert(std::pair<std::string, std::string>(":", "0x3a"));
    dictionary.insert(std::pair<std::string, std::string>(";", "0x3b"));
    dictionary.insert(std::pair<std::string, std::string>("<", "0x3c"));
    dictionary.insert(std::pair<std::string, std::string>("=", "0x3d"));
    dictionary.insert(std::pair<std::string, std::string>(">", "0x3e"));
    dictionary.insert(std::pair<std::string, std::string>("?", "0x3f"));
    dictionary.insert(std::pair<std::string, std::string>("@", "0x40"));
    dictionary.insert(std::pair<std::string, std::string>("A", "0x41"));
    dictionary.insert(std::pair<std::string, std::string>("B", "0x42"));
    dictionary.insert(std::pair<std::string, std::string>("C", "0x43"));
    dictionary.insert(std::pair<std::string, std::string>("D", "0x44"));
    dictionary.insert(std::pair<std::string, std::string>("E", "0x45"));
    dictionary.insert(std::pair<std::string, std::string>("F", "0x46"));
    dictionary.insert(std::pair<std::string, std::string>("G", "0x47"));
    dictionary.insert(std::pair<std::string, std::string>("H", "0x48"));
    dictionary.insert(std::pair<std::string, std::string>("I", "0x49"));
    dictionary.insert(std::pair<std::string, std::string>("J", "0x4a"));
    dictionary.insert(std::pair<std::string, std::string>("K", "0x4b"));
    dictionary.insert(std::pair<std::string, std::string>("L", "0x4c"));
    dictionary.insert(std::pair<std::string, std::string>("M", "0x4d"));
    dictionary.insert(std::pair<std::string, std::string>("N", "0x4e"));
    dictionary.insert(std::pair<std::string, std::string>("O", "0x4f"));
    dictionary.insert(std::pair<std::string, std::string>("P", "0x50"));
    dictionary.insert(std::pair<std::string, std::string>("Q", "0x51"));
    dictionary.insert(std::pair<std::string, std::string>("R", "0x52"));
    dictionary.insert(std::pair<std::string, std::string>("S", "0x53"));
    dictionary.insert(std::pair<std::string, std::string>("T", "0x54"));
    dictionary.insert(std::pair<std::string, std::string>("U", "0x55"));
    dictionary.insert(std::pair<std::string, std::string>("V", "0x56"));
    dictionary.insert(std::pair<std::string, std::string>("W", "0x57"));
    dictionary.insert(std::pair<std::string, std::string>("X", "0x58"));
    dictionary.insert(std::pair<std::string, std::string>("Y", "0x59"));
    dictionary.insert(std::pair<std::string, std::string>("Z", "0x5a"));
    dictionary.insert(std::pair<std::string, std::string>("[", "0x5b"));
    dictionary.insert(std::pair<std::string, std::string>("]", "0x5d"));
    dictionary.insert(std::pair<std::string, std::string>("^", "0x5e"));
    dictionary.insert(std::pair<std::string, std::string>("_", "0x5f"));
    dictionary.insert(std::pair<std::string, std::string>("`", "0x60"));
    dictionary.insert(std::pair<std::string, std::string>("a", "0x61"));
    dictionary.insert(std::pair<std::string, std::string>("b", "0x62"));
    dictionary.insert(std::pair<std::string, std::string>("c", "0x63"));
    dictionary.insert(std::pair<std::string, std::string>("d", "0x64"));
    dictionary.insert(std::pair<std::string, std::string>("e", "0x65"));
    dictionary.insert(std::pair<std::string, std::string>("f", "0x66"));
    dictionary.insert(std::pair<std::string, std::string>("g", "0x67"));
    dictionary.insert(std::pair<std::string, std::string>("h", "0x68"));
    dictionary.insert(std::pair<std::string, std::string>("i", "0x69"));
    dictionary.insert(std::pair<std::string, std::string>("j", "0x6a"));
    dictionary.insert(std::pair<std::string, std::string>("k", "0x6b"));
    dictionary.insert(std::pair<std::string, std::string>("l", "0x6c"));
    dictionary.insert(std::pair<std::string, std::string>("m", "0x6d"));
    dictionary.insert(std::pair<std::string, std::string>("n", "0x6e"));
    dictionary.insert(std::pair<std::string, std::string>("o", "0x6f"));
    dictionary.insert(std::pair<std::string, std::string>("p", "0x70"));
    dictionary.insert(std::pair<std::string, std::string>("q", "0x71"));
    dictionary.insert(std::pair<std::string, std::string>("r", "0x72"));
    dictionary.insert(std::pair<std::string, std::string>("s", "0x73"));
    dictionary.insert(std::pair<std::string, std::string>("t", "0x74"));
    dictionary.insert(std::pair<std::string, std::string>("u", "0x75"));
    dictionary.insert(std::pair<std::string, std::string>("v", "0x76"));
    dictionary.insert(std::pair<std::string, std::string>("w", "0x77"));
    dictionary.insert(std::pair<std::string, std::string>("x", "0x78"));
    dictionary.insert(std::pair<std::string, std::string>("y", "0x79"));
    dictionary.insert(std::pair<std::string, std::string>("z", "0x7a"));
    dictionary.insert(std::pair<std::string, std::string>("{", "0x7b"));
    dictionary.insert(std::pair<std::string, std::string>("|", "0x7c"));
    dictionary.insert(std::pair<std::string, std::string>("}", "0x7d"));
    dictionary.insert(std::pair<std::string, std::string>("~", "0x7e"));

    for (int counter = 0; counter < userInput.length(); counter++) {
        std::string character(1, userInput.at(counter));
        result.push_back(dictionary[character]);
    }

    return result;
}

int main() {
    // this function receives input and calls a function

    // declaration
    std::string userInput;
    std::list<std::string> translation;

    // input
    std::cout << "Enter the text that you want to convert to unicode: ";
    std::cin >> userInput;

    // call function
    translation = Conversion(userInput);

    // output
    std::cout << "'"<< userInput << "' in hexadecimal is:\n[ ";
    for (std::string counter : translation) {
        std::cout << "'" << counter << "'" << " ";
    }
    std::cout << "]" << std::endl;
}
