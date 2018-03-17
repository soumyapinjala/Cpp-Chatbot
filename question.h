#include <string>

class question
{
public:
	question();
	question(std::string question, std::string answer);
	std::string m_getQuery();
	std::string m_getAnswer();
	~question();

private:
	std::string query;
	std::string answer;

};