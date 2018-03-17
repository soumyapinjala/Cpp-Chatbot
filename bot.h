#pragma once
#include <list>
#include "question.h"
class bot
{
public:
	bot();
	bool checkQuestion();
	~bot();

private:
	std::list<question> list;
};