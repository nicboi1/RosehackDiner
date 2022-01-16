# RosehackDiner

# Authors: Nicole Boie https://github.com/nicboi1, Aarav Sane https://github.com/skyguy-netizen

# 1/16/20

# What is the Game #
A text based game where the user serves food according to the customer order, if they have the correct amount of ingredients. Every 5 customers there is a chance to restock 3 ingredients. The user starts out with 5 stars, and loses a star when they cannot provide a meal ordered. The game is over when the player reaches 0 stars. The score is the number of people that are correctly served.

# Code 

There are 5 files

Main - Runs the game by calling the intro function, creating new customers, orders, and calling the ingredients function. The amount of customers served or not served are kept track here to keep track of rounds, stars, and when to restock. Main can also call iqList based on the user input to see the recipe list and the quantity list.

Customer - Class that randomly generates a  customer name from a vector of names.

Order - Class that randomly generates an order from two vectors of Main Ingredients and Meals.

Ingredients - Has the ingredients function - Ingredients function takes a customer, an order, The list of ingredients, and the quantity of ingredients and returns whether or not the order can be made. Also has the Restock function - Takes the ingredients list and quantity list and restocks certain ingredients based on user input. iqList function- Prints the ingredient and quantities list.

Intro - Contains menu function, recipe function, and intro function. Menu - prints the different meals that can be ordered. Recipe- Prints the recipe for the food on the menu. Intro - Introduces the game to the user.
