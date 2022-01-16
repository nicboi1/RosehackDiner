#ifndef order_hpp
#define order_hpp
#include <vector>
#include <iostream>
#include "customer.hpp"
using namespace std;

class order{
  private:
      vector<string> basicOrders;
      vector<string> specialOrders;
      string orderName;
      

  public:
    
      
      order(){
    
          basicOrders = {"salad", "soup", "pizza", "burger" };
          specialOrders = {"chicken", "steak", "mushroom", "fish", "potato"};
         
          int first = rand() % specialOrders.size(); 
          int sec = rand() % basicOrders.size();
          
          orderName = (specialOrders.at(first)) + " " + (basicOrders.at(sec));
           
          cout<<"I'm feeling hungry today. I would like a "<< getOrder() << endl;
      }
     
      
        string getOrder() const {return orderName;}
        
        
};

#endif
