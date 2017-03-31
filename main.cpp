#include <iostream>
#include <unistd.h> 
#include <ctime>
#include <math.h>
#include <fstream>/*to use infile and outfile*/
#include "class.h" /*call the class*/


using namespace std;
 int main() {
    ifstream inFile("infile", ios::in);
    ofstream outFile("outfile", ios::out);

 int k,c; /*set c being the counter*/
 float ra,rb,ea,eb,sa,da,db;

 inFile >> k >> ra >> rb;
 basic basicf(ra,rb,k);

 ra=basicf.getfunction1();
 rb=basicf.getfunction2();
 k=basicf.getfunction3();
 outFile<<ra<<"\t"<<rb<<"\n"; /*output the initial data*/

for(c=0;c<6;c++){
 inFile>>sa;
 ra=basicf.getfunction1();
 rb=basicf.getfunction2();
 k=basicf.getfunction3();

 ea=1/(1+pow(10,(rb-ra)/400));
 eb=1/(1+pow(10,(ra-rb)/400)); /*using pow to deal with index problem*/
 ra=ra+k*(sa-ea);
 rb=rb+k*((1-sa)-eb);/*write the formular to count expectation:ea eb*/

 if(ra-int(ra) < 0.5)
   ra=int(ra);
 else
 ra=int(ra)+1;


 if(rb-int(rb) < 0.5)
   rb=int(rb);
 else
   rb=int(rb)+1;
/*the two "if" above are set to doing 4 homes 5 in*/

  outFile<<ra<<"\t"<<rb<<"\n"; 
  basicf.function1(ra);
  basicf.function2(rb);
  basicf.function3(k);

  }
	
   return 0;
}/*the end of main*/
