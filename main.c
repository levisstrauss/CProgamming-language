#include <stdio.h>
#include <string.h>

int main() {
    char word[51];
    scanf("%s", word);

    int len = strlen(word);

    // Sort the word using bubble sort
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (word[i] > word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < len - 1; i++) {
        if (word[i] == word[i + 1]) {
            count++;
            // Skip other occurrences of the same letter
            while (i < len - 1 && word[i] == word[i + 1]) {
                i++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
//------------------------------------------------------------

-----------------------------Character ------------------->

Variable names can use:
lowercase and uppercase letters (characters) and digits
do not use special characters like @ # & " ...
do not use accented characters like é è à ...
do not start with a digit
        start only with a letter
spaces are forbidden
        _ may be used instead of a space in the name of the variable
        YouCanUseUppercaseLettersBetweenWordsInsteadOfSpaces

char letter;
char %c      => C  scanf("%c", &height);
double %lf   => 1.92  %.2lf -> two decimal places scanf("%lf", &height);
int %d       => 85   scanf("%d", &height);
Cast  (int) done, (double) done


------------------ Simple program ------------------->

#include <stdio.h>
int main(void) {
    char letter;
    letter = 'A';
    printf("The letter is %c\n", letter);
    return 0;
}

#include <stdio.h>
int main() {
    int balance;//creating a variable containing integer values
    balance = 50;//assigning the value 50 into the balance variable
    printf("I have %d dollars in my account\n",balance);
    //expense of 40 dollars
    balance = balance - 40;
    printf("I have %d dollars in my account\n",balance);
    //add 20 dollars in my account
    balance = balance + 20;
    printf("I have %d dollars in my account\n",balance);
    //expense of 30 dollars
    balance = balance - 30;
    printf("I have %d dollar in my account\n",balance);
    return 0;
}

---------------- Read Simple input from user ---------------->

--------- Project 1 ----------->

include <stdio.h>
int main() {
    double total_money, book_price;
    int max_books;

    //Read the total amount of money and the book price
    scanf("%lf", &total_money);
    scanf("%lf", &book_price);

    // Calculate the maximum number of books that can be purchased
    max_books = total_money / book_price;

    // Print the maximum number of books
    printf("%d\n", max_books);

    return 0;
}

--------- Project 2 ----------->

include <stdio.h>
int main() {
    int height, width, area;

    // Read the height and width
    scanf("%d", &height);
    scanf("%d", &width);

    // Calculate the area
    area = height * width;

    // Print the area
    printf("%d\n", area);

    return 0;
}

--------- Project 3 ----------->

include <stdio.h>
int main() {
    int height, width, area;

    // Read the height and width
    scanf("%d", &height);
    scanf("%d", &width);

    // Calculate the area
    area = height * width;

    // Print the area
    printf("%d\n", area);

    return 0;
}

--------- Project 4 ----------->

include <stdio.h>
int main() {
    int height, width, area;

    // Read the height and width
    scanf("%d", &height);
    scanf("%d", &width);

    // Calculate the area
    area = height * width;

    // Print the area
    printf("%d\n", area);

    return 0;
}

--------- Project 5 ----------->

#include <stdio.h>
int main() {
    int current_population;
    double growth_rate, projected_population;

    // Read the current population and the growth rate
    scanf("%d", &current_population);
    scanf("%lf", &growth_rate);

    // Calculate the projected population
    projected_population = current_population + (current_population * growth_rate / 100);
    // Print the projected population as a whole number
    printf("%d\n", (int)projected_population);

    return 0;
}

--------- Project 6 ----------->

#include <stdio.h>
int main() {
    int matches, boxSize, fullBoxes, leftoverMatches;

    // Read the number of matches and the size of each box
    scanf("%d", &matches);
    scanf("%d", &boxSize);

    // Calculate the number of full boxes
    fullBoxes = matches / boxSize;

    // Calculate the number of leftover matches
    leftoverMatches = matches % boxSize;

    // Print the number of full boxes and the number of leftover matches
    printf("%d\n", fullBoxes);
    printf("%d\n", leftoverMatches);

    return 0;
}

---------------- Formatting the output ---------------->

--------- Project 1 ----------->

#include <stdio.h>
int main(void) {
    // integer division
    printf("5/2 equals %d\n", 5/2);
    // floating point division
    printf("5.0/2.0 equals %lf\n", 5.0/2.0);
    printf("5/2.0 equals %lf\n", 5/2.0);
    printf("5.0/2 equals %lf\n", 5.0/2);
    return 0;
}

--------- Project 2 ----------->

#include <stdio.h>
int main() {
    double celsius, fahrenheit;

    // Read the temperature in degrees Celsius
    scanf("%lf", &celsius);

    // Convert degrees Celsius to degrees Fahrenheit
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    // Print the temperature in degrees Fahrenheit with 1 decimal place
    printf("%.1lf\n", fahrenheit);

    return 0;
}

--------- Project 3 ----------->

#include <stdio.h>
int main(void) {
    int intFive = 5;
    int intTwo = 2;
    double doubFive = 5.0;
    double doubTwo = 2.0;
    printf("intFive/intTwo equals %d\n", intFive/intTwo);
    printf("doubFive/doubTwo equals %lf\n", doubFive/doubTwo);
    printf("doubFive/intTwo equals %lf\n", doubFive/intTwo);
    printf("intFive/doubTwo equals %lf\n", intFive/doubTwo);
    return 0;
}

--------- Project 4 ----------->

#include <stdio.h>
int main() {
    double km, miles;

    // Read the distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%lf", &km);

    // Convert kilometers to miles
    miles = km * 0.621371;

    // Print the distance in miles with 6 decimal places
    printf("%.6lf\n", miles);

    return 0;
}

--------- Project 5 ----------->

#include <stdio.h>
int main(void) {
    int age;
    double height;
    printf("What is your age and height (separate with spaces)?");
    scanf("%d %lf",&age,&height);
    printf("You are %d years old and %.2lf meters tall.",age,height);
    return 0;
}

--------- Project 6 ----------->

#include <stdio.h>
int main(void) {
    int age;
    double height;
    printf("What is your age?");
    scanf("%d",&age);
    printf("What is your height?");
    scanf("%lf",&height);
    printf("You are %d years old and %.2lf meters tall.",age,height);
    return 0;
}

---------------- Conditional rendering ---------------->

--------- Project 1 ----------->

#include <stdio.h>

int main(void) {
    int passengers;
    float gas_cost, my_cost;

    // Read the number of passengers and the cost of gas
    scanf("%d %f", &passengers, &gas_cost);

    // If there are no passengers, you pay the full gas cost
    if (passengers == 0) {
        printf("%.2f\n", gas_cost);

    } else {
        // Add the $1 fee and divide the total cost among all people (passengers + you)
        my_cost = (gas_cost + 1) / (passengers + 1);
        printf("%.2f\n", my_cost);
    }

    return 0;
}

--------- Project 2 ----------->

#include <stdio.h>

int main() {
    int hours_past_noon, price;

    // Base price
    int base_price = 10;

    // Read the number of hours past noon of your arrival
    scanf("%d", &hours_past_noon);

    // Calculate the price
    price = base_price + (hours_past_noon * 5);

    // If the price is more than 53 dollars, set it to 53 dollars
    if (price > 53) {
        price = 53;
    }

    // Print the price
    printf("%d\n", price);

    return 0;
}

--------- Project 3 ----------->

#include <stdio.h>
int main() {
    int die1, die2, sum, price;

    // Read the values of the two dice
    scanf("%d", &die1);
    scanf("%d", &die2);

    // Calculate the sum of the values of the two dice
    sum = die1 + die2;

    // Determine the tax type and price
    if (sum >= 10) {
        printf("Special tax\n");
        price = 36;
    } else {
        printf("Regular tax\n");
        price = sum * 2;
    }

    // Print the price
    printf("%d\n", price);

    return 0;
}

--------- Project 4 ----------->

#include <stdio.h>

int main() {

    // Varibales declaration
    int num_members, weight, total_weight_team1 = 0, total_weight_team2 = 0, i;

    // Read the number of member per team
    scanf("%d", &num_members);

    // Read the weights od the players alternatively per team
    for(i=0; i<num_members*2; i++){

        scanf("%d", &weight);

        if(i%2 == 0){
            total_weight_team1 += weight;
        }else{
            total_weight_team2 += weight;
        }
    }
    // Determine which team has advantage
    if(total_weight_team1 > total_weight_team2){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }

    //Print the total weight of each team
    printf("Total weight for team 1: %d\n", total_weight_team1);
    printf("Total weight for team 2: %d\n", total_weight_team2);

    return 0;
}

--------- Project 5 ----------->

#include <stdio.h>

int main() {
    int age;
    int luggage_weight;
    int price = 0;

    // Read the customer's age and luggage weight
    scanf("%d", &age);
    scanf("%d", &luggage_weight);

    // Calculate the price based on the given conditions
    if (age == 60) {
        price = 0;
    } else if (age < 10) {
        price = 5;
    } else {
        price = 30;
        if (luggage_weight > 20) {
            price += 10;
        }
    }

    // Print the price
    printf("%d\n", price);

    return 0;
}

--------- Project 6 ----------->

#include <stdio.h>

int main() {

    // Variables declaration
    int height, leaflets;

    // Read the height and the number of leaflets
    scanf("%d", &height);
    scanf("%d", &leaflets);

    // Determine the tree type based on the given condition
    if(height <= 5 && leaflets >= 8){
        printf("Tinuviel\n");
    }else if(height >= 10 && leaflets >= 10){
        printf("Calaelen\n");
    }else if(height <= 8 && leaflets <= 5){
        printf("Falarion\n");
    }else if(height >= 12 && leaflets <= 7){
        printf("Dorthonion\n");
    }else{
        printf("Uncertain\n");
    }

    return 0;
}

---------------- For loop ---------------------->

--------- Project 1 ----------->

#int main(void) {
int i;
int number;
scanf("%d", &number);
for (i = 0; i < 11; i++){
printf("%dx%d = %d\n", i, number, (i*number));
}
return 0;
}

--------- Project 2 ----------->

#include <stdio.h>
int main() {
    int i, n; // Number of robots
    int height, weight, enginePower, resistance;
    int totalPower = 0;  // Total power of all robots
    scanf("%d", &n);
    //Loop to read each robot's details and calculate its power
    for(i = 0; i < n; i++){
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        // Calculate power for the current robot and add to total power
        totalPower += (enginePower + resistance) * (weight - height);
    }

    // Print the total power
    printf("%d", totalPower);
    return 0;
}

--------- Project 3 ----------->

int main(void) {
    int daysLeft = 25 - 23; // March 25th - March 23rd
    int minutesLeft = daysLeft * 24 * 60; // Convert days to minutes
    int secondsLeft = minutesLeft * 60; // Convert minutes to seconds

    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds)
    before you can procrastinate!\n", daysLeft, minutesLeft, secondsLeft);

    return 0;
}

--------- Project 4 ----------->

#include <stdio.h>
int main(void) {
    //Create a variable to store an integer value
    int age;
    //Assigne a value to that variable
    age = 47;
    printf("I am %d years old.\n", age);
    printf("In %d years, I will be %d years old.\n", 8, age+8);
    printf("%d years ago, I was %d years old.\n", 11, age-11);
    return 0;
}

--------- Project 5 ----------->

#include <stdio.h>
int main(void){
    int array[3];
    int readValue = 0;
    int cellNumber = 0;
    int i = 0;
    for(i = 0 ; i < 3 ; i++){
        printf("Enter a value:");
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    }
    return 0;
}


---------------- Arrays Data structures ---------------------->

#include <stdio.h>
int main(void) {
    int array[3]; // creates space to hold three integers
    array[0] = 18;
    array[1] = 137;
    array[2] = 8;
    printf("First element is %d.\n", array[0]);
    printf("Second element is %d.\n", array[1]);
    printf("Third element is %d.\n", array[2]);
    return 0;
}

---- Project 1 ---->

#include <stdio.h>
int main(void){
    int array[3];
    int readValue = 0;
    int cellNumber = 0;
    int i = 0;
    for(i = 0 ; i < 3 ; i++){
        printf("Enter a value:");
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    }
    return 0;
}

---- Project 2 ---->

int main() {
    int ingredients[10];
    int i, ingredientID;

    // Reading the 10 ingredient quantities
    printf("Enter quantities for the 10 ingredients: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &ingredients[i]);
    }

    // Reading the ingredient ID number
    printf("Enter ingredient's ID number (between 0 and 9): ");
    scanf("%d", &ingredientID);

    // Error check
    if (ingredientID < 0 || ingredientID > 9) {
        printf("Invalid ID number!\n");
        return 1; // Exit with an error code
    }

    // Output the corresponding quantity
    printf("Quantity for ingredient with ID %d: %d\n", ingredientID, ingredients[ingredientID]);

    return 0;
}

---- Project 3 ---->

#include <stdio.h>
int main(void){
    double array[3];
    double readValue = 0.0;
    int cellNumber = 0;
    int i = 0;
    for(i=0;i<3;i++){
        printf("Enter a decimal value:");
        scanf("%lf",&readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    }
    return 0;
}

---- Project 4 ---->

#include <stdio.h>
int main() {
    int n;
    double weights[50];
    double totalWeight = 0.0, avgWeight;
    // Reading the number of boxcars
    scanf("%d", &n);
    // Reading the weights of the boxcars and calculating the total weight
    for (int i = 0; i < n; i++) {
        scanf("%lf", &weights[i]);
        totalWeight += weights[i];
    }
    // Calculating the average weight
    avgWeight = totalWeight / n;

    // Printing the difference between average weight and each boxcar's weight
    for (int i = 0; i < n; i++) {
        printf("%.1lf\n", avgWeight - weights[i]);
    }

    return 0;
}

---- Project 5 ---->

#include <stdio.h>

int main() {
    int n;
    double weights[50];
    double totalWeight = 0.0, avgWeight;

    // Reading the number of boxcars
    scanf("%d", &n);

    // Reading the weights of the boxcars and calculating the total weight
    for (int i = 0; i < n; i++) {
        scanf("%lf", &weights[i]);
        totalWeight += weights[i];
    }

    // Calculating the average weight
    avgWeight = totalWeight / n;

    // Printing the difference between average weight and each boxcar's weight
    for (int i = 0; i < n; i++) {
        printf("%.1lf\n", avgWeight - weights[i]);
    }

    return 0;
}

---- Project 6 ---->

#include <stdio.h>
int main(void) {
    //! showArray(ages, cursors=[i])
    int ages[10];
    int i;
    int ageMax = 0;
    for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] > ageMax) {
            ageMax = ages[i];
        }
    }
    printf("The maximum age is %d.\n", ageMax);
    printf("Age differences with the eldest person:\n");
    for(i=0;i<10;i++){
        printf("%d:%d ", ages[i],ageMax-ages[i]);
    }
    return 0;
}

---- Project 7 ---->

#include <stdio.h>
int main() {
    int n;
    double prices[10], weights[10];
    double totalCost = 0.0;

    // Reading the number of ingredients
    scanf("%d", &n);

    // Reading the price per pound for each ingredient
    for (int i = 0; i < n; i++) {
        scanf("%lf", &prices[i]);
    }

    // Reading the weight necessary for the recipe for each ingredient
    for (int i = 0; i < n; i++) {
        scanf("%lf", &weights[i]);
    }

    // Calculating the total cost
    for (int i = 0; i < n; i++) {
        totalCost += prices[i] * weights[i];
    }

    // Displaying the result with 6 decimal places
    printf("%.6lf\n", totalCost);

    return 0;
}

---------------- Nest if and for  ---------------------->

---- Project 1 ---->

#include <stdio.h>
int main(void){
    int target;
    int i;
    printf("Please enter a target number: ");
    scanf("%d", &target);
    if (target >= 0){
        for (i=0; i<target; i++){
            if (i%2){
                printf("%d ", i);
            }
        }
    }
    else{
        printf("Nothing to do!\n");
    }

    return 0;
}

---- Project 2 ---->

int main() {
    int n, count = 0;
    int population;

    // Reading the number of cities
    scanf("%d", &n);

    // Looping through the cities and counting those with populations > 10,000
    for (int i = 0; i < n; i++) {
        scanf("%d", &population);
        if (population > 10000) {
            count++;
        }
    }

    // Printing the result
    printf("%d\n", count);

    return 0;
}

---- Project 3 ---->

#include <stdio.h>
int main(void){
    int nbThrows = 0;
    int nbDice = 0;
    int diceValue = 0;
    int throwSum = 0;
    int throw = 0;
    int dice = 0;
    scanf("%d %d", &nbThrows, &nbDice);
    for(throw = 0; throw<nbThrows; throw++){
        for(dice = 0; dice<nbDice; dice++){
            scanf("%d", &diceValue);
            throwSum = throwSum + diceValue;
        }
        printf("throw %d sum equals %d\n", throw, throwSum);
        throwSum = 0;
    }
    return 0;
}

---- Project 4 ---->

#include <stdio.h>
int main() {
    int n;

    // Reading the integer n
    scanf("%d", &n);

    // Printing the square of asterisks
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


---------------- While loop ---------------------->

---- Project 1 ---->

#include <stdio.h>
int main(void) {
    int diceValue;
    int notSix;
    scanf("%d", &diceValue);
    notSix = diceValue != 6;
    while (notSix) {
        scanf("%d", &diceValue);
        notSix = diceValue != 6;
    }
    return 0;
}

---- Project 2 ---->

#include <stdio.h>
int main(void) {
    int diceValue = 0;
    int nbThrows = 0;
    scanf("%d", &diceValue);
    while(diceValue != 6){
        scanf("%d", &diceValue);
        nbThrows = nbThrows + 1;
    }
    printf("We needed %d throws to get the value 6\n", nbThrows+1);
    return 0;
}

---- Project 3 ---->

# Here -1 is the condition to stop the loop
#include <stdio.h>
int main() {
    int num, sum = 0;

    // Keep reading until -1 is encountered
    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break;
        }
        sum += num;
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}

---- Project 4 ---->

#include <stdio.h>
int main(void) {
    int signaturesNeeded = 1000;
    int day = 0;
    int newSignatures = 3;
    int totalSignatures = 3;
    while (totalSignatures < 1000) {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }
    return 0;
}

---- Project 5 ---->

#include <stdio.h>
#include <stdio.h>
int main() {
    int population;
    int day = 0;
    int total_infected = 0;
    int new_infected = 1;

    // Read the population
    scanf("%d", &population);

    // Simulate the spread of the epidemic
    while (total_infected < population) {
        total_infected += new_infected;
        new_infected = total_infected * 2;  // each infected person contaminates two new people
        day++;
    }

    // Print the result
    printf("%d\n", day);

    return 0;
}

---- Project 6 ---->

#include <stdio.h>
int main() {
    int secret_number, guess;
    int tries = 0;

    // Read the secret number
    scanf("%d", &secret_number);

    // Keep reading guesses until the correct number is guessed
    while (1) {
        scanf("%d", &guess);
        tries++;

        if (guess < secret_number) {
            printf("it is more\n");
        } else if (guess > secret_number) {
            printf("it is less\n");
        } else {
            printf("Number of tries needed:\n%d\n", tries);
            break;
        }
    }

    return 0;
}


--------- project 7 ----------->

#include <stdio.h>
int main() {
    int min_temp, max_temp, temp;

    // Read the minimum and maximum safe temperatures
    scanf("%d %d", &min_temp, &max_temp);
    while (1) {
        // Read the temperature
        scanf("%d", &temp);

        // Check if the temperature reading is complete
        if (temp == -999) {
            break;
        }
        // Check if the temperature is within the safe range
        if (temp >= min_temp && temp <= max_temp) {
            printf("Nothing to report\n");
        } else {
            printf("Alert!\n");
            break;
        }
    }
    return 0;
}

---------------- Print a read sting as an arrays ---------------------->

-------- Project 1 -------->
#include <stdio.h>
int main(void) {
    //! showArray(word, cursors[i])
    char word[51]; //arrray of characters (string)
    printf("Please enter a word with 50 letters: ");
    scanf("%s", word);
    printf("The word read is: %s.\n", word);
    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);
    word[1] = 'a';
    printf("The new word is %s\n", word);
    return 0;
}


-------- Project 2 -------->

#include <stdio.h>
#include <string.h>
int main() {
    // Variables
    int i, repetitions;
    char word[101];
    // Read the number of repetitions and the word
    scanf("%d %s", &repetitions, word);
    if(strlen(word) > 100) {
        printf("The word is too long\n");
        return 0;
    }
    for( i = 0; i < repetitions; i++ ) {
        printf("%s\n", word);
    }
    return 0;
}

-------- Project 3 -------->

#include <stdio.h>
int main(void) {
    //! word1 = showArray(word1, cursors=[i], width=0.5)
    //! word2 = showArray(word2, cursors=[i], width=0.5)
    char word1[5];
    char word2[8];
    scanf("%s %s", word1, word2);
    word1[3] = '\0';            // Take verything up to the 3rd character
    word2[2] = '\0';            // Take verything up to the 2nd character
    printf("%s %s\n", word1, word2);
    return 0;
}


-------- Project 4 -------->

#include <stdio.h>
int main() {
    // Variables declaration
    int i, number_of_name;

    // Read the number of names
    scanf("%d", &number_of_name);

    for (i = 0; i < number_of_name; i++) {
        char firstName[101];
        char lastName[101];

        // Read the first name and last name
        scanf("%s %s", firstName, lastName);

        // Print the name in correct order with a newline character
        printf("%s %s\n", lastName, firstName);
    }

    return 0;
}

-------- Project 5 -------->

#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[i])
    char word[30];
    int i = 0;
    printf("Please enter a word: ");
    scanf("%s", word);
    while (word[i]!='\0')
        i++;
    printf("%s has word length %d.\n", word, i);
    return 0;
}


-------- Project 6 -------->

#include <stdio.h>
#include <string.h>

int main() {
    char name[51]; // Assuming names are less than 50 characters

    // Read the fan's name
    scanf("%s", name);

    // Calculate the length of the name
    int nameLength = strlen(name);

    // Determine whether the name has an even or odd number of letters
    int line = (nameLength % 2 == 0) ? 1 : 2;

    // Output the line number
    printf("%d\n", line);

    return 0;
}

-------- Project 7 -------->

#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[i])
    char word[51];
    int i = 0;
    scanf("%s", word);
    while (word[i]!='\0')
        i++;
    if (i % 2 == 0)
        printf("1\n");
    else
        printf("2\n");
    return 0;
}

------- Finding the frequency of word length in a string -------->

#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[t])
    //! showArray(length, cursors=[i])
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11];
    int length[10];//length[5] number of 5-letter-long words in the text
    for(i=0;i<10;i++){
        length[i]=0;
    }
    scanf("%d", &nbWords);
    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        l = 0;
        while(word[l]!='\0'){
            l++;
        }
        length[l] = length[l] + 1;
        printf("%s %d ", word,l);
    }
    for(j=0;j<10;j++){
        printf("There are %d words with %d letters.\n", length[j], j);
    }
    return 0;
}

------- Finding the frequency of word length in a string -------->

#include <stdio.h>
#include <string.h>

int main(){

    int i, n, maxLength = 0, currentLength;
    char word[101];

    // Get the number of word
    scanf("%d", &n);

    // Iterate through all the words
    for(i = 0; i < n; i++){
        scanf("%s", word);
        currentLength = strlen(word);
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    // Print the maximum length
    printf("%d\n", maxLength);
    return 0;
}

------- Finding which words come first in the giving statement-------->

#include <stdio.h>
int main(void) {
    char word1[50];
    char word2[50];
    int i = 0;

    printf("Please enter a word: ");
    scanf("%s", word1);
    printf("And another: ");
    scanf("%s", word2);
    // Find first letter in which words differ
    while (word1[i]!='\0' && word2[i]!= '\0' && word1[i] == word2[i])
        i++;
    if (word1[i] < word2[i])
        printf("%s comes before %s in the alphabet.\n", word1, word2);
    else if (word1[i]>word2[i])
        printf("%s comes after %s in the alphabet.\n", word1, word2);
    else printf("You entered the same word, %s, twice.\n", word1);

    return 0;
}

------- Linear Search -------->

#include <stdio.h>
int main(void) {
    //! showArray(list, cursors=[i])
    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
    int n = 10;
    int item, i, found;

    printf("Which number are you looking for? ");
    scanf("%d", &item);
    found = 0;
    i = 0;
    while (!found && i<n) {
        if (item == list[i]) {
            found = 1;
        } else {
            i++;
        }
    }

    if (!found) {
        printf("%d is not a member of this list. \n", item);
    } else {
        printf("I found %d at index %d in the list. \n", item, i);
    }

    return 0;
}

------- Checking the letter T in a giving word  -------->

#include <stdio.h>
#include <string.h>

int main() {
    char word[51];
    scanf("%s", word);

    int len = strlen(word);
    int mid = (len + 1) / 2; // This calculation ensures that the middle letter is considered in the first half for odd lengths.

    // Check first half
    for (int i = 0; i < mid; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            printf("1\n");
            return 0; // End program if found
        }
    }

    // Check second half
    for (int i = mid; i < len; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            printf("2\n");
            return 0; // End program if found
        }
    }

    // If not found in entire word
    printf("-1\n");
    return 0;
}

------- Binary search  -------->

#include<stdio.h>
int main(void) {
    //! showArray(list, cursors=[ia, ib, mid])
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
    int n = 10;
    int item;
    int ia, ib, mid, found;

    printf("Which number are you looking for? ");
    scanf("%d", &item);
    ia = 0;
    ib = n-1;
    found = 0;

    while (!found && (ia <= ib)) {
        mid = (ia + ib)/2; // middle index
        if (item == list[mid]) {
            found = 1;  // found item!
        } else if (item<list[mid]) {
            ib = mid-1; // toss the top half
        } else {
            ia = mid + 1; // toss the bottom half
        }
    }

    if (!found) {
        printf("Number %d was not found in the array. \n", item);
    } else {
        printf("Number %d was found at index %d in the array.\n", item, mid);
    }

    return 0;
}

------- Bubble sort  -------->

#include<stdio.h>
int main(void) {
    //! showArray(list, cursors=[i])
    // Sorting from smallest to largest
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int n = 10;
    int i, j;
    int swap;

    printf("Unsorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }

    for (j=0; j<n-1; j++) {
        for (i=0; i<n-1; i++) {
            if (list[i] > list[i+1]) {
                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
        }
    }

    printf("Unsorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}

------- Repeated letters in a word  -------->

#include <stdio.h>
#include <string.h>

int main() {
    char word[51];
    scanf("%s", word);

    int len = strlen(word);

    // Sort the word using bubble sort
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (word[i] > word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < len - 1; i++) {
        if (word[i] == word[i + 1]) {
            count++;
            // Skip other occurrences of the same letter
            while (i < len - 1 && word[i] == word[i + 1]) {
                i++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
//----------------- ---------------------->
#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

void readDate(struct date *);
void printDate(struct date);

int main(void) {
    struct date today;
    readDate(&today);
    printDate(today);
    return 0;
}

// Function to read the date from user input
void readDate(struct date *d) {
    scanf("%d %d %d", &d->year, &d->month, &d->day);
}

// Function to print the date in mm/dd/yyyy format
void printDate(struct date d) {
    printf("%02d/%02d/%04d\n", d.month, d.day, d.year);
}

//----------------- ---------------------->
#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
    struct date today, tomorrow;
    readDate(&today);
    printDate(today);
    tomorrow = advanceDay(today);
    printDate(tomorrow);
    return 0;
}


/* add your function definitions here */

void readDate(struct date *d) {
    scanf("%d %d %d", &d->year, &d->month, &d->day);
}


void printDate(struct date d) {
    printf("%02d/%02d/%04d\n", d.month, d.day, d.year);
}


struct date advanceDay(struct date d) {
    struct date nextDay = d;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    nextDay.day++;

    if (nextDay.day > daysInMonth[nextDay.month - 1]) {
        nextDay.day = 1;
        nextDay.month++;
        if (nextDay.month > 12) {
            nextDay.month = 1;
            nextDay.year++;
        }
    }

    return nextDay;
}
//----------------- ---------------------->

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int numVertices;
    // Read the number of vertices
    scanf("%d", &numVertices);
    // Allocate memory for the vertices
    struct point *pentagon = (struct point *)malloc(numVertices * sizeof(struct point));

    // Initialize the vertices
    initializePoly(pentagon, numVertices);

    // Print the vertices
    printPoly(pentagon, numVertices);

    // Free the allocated memory
    free(pentagon);

    return 0;

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point *ptr, int N) {
    int i;
    for (i = 0; i < N; i++) {
        ptr[i].x = -i;
        ptr[i].y = i * i;
    }
}


//----------------- ---------------------->

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)
struct student *createStudent(char studentName[], int studentAge);


int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge) {
    // Allocate memory for a new student struct
    struct student *newStudent = (struct student *) malloc(sizeof(struct student));
    // Copy the student's name into the struct
    strncpy(newStudent->name, studentName, sizeof(newStudent->name) - 1);
    newStudent->name[sizeof(newStudent->name) - 1] = '\0';

    // Set the student's age
    newStudent->age = studentAge;

    // Initialize the next pointer to NULL
    newStudent->next = NULL;

    return newStudent;
}


//----------------- ---------------------->

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
/* add other prototypes here if needed */

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}

/* Place your function definitions here. Be sure to include the definition for
   createStudent() and any other functions you created for the previous task. */
struct student *createStudent(char studentName[], int studentAge) {
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    strcpy(newStudent->name, studentName);
    newStudent->age = studentAge;
    newStudent->next = NULL;
    return newStudent;
}

struct student *append(struct student *end, struct student *newStudptr) {
    end->next = newStudptr;
    return newStudptr;
}

//----------------- ---------------------->
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
/* add other prototypes here if needed*/

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;

    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    tmp = start->next;

    free(start);

    start = tmp;
    tmp = start->next;

    free(start);
    free(tmp);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for
   createStudent() and append() as well as any other functions you created for
   the previous tasks. */

struct student *createStudent(char studentName[], int studentAge) {
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    strcpy(newStudent->name, studentName);
    newStudent->age = studentAge;
    newStudent->next = NULL;
    return newStudent;
}

struct student *append(struct student *end, struct student *newStudptr) {
    end->next = newStudptr;
    return newStudptr;
}

void printStudents(struct student *start){
    struct student * ptr = start;
    while(ptr!=NULL){
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}


//----------------- ---------------------->
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
/* add any other prototypes as needed */
void freeNumber(struct student *start);

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for
   createStudent(), append(), printStudents() as well as any other functions you
   created for the previous tasks. */

struct student *createStudent(char studentName[], int studentAge) {
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    strcpy(newStudent->name, studentName);
    newStudent->age = studentAge;
    newStudent->next = NULL;
    return newStudent;
}

struct student *append(struct student *end, struct student *newStudptr) {
    end->next = newStudptr;
    return newStudptr;
}

void printStudents(struct student *start){
    struct student * ptr = start;
    while(ptr!=NULL){
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}

void freeStudents(struct student *start) {
    struct student *tmp;
    while (start != NULL) {
        tmp = start;
        start = start->next;
        free(tmp);
    }
}

//----------------- ---------------------->

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

// Write your prototypes here
struct digit *createDigit(int dig);
struct digit *append(struct digit *end, struct digit *newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
struct digit *readNumber(void);
int divisibleByThree(struct digit *start);


int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

// Write your divisibleByThree() function here
int divisibleByThree(struct digit *start) {
    int sum = 0;
    struct digit *ptr = start;
    while (ptr != NULL) {
        sum += ptr->num;
        ptr = ptr->next;
    }
    return (sum % 3 == 0);
}

//----------------- ---------------------->

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
int divisibleByThree(struct digit * start);
struct digit * readNumber(void);
//Add your own function prototypes here
int changeThrees(struct digit *start);

int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("was modified in %d places.\n", changeThrees(start));

    printf("The new number is ");
    printNumber(start);
    freeNumber(start);

    return 0;
}

struct digit * createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

// Write your changeThrees() function here
int changeThrees(struct digit *start) {
    struct digit *ptr = start;
    int count = 0;

    while (ptr != NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            count++;
        }
        ptr = ptr->next;
    }

    return count;
}

//----------------- ---------------------->
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};


// Add a prototype for countRedun() here
struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void);
int divisibleByThree(struct digit * start);
int changeThrees(struct digit * start);
int countRedun(struct digit *start);


// Do not modify this main() function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));

    freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int sum = 0;
    while (ptr!=NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return(sum);
}

// Write your countRedun() function here

int countRedun(struct digit *start) {
    int seen[10] = {0}; // Array to keep track of seen digits
    struct digit *ptr = start;
    int count = 0;

    while (ptr != NULL) {
        if (seen[ptr->num]) {
            count++;
        } else {
            seen[ptr->num] = 1;
        }
        ptr = ptr->next;
    }

    return count;
}

//----------------- ---------------------->


#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};

int main(void) {
    //! showMemory(start=65520)
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point * start, * ptr;

    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;

    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
    return 0;
}

//------------------------------------------

#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};
void printPoints(struct point *start);
int main(void) {
    //! showMemory(start=65520)
    struct point pt1 = {1, 2, NULL};
    struct point * start;
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};

    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;

    printPoints(start);

    return 0;
}

void printPoints(struct point *start) {
    //! showMemory(start = 65520, cursors=[ptr])
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

//------------------------------------------

#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
    struct point * next;
};
void printPoints(struct point *start);
struct point * createPoint(int x, int y) ;
struct point * append (struct point * end, struct point * newpt);
void freePoints(struct point * start);
int main(void) {
    //! showMemory(start=65520)
    struct point * start, * end, * newpt;
    int num, i;
    int x, y;

    printf("How many points? ");
    scanf("%d", &num);
    for (i=0; i<num; i++) {
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
        newpt = createPoint(x,y);
        if (i==0) {
            start = end = newpt;
        } else {
            end = append(end,newpt);
        }
    }
    printf("You entered: ");
    printPoints(start);
    freePoints(start);
    return 0;
}

void printPoints(struct point *start) {
    //! showMemory(start = 65520, cursors=[ptr])
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

struct point * append (struct point * end, struct point * newpt) {
    end->next = newpt;
    return(end->next);
}

struct point * createPoint(int x, int y) {
    struct point *ptr;
    ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;
    return(ptr);
}

void freePoints(struct point * start) {
    struct point * ptr = start;
    while (ptr!=NULL) {
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}

#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};
void printPoints(struct point *start);
struct point * append (struct point * end, struct point * newpt);
int main(void) {
    //! showMemory(start=65520)
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point * start, * end;

    start = end = &pt1;
    end = append(end, &pt2);
    end = append(end, &pt3);

    printPoints(start);

    return 0;
}

void printPoints(struct point *start) {
    //! showMemory(start = 65520, cursors=[ptr])
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

struct point * append (struct point * end, struct point * newpt) {
    end->next = newpt;
    return(end->next);
}


//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit * next;
};
struct digit * createDigit(int dig);
int main(void) {
    //! stack=showMemory(start=65520, showcursor[numberptr])
    struct digit * numberptr;
    int digitToStore = 5;
    numberptr = createDigit(digitToStore);
    printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberptr->num, numberptr->next, numberptr);
    free(numberptr);
    return 0;
}

struct digit * createDigit(int dig) {
    //! heap=showMemory(start=330, cursors=[ptr])
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}


//------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)
struct student *createStudent(char studentName[], int studentAge);


int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge) {
    // Allocate memory for a new student struct
    struct student *newStudent = (struct student *) malloc(sizeof(struct student));
    // Copy the student's name into the struct
    strncpy(newStudent->name, studentName, sizeof(newStudent->name) - 1);
    newStudent->name[sizeof(newStudent->name) - 1] = '\0';

    // Set the student's age
    newStudent->age = studentAge;

    // Initialize the next pointer to NULL
    newStudent->next = NULL;

    return newStudent;
}


//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit * next;
};
struct digit * createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigitptr);
int main(void) {
    //! stack=showMemory(start=65520,cursors=[start,newDigitptr,end,tmp])
    struct digit *start, *newDigitptr, *end, *tmp;
    int first = 5;
    int second = 3;
    int third = 7;
    start = createDigit(first);
    end = start;
    newDigitptr = createDigit(second);
    end = append(end, newDigitptr);
    newDigitptr = createDigit(third);
    end = append(end, newDigitptr);
    // free needs to be added  here
    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);
    return 0;
}

struct digit * append(struct digit * end, struct digit * newDigitptr) {
    //! heap=showMemory(start=260, cursors=[end,newDigitptr])
    end->next = newDigitptr;
    end = newDigitptr;
    return(end);
}

struct digit * createDigit(int dig) {
    //! heap=showMemory(start=260, cursors=[ptr])
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);

int main(void) {
    //! stackk = showMemory(start=65520)
    struct digit *start, *newDigptr, *end, *tmp;
    int first = 5;
    int second = 3;
    int third = 7;
    start = createDigit(first);
    end = start;
    newDigptr = createDigit(second);
    end = append(end, newDigptr);
    newDigptr = createDigit(third);
    end = append(end, newDigptr);
    printNumber(start);
    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start){
    //! heap=showMemory(start=277, cursors=[ptr,start])
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *start);

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start, *newDigptr, *end, *tmp;
    int first = 5;
    int second = 3;
    int third = 7;
    start = createDigit(first);
    end = start;
    newDigptr = createDigit(second);
    end = append(end, newDigptr);
    newDigptr = createDigit(third);
    end = append(end, newDigptr);
    printNumber(start);
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    //! heap=showMemory(start=277, cursors=[ptr,start,tmp])
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *start);
struct digit * readNumber();

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start;
    printf("Please enter a number: ");
    start = readNumber();
    printNumber(start);
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber() {
    //! heap=showMemory(start=309, cursors=[start, end, newptr])
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start==NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

//----------------------- Working with functions -------------------

#include <stdio.h>

void convert_metric_to_imperial(double value, char unit) {
    double result = 0.0; // Initialize result to 0.0
    char result_unit[10];

    if (unit == 'm') {
        result = value * 3.2808;
        sprintf(result_unit, "ft");
    } else if (unit == 'g') {
        result = value * 0.002205;
        sprintf(result_unit, "lbs");
    } else if (unit == 'c') {
        result = 32 + 1.8 * value;
        sprintf(result_unit, "f");
    }

    printf("%.6f %s\n", result, result_unit);
}

//------------------------------------------------>
#include <stdio.h>

// Function prototype
int min(int, int);

// Function definition
int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main(void) {
    int n, i, current, smallest;
    scanf("%d", &n);
    scanf("%d", &smallest);
    for (i = 1; i < n; i++) {
        scanf("%d", &current);
        smallest = min(smallest, current);
    }

    printf("%d\n", smallest);

    return 0;
}
//------------------------------------------------>
#include <stdio.h>


int sumOfDigits(int n){
    if (n == 0){
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main(void){
    int number;
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("%d\n", result);

    return 0;
}

//------------------------------------------------>
#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_INT 4
#define SIZE_OF_DOUBLE 8
#define SIZE_OF_CHAR 1


int main() {
    int n, i;
    int total_bytes = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        int length;
        char type_code;

        scanf("%d %c", &length, &type_code);

        switch(type_code){
            case 'i':
                total_bytes += length * SIZE_OF_INT;
                break;
            case 'd':
                total_bytes += length * SIZE_OF_DOUBLE;
                break;
            case 'c':
                total_bytes += length * SIZE_OF_CHAR;
                break;
            default:
                printf("Invalid tracking code type\n");
                return 1;
        }
    }

    printf("%d bytes\n", total_bytes);
    return 0;
}

//------------------------------------------------>
#include <stdio.h>

int main(void) {
    char dataType;
    int numVariables;
    size_t typeSize;
    unsigned long long totalBytes;

    scanf(" %c %d", &dataType, &numVariables);

    switch(dataType) {
        case 'i':
            typeSize = sizeof(int);
            break;
        case 's':
            typeSize = sizeof(short);
            break;
        case 'c':
            typeSize = sizeof(char);
            break;
        case 'd':
            typeSize = sizeof(double);
            break;
        default:
            printf("Unknown data type.\n");
            return 1;
    }

    totalBytes = (unsigned long long)typeSize * numVariables;

    unsigned long long MB = totalBytes / 1000000;
    unsigned long long remainingBytes = totalBytes % 1000000;
    unsigned long long KB = remainingBytes / 1000;
    unsigned long long B = remainingBytes % 1000;

    // Output the result
    if (MB > 0) {
        if (KB > 0 || B > 0) {
            printf("%llu MB and %llu KB and %llu B\n", MB, KB, B);
        } else {
            printf("%llu MB\n", MB);
        }
    } else if (KB > 0) {
        if (B > 0) {
            printf("%llu KB and %llu B\n", KB, B);
        } else {
            printf("%llu KB\n", KB);
        }
    } else {
        printf("%llu B\n", B);
    }

    return 0;
}



//-------------------End of working with functions -------------------


//--------------------- Working with pointers -------------------------
#include <stdio.h>

//Write your function prototype here

void applyElixir(int *ageAddr);

int main(void){
    int age;
    int *ageAddr = &age;
    scanf("%d", ageAddr);
    printf("Your current age is %d.\n", age);

    //Write your function call here
    applyElixir(ageAddr);

    printf("Your new age will be %d!\n", age);
    return 0;
}


//Write your function here
void applyElixir(int *ageAddr) {
    if (*ageAddr > 20) {
        *ageAddr -= 10;
    } else {
        *ageAddr *= 2;
    }
}

//------------------------------------------
#include <stdio.h>

// Function prototype
void reverseArray(int *array);

int main(void) {
    int array[6], i;

    // Read 6 integers from input
    for(i = 0; i < 6; i++) {
        scanf("%d", &array[i]);
    }

    // Call the reverseArray function
    reverseArray(array);

    // Print the reversed array
    for(i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

// Function to reverse the array using pointers
void reverseArray(int *array) {
    int temp;

    // Swap the first and last elements
    temp = *(array);
    *(array) = *(array + 5);
    *(array + 5) = temp;

    // Swap the second and second to last elements
    temp = *(array + 1);
    *(array + 1) = *(array + 4);
    *(array + 4) = temp;

    // Swap the third and third to last elements
    temp = *(array + 2);
    *(array + 2) = *(array + 3);
    *(array + 3) = temp;
}


//-------------------- End of working with Pointers -------------------



int main() {
    int num_conversions, i;
    double value;
    char unit;

    scanf("%d", &num_conversions);

    for (i = 0; i < num_conversions; i++) {
        scanf("%lf %c", &value, &unit);
        convert_metric_to_imperial(value, unit);
    }

    return 0;
}

//------------------------------------------
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *start);
struct digit * readNumber();
struct digit * searchNumber(struct digit * start, int number);

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start, *ptr;
    int searchNum = 5;
    printf("Please enter a number: ");
    start = readNumber();
    printNumber(start);
    ptr = searchNumber(start, searchNum);
    if (ptr!=NULL) {
        printf("Found digit %d at location %p.\n", searchNum, ptr);
    } else {
        printf("Digit %d not found.\n", searchNum);
    }
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber() {
    //! heap=showMemory(start=309, cursors=[start, end, newptr])
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start==NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

struct digit * searchNumber(struct digit * start, int number) {
//! heap=showMemory(start=348, cursors=[ptr,start])
    struct digit * ptr = start;
    while ((ptr!=NULL) && (ptr->num!=number)) {
        ptr = ptr->next;
    }
    return(ptr);
}

//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *start);
struct digit * readNumber();
struct digit * searchNumber(struct digit * start, int number);
struct digit * reverseNumber(struct digit * start);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start, *ptr, *backwards;
    printf("Please enter a number: ");
    start = readNumber();
    printNumber(start);
    backwards = reverseNumber(start);
    printNumber(backwards);
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber() {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start==NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

struct digit * searchNumber(struct digit * start, int number) {
    //! heap=showMemory(start=348, cursors=[ptr,start])
    struct digit * ptr = start;
    while ((ptr!=NULL) && (ptr->num!=number)) {
        ptr = ptr->next;
    }
    return(ptr);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    //! heap=showMemory(start=348, cursors=[newptr,start])
    newptr->next = start;
    return(newptr);
}

struct digit * reverseNumber(struct digit * start) {
    //! heap=showMemory(start=336, cursors=[ptr,start,bstart,newdigit])
    struct digit *ptr = start;
    struct digit *bstart = NULL;
    struct digit *newdigit;

    if (start!=NULL) {
        bstart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr != NULL) {
        newdigit = createDigit(ptr->num);
        bstart = insertAtFront(bstart, newdigit);
        ptr = ptr->next;
    }
    return(bstart);
}

//------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit * readNumber(void);
struct digit * searchNumber(struct digit * start, int number);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);
struct digit * reverseNumber(struct digit * start);
struct digit * sortedCopy(struct digit * start);
struct digit * insertIntoSorted(struct digit *start, struct digit *newDig);

int main(void) {
    //! showMemory(start=65520)
    struct digit *start, *backwards, *sorted;
    printf("Please enter a number: ");
    start = readNumber();
    printf("You entered: ");
    printNumber(start);
    printf("Backwards: ");
    backwards = reverseNumber(start);
    printNumber(backwards);
    printf("Sorted by digit:");
    sorted = sortedCopy(start);
    printNumber(sorted);
    freeNumber(start);
    freeNumber(backwards);
    freeNumber(sorted);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

struct digit * searchNumber(struct digit * start, int number) {
    struct digit * ptr = start;
    while ((ptr!=NULL) && (ptr->num!=number)) {
        ptr = ptr->next;
    }
    return(ptr);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    newptr->next = start;
    return(newptr);
}

struct digit * reverseNumber(struct digit * start) {
    struct digit *ptr = start;
    struct digit *bstart = start;
    struct digit *newdigit;

    if (start!=NULL) {
        bstart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr != NULL) {
        newdigit = createDigit(ptr->num);
        bstart = insertAtFront(bstart, newdigit);
        ptr = ptr->next;
    }
    return(bstart);
}

struct digit * insertIntoSorted(struct digit *start, struct digit *newDig) {
    struct digit *ptr = start;
    struct digit *prev = NULL;
    while ((ptr!=NULL) && (ptr->num < newDig->num)) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev == NULL) {
        start = insertAtFront(start, newDig);
    } else {
        prev->next = newDig;
        newDig->next = ptr;
    }
    return(start);
}

struct digit * sortedCopy(struct digit * start) {
    //! heap1=showMemory(start=348, cursors=[start, ptr, sortedStart, newDigit])
    //! heap2=showMemory(start=519, cursors=[start, newDigit, ptr, prev])
    struct digit *ptr = start;
    struct digit *sortedStart = NULL;
    struct digit *newDigit;

    if (start!=NULL) {
        sortedStart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr!=NULL) {
        newDigit = createDigit(ptr->num);
        sortedStart = insertIntoSorted(sortedStart, newDigit);
        ptr = ptr->next;
    }
    return(sortedStart);
}

//------------------------------------------

#include <stdio.h>

// insert prototype for function ftoc() here
double ftoc(int x);
// insert prototype for function ctof() here
double ctof(int x);

int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
        // insert function call here to convert usertemp
        /* from Celsius to Fahrenheit and store the result in convertedtemp */
        convertedtemp = ctof(usertemp);
        // complete this line to print out the conversion result
        printf("%.1f F\n", convertedtemp);
    } else if (unit=='F'){

        // insert function call here to convert usertemp
        /* from Fahrenheit to Celsius and store the result in convertedtemp */
        convertedtemp = ftoc(usertemp);
        // complete this line to print out the conversion result
        printf("%.1f C\n", convertedtemp);
    }

    return 0;

}

//------------------------------------------

#include <stdio.h>
#include <math.h>

int main(void) {
    int userInput;
    double squareRoot;
    double eulerConstant;

    scanf("%d", &userInput);
    squareRoot = sqrt(userInput);
    printf("%.8f\n", squareRoot);

    eulerConstant = exp(1);
    printf("%.10f\n", eulerConstant);

    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -o program -lm\n");

    return 0;
}

/* Function definitions below are provided for you*/

/* Conversion from Celsius to Fahrenheit: */
double ctof(int x){
    return((9.0/5)*x+32);
}

/* Conversion from Fahrenheit to Celsius: */
double ftoc(int x){
    return(5.0/9*(x-32));
}


//------------------------------------------

#include <stdio.h>

int main() {
    printf("gcc vizplus.c -o vizplus -std=c11 -Wall -Wextra -ljpeg\n");
    return 0;
}


////////////////////////////----- Linux Bash Scripting -----////////////////////////////

/*
    #!/bin/bash
    # This is a comment
    echo "Hello, World!"

    - whoami --help

    - id

    - logname --help

    - echo $0   to use the interpreter

    - hostname --help

    - uname --help     // System information

    - history --help   // Will print all the previous commands

    - clear

    - uptime

    - cal  // TO show the calendar
    - cal --help

    - date  // TO show the date

    - date --help

    - date +%d-%m-%Y   // 16-16-05-2024

    - top  // TO show the processes running on the system

    - htop // TO show the processes running on the system

    - vim to exit :q to exit  i to insert something

    - worm press q to exit

    - firework press q to exit

    - rain press q to exit

    - hanoi press q to exit

    - pwd  // Present working directory

    - ls  // List the files in the directory

    - ls -l  // List the files in the directory

    - ls -a  // List the files in the directory

    - ls -la  // List the files in the directory

    - ls -lh  // List the files in the directory

    - ls -lha  // List the files in the directory

    - Type of the file: file program.c

    - nano name_of_file
    - touch file.txt
    - rm file.txt  // Delete the file
    - touch my\ file  => create a file: my file
    - rm my\ file  => delete a file: my file
    - touch 'my file'  => create a file: my file
    - rm 'my file'  => delete a file: my file

    - realpath name_of_file

    - more another

    - cat f > f2 // Copy the content of f to f2

    - cat > f<enter>hello <enter><CTRL+D>  // Create a file f with content hello

    - cat /etc/services | less // Pipe the output of cat to less

    - rm -r folder_name // Delete the folder

    - rm -ri /home/user/my\ folder // Delete the folder

    - yes | rm -ri /bin // Delete the folder

    - mkdir -p D1/D2/D3 // Create the folder

    - rm -r /home/user/music // Delete the folder

    - mv ../miscellaneous ../other // Move the folder

    - cat > f1

    - cp f1 f2 // Copy the file

    - cat f2 > f1 // Copy the file

    - cp -r d1 d2 // Copy the folder

    - echo p* // Print the files starting with p

    - echo /usr/bin/s* // Print the files starting with s in the /usr/bin directory

    - find . -name "text.txt" // Find the file in the current directory

    - find / -type f -name '*secret*' 2>/dev/null       // Find the file in the root directory

    - ls /usr/bin | awk 'length($0) == 14'

    - gcc -o program program.c // Compile the program

    - free -m // Show the memory

    - free -b // Show the memory

    - top --help // Show the help

    - top -b -n 1 | head -n 12 // Show the top processes

    - ls /usr/include > headers.txt // Save the output to the file

    - ls /usr/lib > libraries.txt // Save the output to the file


 Compile program.c:
 gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c program.c -o program.o

 Compile weatherstats.c:
gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weatherstats.c -o weatherstats.o


 Link the object files to create the executable program:
 gcc -std=c11 -Wall -fmax-errors=10 -Wextra weatherstats.o program.o -o program


 Compile myNewProgram.c:
 gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c myNewProgram.c -o myNewProgram.o


 Correctly link myNewProgram.o and weatherstats.o to create the executable myNewProgram:
 gcc -std=c11 -Wall -fmax-errors=10 -Wextra myNewProgram.o weatherstats.o -o myNewProgram


 Run myNewProgram:
 ./myNewProgram




 ////////////////----- Make file -----////////////////////////////

 program: program.o weatherstats.o
    gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.o weatherstats.o -o program

program.o: program.c weatherstats.h
    gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c program.c -o program.o


weatherstats.o: weatherstats.c
    gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weatherstats.c -o weatherstats.o

clean:
    rm -f program.o weatherstats.o program

launch:
    ./program



 // ------ Correct Makefile ----

 # define the c compiler to use
 CC = gcc

 # define any compile-time flags
 CFLAGS = -std=c11 -Wall -fmax-errors=10 -Wextra

 # define library paths in addition to /usr/lib
 LIBS =

 # define the object files that this project needs
 OBJFILES = program.o weatherstats.o
 # define the name of the executable file

 MAIN = program

 # all of the below is generic - one typically only adjusts the above

 all: $(MAIN)

 $(MAIN): $(OBJFILES)
     $(CC) $(CFLAGS) -o $(MAIN) $(OBJFILES)

 %.o: %.c
    $(CC) $(CFLAGS) -c -o $@ $<

 clean:
    rm -f $(OBJFILES) $(MAIN)



 ////////////////////////----- Create Libraries -----////////////////////////////
Static Library:
 - gcc -c weatherstats.c -o weatherstats.o // Create the object file
 - ar rcs libweather.a weatherstats.o  // Create the library
 - gcc -o program program.o libweather.a // Link the library to the program
 -./program // Run the program
   or
 - gcc -o program program.o -L. -lweather // Link the library to the program



 ////////////////////////----- Pass argument -----////////////////////////////
 in the main
  int main(int argc, char *argv[]) {
    printf("The program name is: %s\n", argv[0]);
    printf("The first argument is: %s\n", argv[1]);
    printf("The second argument is: %s\n", argv[2]);
    return 0;
  }


 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Invalid input.\n");
        return 0;
    }

    int num_plants;
    double price_per_plant, total_cost;

    // Convert command line arguments
    num_plants = atoi(argv[1]);
    price_per_plant = atof(argv[2]);

    // Calculate total cost
    total_cost = num_plants * price_per_plant;

    // Print the invoice
    printf("%d plants for %.2f dollars each cost %.2f dollars.\n", num_plants, price_per_plant, total_cost);

    return 0;
}

/*

// File
 FILE *ifile;

ifile = fopen("input.txt", "r"); // Open the file for reading


fsconf(ifile, "%d %d", &num1, &num2); // Read the integers from the file



 #include <stdio.h>

int main() {
    FILE *file = fopen("studentGrades.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int num_grades, grade, i;
    int sum = 0;
    double average;

    // Read the number of grades
    if (fscanf(file, "%d", &num_grades) != 1) {
        printf("Failed to read the number of grades.\n");
        fclose(file);
        return 1;
    }

    // Read each grade and sum them
    for (i = 0; i < num_grades; i++) {
        if (fscanf(file, "%d", &grade) != 1) {
            printf("Failed to read grade %d.\n", i+1);
            fclose(file);
            return 1;
        }
        sum += grade;
    }

    // Calculate the average
    average = (double)sum / num_grades;

    // Print the average formatted to 2 decimal places
    printf("%.2f\n", average);

    fclose(file);
    return 0;
}



 #include <stdio.h>

int main() {
    FILE *file = fopen("gradeComparison.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    double myClassGrade, otherClassGrade;
    int classIndex = 1, firstBetterClass = 0;

    // Read the first average grade which belongs to your class
    fscanf(file, "%lf", &myClassGrade);

    // Iterate over the other grades and compare
    while (fscanf(file, "%lf", &otherClassGrade) == 1) {
        classIndex++;
        if (otherClassGrade > myClassGrade) {
            if (firstBetterClass == 0) {  // Save the index of the first better class
                firstBetterClass = classIndex;
            }
        }
    }

    // Check the result and print accordingly
    if (firstBetterClass == 0) {
        printf("Yes\n");
    } else {
        printf("No %d\n", firstBetterClass);
    }

    fclose(file);
    return 0;
}


 #include <stdio.h>

int main() {
    int inputGrade, lastGrade;
    FILE *file;

    // Read the grade from user input
    printf("Enter the grade to check: ");
    scanf("%d", &inputGrade);

    // Open the file to read
    file = fopen("myGrades.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read grades until the end of file to get the last grade
    while (fscanf(file, "%d", &lastGrade) != EOF) {
        // Continue until the end
    }

    fclose(file); // Close the file after reading

    // Compare the last grade from the file with the input grade
    if (lastGrade != inputGrade) {
        // Open the file to append the new grade if they do not match
        file = fopen("myGrades.txt", "a");
        if (file == NULL) {
            printf("Error opening file\n");
            return 1;
        }

        fprintf(file, " %d", inputGrade); // Append the new grade
        fclose(file); // Close the file after appending
    }

    // Reopen the file to read and print its contents
    file = fopen("myGrades.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Current grades in the file:\n");
    while (fscanf(file, "%d", &lastGrade) != EOF) {
        printf("%d ", lastGrade);
    }
    printf("\n");

    fclose(file); // Close the file after reading
    return 0;
}



 */















