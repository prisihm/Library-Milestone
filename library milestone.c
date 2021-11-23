/****************************
   Project; Library system
   Author; Mark Kim
   Date; October 2021
   Language; C99
   Compiler; GCC
   License; MIT

***************************/


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu();
void execute_action(int action);
int main()
{
    int action;
    action=menu();
    execute_action(action);
    return 0;
}
int menu()
{
int action;
    do{
        printf("\tCounty Library Systems\n");
        printf("login");
        printf("Welcome Priscillah Mwangi,\n");
        printf("What would you like to?\n");
        printf("1, View User,\n");
        printf("2, Add User,\n");
        printf("3, Edit User,\n");
        printf("4, Delete User,\n");
        printf("5, Change Password,\n");
        printf("6, Log Out,\n");
        printf("7, Exit System,\n");
        printf("Selected action (1-7):");
        scanf ("%d",&action);
        if(action<1||action>7) {
                system("cls");
                printf("Invalid Action,Try again");
        }
    }while(action<1||action>7);

     return action;

}
void execute_action(int action){
    switch(action){
    case 1:
        printf("List of users\n");
        break;
    case 2:
        printf("Add new user\n");
        break;
    case 3:
        printf("Editing user\n");
        break;
    case 4:
        printf("Deleting user\n");
        break;
    case 5:
        printf("Changing Password\n");
        break;
    case 6:
        printf("You have been logged out\n");
        break;
    case 7:
        close();
        break;
    default:
        printf("Invalid action\n");

    }

}
void close(){
    printf("Thanks for using the system\n");
    printf("Created by Priscillah Mwangi\n");
    printf("Bye\n");
    Sleep(2000);
    exit(0);
}

