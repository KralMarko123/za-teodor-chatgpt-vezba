#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include "Logger.h"

class UserInterface
{

	private:

		Logger logger;
		std::string question;

	public: 

		void WriteQuestion() {
			std::cout << "Marko";
		}


		void StartQuestions() {
			while (true) {

				std::cout << "Please enter a question:\n";

				std::getline(std::cin, question);

				if (question == "/Exit")
				{
					break;
				}

				std::cout << "Your question was: " + question;

				logger.LogToFile("User asked question: " + question);

				AddMultipleNewLines(2);
			}
		}

		void AddNewLine() {
			std::cout << "\n";
		}

		void AddMultipleNewLines(int n) {
			for (int i = 0; i < n; i++) {
				std::cout << "\n";
			}
		}
};

