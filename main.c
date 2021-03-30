#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
struct cars
{
    int id;
    char time[20];
    char start_place[20];
    char end_place[20];
    char car_name[20];
    char driver_name[20];

};

int main()
{
    while(1)
    {
    printf("===============================================================================\n");
    printf("*******************************************************************************\n");
    printf("                   ###### Welcome to car management system ###### \n\n");
    printf("                                  chose your option\n\n");
    printf("                                   1.Add car details \n ");
    printf("                                  2.Show all cars \n");
    printf("                                   3.Search a car \n");
    printf("                                   4.Delete a car \n");
    printf("                                   5.Edit a car details\n");
    printf("                                    Your option :");

    int option;
    scanf("%d",&option);
    printf("*******************************************************************************\n");
    printf("===============================================================================\n");
    struct cars car[50];
    switch(option)
    {
    case 1:
        system("cls");
        printf("\n\nAdd car details:\n");
        printf("\nHow many cars details you want to add ?: ");
        int i,num;
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            printf("\nEnter you car details :%d\n",i+1);
            printf("\nEnter car id :");
            scanf("%d",&car[i].id);
            printf("\nTime:");
            scanf("%s",&car[i].time);
            printf("\nStart place:");
            scanf("%s",&car[i].start_place);
            printf("\nEnd place:");
            scanf("%s",&car[i].end_place);
            printf("\nCar name:");
            scanf("%s",&car[i].car_name);
            printf("\nDriver name:");
            scanf("%s",&car[i].driver_name);
        }
        system("cls");
        break;
    case 2:
        system("cls");
        printf("\n\n All car details\n");
        for(i=0;i<num;i++)
        {
            printf("car:%d\n",i+1);
            printf("car id:%d\n",car[i].id);
            printf("time :%s\n",car[i].time);
            printf("start place :%s\n",car[i].start_place);
            printf("end place :%s\n",car[i].end_place);
            printf("car name :%s\n",car[i].car_name);
            printf("driver name :%s\n",car[i]. driver_name);

        }
        break;
         case 3:
             system("cls");
        printf("\n\n Show a car\n");
        printf("Enter the car id you want show :");
        int x;
        scanf("%d",&x);
         for(i=0;i<num;i++)
        {
            if(car[i].id==x)
            {
            printf("\ncar:%d\n",i+1);
            printf("car id:%d\n",car[i].id);
            printf("time :%s\n",car[i].time);
            printf("start place :%s\n",car[i].start_place);
            printf("end place :%s\n",car[i].end_place);
            printf("car name :%s\n",car[i].car_name);
            printf("driver name :%s\n",car[i]. driver_name);
            }


        }
        break;


    case 4:
        system("cls");
        printf("\n\n Delete a car details :");
        printf("Enter id of the car:");
        int idd;
        scanf("%d",&idd);
        for(i=0;i<num;i++)
        {
            if(car[i].id==idd)
            {
                num--;
            }
        }
        system("cls");
        break;
    case 5:
        system("cls");
        printf("\n\n Edit a car details \n");
        printf("Enter id of the car\n");
        int iid;
        scanf("%d",&iid);
        for(i=0;i<num;i++)
        {
            if(car[i].id==iid)
            {
            printf("\nEnter you car details :%d\n",i+1);
            printf("\nEnter car id :");
            scanf("%d",&car[i].id);
            printf("\nTime:");
            scanf("%s",&car[i].time);
            printf("\nStart place:");
            scanf("%s",&car[i].start_place);
            printf("\nEnd place:");
            scanf("%s",&car[i].end_place);
            printf("\nCar name:");
            scanf("%s",&car[i].car_name);
            printf("\nDriver name:");
            scanf("%s",&car[i].driver_name);
            }
        }
        system("cls");
        break ;
        default :
        printf("\nEnter the right option\n");
    }
    }
    return 0;
}
