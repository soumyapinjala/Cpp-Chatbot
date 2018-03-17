#pragma once
#include "bot.h"

bot::bot()
{
	std::ifstream inputFile;
	inputFile.open("QA.txt");
	std::string tmpQ; // used for temporarily storing questions from text file
	std::string tmpA; // used for temporarily storing answer from text file
	system("pause");
	while (!inputFile.eof())
	{
		getline(inputFile, tmpQ, ';');
		getline(inputFile, tmpA);
		question questionObj(tmpQ, tmpA);
		questionList.push_back(questionObj);
		std::cout << questionList.front().m_getQuery() << std::endl;
		std::cout << questionList.front().m_getAnswer() << std::endl;
	}

	system("pause");
}

bool bot::isQuestion(std::string)
{
	return true;
}

bool bot::checkAndReply(std::string)
{
	return true;
}

bot::~bot()
{

}
