#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cctype>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

void setCase(std::string &word) {
    word[0] = std::toupper(word[0]);
    for (int i = 1; i < word.size(); ++i) {
        word[i] = std::tolower(word[i]);
    }
}

bool checkMinLength(std::string &word) {
    if (word.size() < 3) {
        return false;
    }
    return true;
}

bool checkTrailing(std::string &word) {
    if (ispunct(word[word.size() - 1])) {
        return false;
    }
    return true;
}

bool noInt(std::string &word) {
    for (int i = 0; i < word.size(); i++) {
        if (isdigit(word[i])) {
            return false;
        }
    }
    return true;
}

bool noApos(std::string &word) {
    if (!isalpha(word[word.size() - 1])) {
        return false;
    }
    return true;
}

bool isUnique(std::string &word, std::vector<std::string> &words) {
    for (int i = 0; i < words.size(); ++i) {
        if (word == words[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> createPassWords(std::vector<std::string> &words) {

    srand((unsigned int) time(NULL));
    std::vector<std::string> passWord;
    std::vector<std::string> passWords;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 4; j++) {
            int random = rand() % (words.size() - 0) + 0;

            while (!isUnique(words[random], passWord)) {
                random = rand() % (words.size() - 0) + 0;
            }

            passWord.push_back(words[random]);

        }
        passWords.push_back(passWord[0] + " " + passWord[1] + " " + passWord[2] + " " + passWord[3] + "1");
        passWord.clear();
    }

    for (int i = 0; i < 20; i++) {
        std::cout << i + 1 << " : " << passWords[i] << std::endl;
    }

    return passWords;
}

int main(int argc, char *argv[]) {
    char arg[]  = "input.txt";
    char *input = arg;

    if(argc > 1){
        std::cout << "arg woorked" << std::endl;
        input = argv[1];
    }

    std::ifstream myFile(input);

    if (!myFile.is_open()) {
        std::cout << "Couldn't open the file.";
        return 0;
    }

    std::vector<std::string> words;
    std::string word;

    while (myFile >> word) {
        setCase(word);
        if (checkMinLength(word) && checkTrailing(word) && noInt(word) && isUnique(word, words) && noApos(word)) {
            words.push_back(word);
        }
    }

    createPassWords(words);
    myFile.close();

    return 0;

}