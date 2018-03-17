#include "question.h"

question::question()
{
	query = "";
	answer = "";
}

question::question(std::string question, std::string answer)
{
	query = question;
	this->answer = answer;
}

std::string question::m_getQuery()
{
	return query;
}

std::string question::m_getAnswer()
{
	return answer;
}

question::~question()
{
}
