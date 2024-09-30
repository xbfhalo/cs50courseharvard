#include<stdio.h>
#include<cs50.h>

// name
// Age
// phone number

int main(void) 
{
    string first_name = get_string("What is your first name?: ");
    string last_name = get_string("What is your last name?: ");
    string age = get_string("How old are you?: ");
    string phone_number = get_string("What's your phone number?: ");
    printf("Your full contact is: \n\tFirst name - %s, \n\tLast name - %s, \n\tAge - %s, \n\tPhone number - %s", first_name, last_name, age, phone_number);
    
}