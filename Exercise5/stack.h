#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace  std;

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize() {
		head = 0;
	}
	Stack() {// empty stsckj
      head = 0;
    }

    Stack(int n) {// builds stack
      head = 0;
      double element = 1;
      for (int i = 0; i < n; i++) {
        push(element);
        element += 0.1;
      }
    }

    ~Stack() { //desuctor
        double data ;
      while (head != 0) {
            data = pop();
       std::cout << data << " ";
      }
    }

	
	void push(double dat) {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop() {
		if(head == 0){
			return 0;
		}
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup() {
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};

#endif