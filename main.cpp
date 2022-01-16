// customer class-includes name of customer (will be randomly picked from a list) , and order. Order class-includes the name of food (randomly picked from list) and what ingredients and how many of those ingredients are needed. restaurant class-includes how many ingredients you have, and stars. Ingredients are restocked after every 3 customers, let's say quantity of ingredients restocked are 10 (still have to decide what the ingredients and food are). Each class will have special outputs. Customer class has a greeting and what food they want to eat and what ingredients it takes to make the meal. If we the user/restaurant cant provide the meal then we lose a star. We the user/restaurant will have options for what ingredients to restock, which will be asked by the "grocer"
// main will run the simulation until we have 0 stars

#include <iostream>
#include "customer.hpp"
#include "order.hpp"
#include "ingredients.hpp"
#include "intro.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main() {
    srand(time(0));
    intro();
    string u;
    int stars = 3;
    int round = 0;
    int review = 0;
    vector <string> iList={"chicken","steak","mushroom", "fish", "potato", "bread", "soup base", "cheese", "sauce", "lettuce", "dressing"};
    
    vector<int> iQuantity(11,3);
    
    iqList(iList,iQuantity);

    while (stars > 0){
        customer* payingC= new customer();
        order* custOrder= new order();
        
        bool fed = ingredients(payingC, custOrder, iList,iQuantity);
        if (fed == true){
          cout << "You have the ingredients to cook a " << custOrder->getOrder()<<"!"<<endl;
          cin >> u;
          cout << endl;
            cout << "Yay we just fed "<<payingC->getName()<<" and got a great review!" << endl << endl;
            review += 1;
            round += 1;
            delete payingC;
            delete custOrder;
            
        } else {
            cout << "Oh no! We couldn't feed " << payingC->getName() << " and lost a star!" << endl;
            stars -= 1;
            round += 1;
            cout << "You now have " << stars << " stars!" << endl;
            delete payingC;
            delete custOrder;
        }
        cout << "Enter 1 to look at the Menu and the Quantities List" << endl << "Enter anykey for neither" << endl << endl;
        
        string userAns;
        cin >> userAns;
      
        if (userAns == "1"){
          menu();
          iqList(iList,iQuantity);
        }

        if (round % 5 == 0){
          restock (iList, iQuantity);
        }
        }
    cout << "Game over" <<endl;
    cout << "You ended up with a score of "<< review << endl;
    return 0;
    
} 

