#include "class.h"

basic::basic(int x, int y,int z) {

function1(x);

function2(y);

function3(z);

};



void    basic::function1(int x) {

	 ranka = x;
    }



void    basic::function2(int y){

         rankb = y;

   }



void    basic::function3(int z){

         k = z;

   }



int     basic::getfunction1() {

	return ranka;

  }


int     basic::getfunction2() {

	return rankb;
  }


int     basic::getfunction3() {

	return k;

  }
