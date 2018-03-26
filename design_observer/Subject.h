#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "Observer.h"

//#pragma once
class Subject
{
public:
	Subject();
	~Subject();

	//
	void setStatus(int status);

	//
	int getStatus();

	//ע��۲���
	void attach(Observer* observer);

	//
	void noticeAllObserver();

private:
	int m_status;//��ʾ״̬
	int m_len;//��ʾ�۲��ߵĸ���
	Observer* m_observerArray[50];//���Գ�ʹʹ�����������ÿһ�����ӹ۲���ʱ���½�һ���ڵ�
									//ʵ�ֶ�̬�۲��߸���
};

#endif // !_SUBJECT_H_


