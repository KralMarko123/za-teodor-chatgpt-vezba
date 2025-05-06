#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "UserInterface.h"

int main()
{
    Logger logger;
    UserInterface userInterface;

    logger.LogToFile("User started questionnaire");

    std::cout << "Welcome to Teodor's questionnaire using ChatGPT!\n";
    std::cout << "Feel free to ask your questions, enter '/Exit' to exit the application.\n";

    userInterface.AddMultipleNewLines(2);
    userInterface.StartQuestions();


    logger.LogToFile("User exited questionnaire");

    std::cout << "So sad to see you go, thank you for using Teodor's questionnaire!\n";
}