
#include <list>
#include <fstream>
#include <iostream>

#include "question.h"

class bot
{
public:
	bot();
	bool isQuestion(std::string question);
	bool checkAndReply(std::string question);
	~bot();

private:
	std::list<question> questionList;
};
