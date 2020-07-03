#ifndef STACK_H
#define STACK_H

#include "Nodo.h"

class Stack
{
	protected:
		Nodo* head;
	public:
		Stack(){
            head = nullptr;
        };
        Stack(Nodo* _head){
            head = _head;
        };
        Nodo* pop(){
            Nodo* temp_head = head;
            head = head->getNextNodo();
            return temp_head;
        };
        Nodo* top(){
            return head;
        };
        void push(Nodo* _node){
            _node->setNextNodo(head);
            head = _node;
        };
        void delete_stack(Nodo* _node){
            if (_node->getNextNodo() != nullptr){
                delete_stack(_node->getNextNodo());
            }            
            delete _node;
        }
        ~Stack(){
            delete_stack(head);
        }
};

#endif
