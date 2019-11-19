/**
*	@file Test.h
*	@author Apurva Rai
*	@date 201.11.13
*/

#ifndef TEST_H
#define TEST_H
#include "Queue.h"

class Test
{

  public:

  /**
  *	@post Outputs the test results of Queue method isEmpty()
  */
  void isEmptyChecker();

  /**
  *	@post Outputs the test results of Queue method enqueue()
  */
  void enqueueChecker();

  /**
  *	@post Outputs the test results of Queue method dequeue()
  */
  void dequeueChecker();

  /**
  *	@post Outputs the test results of Queue method peekFronty()
  */
  void peekFrontChecker();

  /**
  *	@post Outputs the test results of Queue method Queue()
  */
  //void constructorChecker();

  /**
  *	@post Outputs the test results of Queue method ~Queue()
  */
  //void destructorChecker();

  /**
  *	@post Calls all the test methods
  */
  void caller();

};

#endif
