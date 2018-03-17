#pragma once
#include "bot.h"


bot::bot()
{
	std::ifstream inputFile;
	inputFile.open("QA.txt");
	std::string tmpQ; // used for temporarily storing questions from text file
	std::string tmpA; // used for temporarily storing answer from text file

	while (!inputFile.eof()) //loop until end of file is reached
	{
		getline(inputFile, tmpQ, ';');	// read each line of file one at a time until end of file
		getline(inputFile, tmpA);		// store questions and answers from file into two different variables
		question questionObj(tmpQ, tmpA); // put variables in an object
		questionList.push_back(questionObj); // store the object in a node in a doubly linked list
	}
}

bool bot::isQuestion(std::string input) // check if user input is formatted correctly ('?' at end of question return true if correct format, return false if inncorect format
{
	if (input.empty())
	{
		return false;
	}
	if (input.back() == '?')
	{
		return true;
	}
	else if (input.back() != '?')
	{
		return false;
	}
}

bool bot::check(std::string input)
{
	std::list<question>::iterator it;
	it = questionList.begin();

	for (it; it != questionList.end(); it++)
	{
		if (input == it->m_getQuery())
		{
			return true;
		}
	}
	return false;
	
}

void bot::reply(std::string input)
{
	std::list<question>::iterator it;
	it = questionList.begin();

	for (it; it != questionList.end(); it++)
	{
		if (input == it->m_getQuery())
		{
			std::cout << it->m_getAnswer() << std::endl;
		}
	}
}

void bot::storeNewQuestion(std::string input)
{
	std::string tmp;
	std::cout << "Hmmm . . . that's a good question! Maybe you could help me? " << std::endl << input << std::endl;
	getline(std::cin, tmp); // ask user to answer the question
	question new_query(input, tmp); // store new question and answer in an object
	questionList.push_back(new_query); // store that object in a node inside of the doubly linked list
	std::ofstream outputFile;
	outputFile.open("QA.txt", std::ios::app);
	if (outputFile.is_open())
	{
		outputFile << std::endl << input << ";" << tmp;
	}
	else
	{
		std::cout << "Error, file didn't open." << std::endl;
	}
	outputFile.close();


}

bot::~bot()
{

}
