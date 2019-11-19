/**
*	@file Test.cpp
*	@author Apurva Rai
*	@date 201.11.13
*/

#include "Test.h"
#include <iostream>
using namespace std;

void Test::isEmptyChecker()
{

Queue q;

cout << "\nTest 1: Queue empty before any operations performed- " << (q.isEmpty()?"PASSED":"FAILED");

q.enqueue(42);

cout << "\nTest 2: Queue non-empty after enqueue is performed- " << (q.isEmpty()?"FAILED":"PASSED");

}

void Test::enqueueChecker()
{

Queue q;
q.enqueue(42);

cout << "\nTest 3: Enqueue one value and peek- " << ((q.peekFront() == 42)?"PASSED":"FAILED");

Queue p;

  for(int i = 1; i <= 10; i++)
  {

    p.enqueue(i*10);

  }

cout << "\nTest 4: Enqueue multiple values and peek- " << ((p.peekFront() == 10)?"PASSED":"FAILED");

}

void Test::dequeueChecker()
{

Queue q;


  try{

  q.dequeue();
  cout << "\nTest 5: Dequeue on empty stack(Should throw an error)- " << "FAILED";

  }
  catch(...)
  {

  cout << "\nTest 5: Dequeue on empty stack(Should throw an error)- " << "PASSED";

  }

q.enqueue(42);
q.dequeue();

cout << "\nTest 6: Dequeueing after enqueueing once(Stack should be  empty)- " << (q.isEmpty()?"PASSED":"FAILED");

}

void Test::peekFrontChecker()
{

Queue q;

  for(int i = 1; i <= 10; i++)
  {

    q.enqueue(i*10);

  }

cout << "\nTest 7: Peeking the front after enqueueing multiple values- " << ((q.peekFront() == 10)?"PASSED":"FAILED");

Queue p;

p.enqueue(42);
p.enqueue(50);

cout << "\nTest 8: Peeking the front after enqueueing multiple objects and comparing it to object that was enqueued 2nd- " << ((p.peekFront() == 50)?"PASSED\n\n":"FAILED\n\n");

}

/*
void Test::constructorChecker()
{}

void Test::destructorChecker()
{}
*/

void Test::caller()
{

isEmptyChecker();
enqueueChecker();
dequeueChecker();
peekFrontChecker();
//constructorChecker();
//destructorChecker();

}
