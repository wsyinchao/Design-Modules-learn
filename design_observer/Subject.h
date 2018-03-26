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

	//注册观察者
	void attach(Observer* observer);

	//
	void noticeAllObserver();

private:
	int m_status;//表示状态
	int m_len;//表示观察者的个数
	Observer* m_observerArray[50];//可以常使使用链表替代，每一次增加观察者时，新建一个节点
									//实现动态观察者个数
};

#endif // !_SUBJECT_H_


