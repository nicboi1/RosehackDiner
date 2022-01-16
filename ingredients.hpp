

#include <vector>
#include <iostream>
#include "order.hpp"
#include "customer.hpp"

#include <time.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

bool ingredients(customer* payingC, order* custOrder, vector<string> iList, vector<int> & iQuantity) {
  vector <string> neededIng;

    cout << payingC->getName() << " wants a " << custOrder->getOrder() << endl;
    string meal = custOrder->getOrder();
    for (int i = 0; i < 10; i++){
      if(meal.find(iList.at(i)) != std::string::npos){
        // the meal has a certain main ingredient
        string needStock="";
          if(iQuantity.at(i)>0) {
            //meal has correct quantity of ingredient
              if(meal.find("salad")!=std::string::npos){
                //meal is a salad
               needStock=iList.at(9)+" and "+iList.at(10);
                if((iQuantity.at(9)>0)&&(iQuantity.at(10)>0)){
                //User has lettuce and dressing
                iQuantity.at(i)-=1;
                iQuantity.at(9)-=1;
                iQuantity.at(10)-=1;
                
                return true;
                }
              }
              if(meal.find("soup")!=std::string::npos){ 
                //meal is soup
                needStock=iList.at(6);
                if(iQuantity.at(6)>0){
                //user has soup broth
                iQuantity.at(i)-=1;
                iQuantity.at(6)-=1;
                
                return true;
                }
              }
              if(meal.find("pizza")!=std::string::npos){
                //meal is pizza
                needStock=iList.at(5)+" and "+iList.at(7)+" and "+iList.at(8);
                if((iQuantity.at(5)>0)&&(iQuantity.at(7)>0)&&(iQuantity.at(8)>0)){
                //user has bread, sauce, and cheese
                iQuantity.at(i)-=1;
                iQuantity.at(5)-=1;
                iQuantity.at(7)-=1;
                iQuantity.at(8)-=1;
                
                return true;
                }
              }
              if(meal.find("burger")!=std::string::npos){
                //meal is burger
                needStock=iList.at(5)+" and "+iList.at(9);
                if((iQuantity.at(5)>0)&&(iQuantity.at(9)>0)){
                //user has bread and lettuce
                iQuantity.at(i)-=1;
                iQuantity.at(5)-=1;
                iQuantity.at(9)-=1;
                
                return true;
              }
                //if there is not ingredients for the meal aspect
                cout<<"Oh no! You don't have enough ingredients to make "<<custOrder->getOrder()<<"! You need "<< iList.at(i)<<" and "<<needStock<<endl;
                
                return false;
              
              
          }else{
                //if there is not enough ingredients for the main ingredient of the meal
              cout<<"Oh no! You don't have enough ingredients to make "<<custOrder->getOrder()<<"! You need "<< iList.at(i)<<" and "<<needStock<<endl;
              return false;
            }
          
            
            }
          }
        
      }
      return false;
  }
    void restock(vector<string> iList, vector<int> & iQuantity){
    
    cout << "Time to stock up on Ingredients! You can stock up on 2" << endl;
    cout << "1. chicken 2. steak 3. mushroom 4.fish 5.potato 6. bread 7.soup base 8.cheese 9.sauce 10.lettuce 11. dressing" << endl;
    cout << "Enter a number 1-11 to fully restock" << endl;
    int choice;
    int anything;
    int choiceleft=2;
      //can stock up on 2 ingredients
    while (choiceleft > 0){
      cin>>choice;
      vector<int> range{1,2,3,4,5,6,7,8,9,10,11};
      
      while((choice>11||choice<1)){
        if (cin.fail()){
        cin.clear();
        cin.ignore(512, '\n');
        }
        cout << "That's not an ingredient. Try again" << endl;
        cin>>choice;
        
      } 
        iQuantity.at(choice - 1) = 3;
        cout << iList.at(choice - 1) << " has been restocked" << endl;
        choiceleft--;
      
    }
  cout << "All your requested items have been restocked!" << endl;
   
    }
  void iqList(vector<string> iList, vector<int>  iQuantity){
    cout<<"Ingredient|Quantity"<<endl;
    for(int i=0;i<iList.size();i++){
      cout<<iList.at(i)<<"|"<<iQuantity.at(i) <<endl;
    }
    cout<<endl;
    string userInput;
    cin>>userInput;
    cout<<endl;
  }   

