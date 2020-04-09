//Student Name: Tramg Pham

//Teacher: Dr. Tyson McMillan

//Date: 4/9/2020

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

Manhattan, NY, Day 1: 50

Manhattan, NY, Day 2: 56

Manhattan, NY, Day 3: 62

Manhattan, NY, Day 4: 69

Manhattan, NY, Day 5: 56

Manhattan, NY, Day 6: 53

Manhattan, NY, Day 7: 52

Carrollton, TX, Day 1: 71

Carrollton, TX, Day 2: 62

Carrollton, TX, Day 3: 74

Carrollton, TX, Day 4: 55

Carrollton, TX, Day 5: 55

Carrollton, TX, Day 6: 60

Carrollton, TX, Day 7: 68

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of Manhattan, NY (City 1) and then for Carrollton, TX (City 2). \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

 

    return 0;

}