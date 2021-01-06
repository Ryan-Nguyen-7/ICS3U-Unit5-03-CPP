// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program uses a function to convert grade level
//     to a percentage grade


#include <iostream>
#include <string>
#include <iomanip>


int CalculatePercentage(std::string gradeLevel) {
    // this function converts grade levels to percentage grade
    int gradePercentage;

    // process
    if (gradeLevel == "r") {
        gradePercentage = 25;
    } else if (gradeLevel == "1-") {
        gradePercentage = 51;
    } else if (gradeLevel == "1") {
        gradePercentage = 55;
    } else if (gradeLevel == "1+") {
        gradePercentage = 58;
    } else if (gradeLevel == "2-") {
        gradePercentage = 61;
    } else if (gradeLevel == "2") {
        gradePercentage = 65;
    } else if (gradeLevel == "2+") {
        gradePercentage = 68;
    } else if (gradeLevel == "3-") {
        gradePercentage = 71;
    } else if (gradeLevel == "3") {
        gradePercentage = 75;
    } else if (gradeLevel == "3+") {
        gradePercentage = 78;
    } else if (gradeLevel == "4-") {
        gradePercentage = 83;
    } else if (gradeLevel == "4") {
        gradePercentage = 91;
    } else if (gradeLevel == "4+") {
        gradePercentage = 97;
    } else {
        gradePercentage = -1;
    }
        return gradePercentage;
}
int main() {
    // this function gets grade level and outputs the percentage
    int gradePercentage;
    std::string gradeLevel;

    std::cout << "Enter grade level: ";
    std::cin >> gradeLevel;
    std::cout << "" << std::endl;

    // calls CalculatePercentage
    gradePercentage = CalculatePercentage(gradeLevel);
    if (gradePercentage == -1) {
        std::cout << "Invalid grade level" << std::endl;
    } else {
        std::cout << "Grade percentage: " << gradePercentage << "%"
                  << std::endl;
    }
}
