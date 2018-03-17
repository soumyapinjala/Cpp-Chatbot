#pragma once
#include <list>
#include <fstream>
#include <iostream>

#include "question.h"

class bot
{
public:
	bot();
	bool isQuestion(std::string input);
	bool check(std::string input);
	void reply(std::string input);
	void storeNewQuestion(std::string input);
	~bot();

private:
	std::list<question> questionList;
};
