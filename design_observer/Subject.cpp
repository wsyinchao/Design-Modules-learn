#include "Subject.h"



Subject::Subject():
	m_status(0),
	m_len(0)
{
	for (int i = 0; i < 50; ++i)
	{
		m_observerArray[i] = nullptr;
	}
}


Subject::~Subject()
{
}

void Subject::setStatus(int status)
{
	this->m_status = status;
	//
	this->noticeAllObserver();
}

int Subject::getStatus()
{
	return this->m_status;
}

void Subject::attach(Observer* observer)
{
	if (m_len < 50)
	{
		m_observerArray[m_len++] = observer;
	}
}

void Subject::noticeAllObserver()
{
	for (int i = 0; i < m_len; ++i)
	{
		m_observerArray[i]->update();
	}
}
