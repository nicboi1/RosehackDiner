#include <iostream>
#include "order.hpp"
#include <stdlib.h>
#include <cstring>

using namespace std;

void menu(){
    cout << "Main Ingredient \t Meal"<<endl;
    string one(13,' ');
    vector<string> mainI = {"chicken", "steak", "mushroom", "fish", "potato"};
    vector<string> meal = {"salad", "soup", "pizza", "burger"};
    for (int i = 0; i <= 4; i++){
      string two(mainI.at(2).size()-mainI.at(i).size(), ' ');
      cout << mainI.at(i) << two << one;
      if (i == 4){
      } else {
        cout << meal.at(i) << endl;
      }
    }
    cout << endl << endl;
}
void recipe(){
  cout << "Recipes: " << endl;
  cout << "1 Selected Main Ingredient For Each Meal" << endl;
  cout << "Salad: 1 Lettuce 1 Dressing" << endl;
  cout << "Soup: 1 Soup Base" << endl;
  cout << "Pizza: 1 Bread 1 Sauce 1 Cheese" << endl;
  cout << "Burger: 1 Bread 1 Lettuce" << endl;
  cout << endl;
}

void intro(){
  string userAns;
  cout << "Hello there! Welcome to Rosehack Diner! Are you read to take some orders?" << endl << endl;
  cout << "Enter yes when ready to begin" << endl << endl;
  cin >> userAns;
  cout << endl;
  while (userAns != "yes") {
    cout << "No rush! Just let me know when you're ready" << endl << endl;
    cin >> userAns;
    cout << endl;
  }
  cout << "Press any character key when you are finished reading each part, unless given other instructions" << endl << endl;
  cin >> userAns;
  cout << endl;
  cout << "You will be making food from our Rosehack Diner menu for our customers today!"<< endl 
       <<"But watchout if a customer orders something from the menu that we don't have the ingredients for, we lose a star!" << endl 
       <<"Right now we have 3 stars, but we'll have to close if we get to 0."<< endl
       <<"After ever 5th customer you can restock any 3 ingredients, so pay attention to what you have." << endl 
       << "Good luck and get cookin!!" << endl << endl;
  cin >> userAns;
  cout << endl;
  cout << "Before you start here is the  menu" << endl << endl; 
  menu();
  cin >> userAns;
  cout << endl;
  cout << endl << "And here are the recipes for everything on the menu" << endl << endl;
  recipe();
  cin >> userAns;
  cout << endl;
  cout << "And Here are the Ingredients and the Quantities of each" << endl << endl;
}
