#pragma once
#include <iostream>
#include "clsDbLinkedList.h"

using namespace std;
template <class T>

class clsMyQueue {

protected:

	clsDbLinkedList <T> _MyList;

public:

	void push(T item) {
		_MyList.InsertAtEnd(item);
	}

	void pop() {
		_MyList.DeleteFirstNode();
	}

	void Print() {
		_MyList.PrintList();
	}

	int Size() {
		return _MyList.Size();
	}

	bool isEMpty() {
		return _MyList.IsEmpty();
	}

	T front() {
		return _MyList.GetItem(0);
	}

	T back() {
		return _MyList.GetItem(Size() - 1);
	}

	//-------------

	T GetItem(int index) {
		return _MyList.GetItem(index);
	}

	void Reverse() {
		_MyList.Reverse();
	}


	void UpdateItem(int index, T newValue) {
		_MyList.UpdateItem(index, newValue);
	}

	void InsertAfter(int index, T newValue) {
		_MyList.InsertAfter(index, newValue);
	}

	void InsertAtFront(T value) {
		_MyList.InsertAtBeginning(value);
	}

	void InsertAtBack(T value) {
		_MyList.InsertAtEnd(value);
	}

	void Clear() {
		_MyList.Clear();
	}
};