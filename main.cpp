// LearningC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/cpp

#include <iostream>
#include <Windows.h>
#include <vector>
#include <sstream>

std::string reverse_words(const std::string& str) {
    std::istringstream iss(str);
    std::string word;
    std::vector < std::string> words;
    while (iss >> word) {
        words.push_back(word);
    }
     
    word = "";
    for (int i = words.size() - 1; i >= 0; i--) {
        word = word + " " + words[i];
    }

    std::cout << word;
    return word;
}


int main()
{
    std::string nombre;
    nombre = reverse_words("hello world!");
}
