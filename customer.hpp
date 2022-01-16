
#ifndef customer_hpp
#define customer_hpp
#include <vector>
#include <iostream>
#include "order.hpp"
#include <time.h>
#include <stdlib.h>
#include <cstring>
#include <random>

using namespace std;

class customer{
  
  private:
  //what is included in a customer
      vector<string> nameStr;
     // order* custOrder;
      string name="";
      
      //an order pointer points at an order
  public:
  
      customer(){
        nameStr={"Rose","Rosalie", "Ro", "Rosario", "Roman", "Rosa", "Rowan", "Robert", "Ronald", "Roald", "Rod"};
        int rando=rand() %nameStr.size();
        name= nameStr.at(rando);
        //setName(name);
        cout<<"Here comes a customer!"<<endl<<endl;
        string userAns;
        cin>>userAns;
        cout<<endl;
        cout<<"Hello my name is "<<getName()<<endl;
      }
        string getName() const {return name;}
        //string setName(string name) const {this->name;}

        
        


};

#endif