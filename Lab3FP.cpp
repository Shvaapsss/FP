#include <iostream>
using namespace std;
int main() {
    const char inputString[] = "apple88bird ice0bow*^#mile";
    const char* delimiters = " _!@#$%^&*()+=1234567890-=";
    const char* vowels = "aeiouAEIOU";
    const char* consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    int wordCount = 0;
    int vowelCount = 0;
    int consonantCount = 0;
    bool insideWord = false;

    for (int i = 0; inputString[i] != '\0'; i++) {
        char currentChar = inputString[i];

        // Проверяем, является ли текущий символ разделителем
        bool isDelimiter = false;
        for (int j = 0; delimiters[j] != '\0'; j++) {
            if (currentChar == delimiters[j]) {
                isDelimiter = true;
                break;
            }
        }

        if (!isDelimiter) {
            if (!insideWord) {
                insideWord = true;
                wordCount++;
            }

            // Проверяем, является ли буква гласной или согласной
            // Проверка гласных
            for (int j = 0; vowels[j] != '\0'; j++) {
                if (currentChar == vowels[j]) {
                    vowelCount++;
                    break;
                }
            }
            // Проверка согласных
            for (int j = 0; consonants[j] != '\0'; j++) {
                if (currentChar == consonants[j]) {
                    consonantCount++;
                    break;
                }
            }
        } else {
            insideWord = false;
        }
    }

    cout << "Words number: " << wordCount << endl;
    cout << "Vowels number: " << vowelCount << endl;
    cout << "Consonants number: " << consonantCount << endl;

    return 0;
}//
// Created by nicki on 11/7/2023.
//
