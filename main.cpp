/*
Jack Martin

ChatBot
Version 1.0

This program creates a simple chatbot

Allows user to ask bot a question
If the bot knows the answer to the question, the bot will reply with the answer
If the bot does not know the answer to the question, the bot will ask the user the same question and store the answer for future use
*/


#include "bot.h"
#include "question.h"


int main()
{

	bot bot();

	while (true) 
	{
		std::string userInput;
		std::getline(std::cin, userInput);
	}


	system("pause");
	return 0;
}
