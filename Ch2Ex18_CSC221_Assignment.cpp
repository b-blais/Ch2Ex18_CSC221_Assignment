/*
Title: Chapter 2 Exercise 18 - Energy Drink Consumption Part A
File Name : Chapter2Exercise18_Brion_Blais
Programmer : Brion Blais
Date : 09 / 2024
Requirements :
        A soft drink company recently surveyed 16,500 of its customers and found that approximately 
        15 percent of those surveyed purchase one or more energy drinks per week. Of those customers 
        who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. 
        
        Write a program that displays the following:
            � The approximate number of customers in the survey who purchase one or more energy drinks per week.
            � The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

        Create a second branch that revises your code so that the user can enter the number of the number of customers that were surveyed.
*/

#include <iostream>
using namespace std;

int main()
{
    const int SURVEY_SIZE = 16500;
    const double PERCENT_THAT_BUY_WEEKLY = 0.15;
    const double PERCENT_THAT_PREFER_CITRUS = 0.58;
    
    // Using int despite the percentages being doubles, as the return is an approximation and you shouldn't have fractional people.
    int customersWhoPurchase = SURVEY_SIZE * PERCENT_THAT_BUY_WEEKLY;
    int customersThatPreferCitrus = customersWhoPurchase * PERCENT_THAT_PREFER_CITRUS;

    cout << "Of the " << SURVEY_SIZE << " surveyed, approximately " << customersWhoPurchase << " purchase one or more energy drinks per week.\n";
    cout << "In turn, approximately " << customersThatPreferCitrus << " of those prefer citrus-flavored energy drinks.\n";

    return 0;
}