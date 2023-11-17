#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

void gotoxy(int x, int y) {
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    
}

int x,y;
  int choice;
   char repeat;
int main ()

{  
   {
		for (x =20; x <= 100 ;x++)
		{
			gotoxy(x, 6); // this is for the upper side of the border
			
			printf("=");
		}
		for (y = 7; y <= 40; y++)
		{
			gotoxy(20, y);
			printf("0"); // this is for left side of border
		}
		for (y = 7; y <= 40; y++)
		{
			gotoxy(100, y); // this is for right side of border
			printf("1");
		}
		for (x = 20; x <=100; x++)
		{
			gotoxy(x, 40);
			printf("2"); //this is for the lower part of the border
		}
		}
  do {
     gotoxy(45,7);

	printf("CHOOSE A SHAPE\n");
    gotoxy(45,8);
    printf("1. CIRCLE\n");
    gotoxy(45,9);
	printf("2. RECTANGLE\n");
    gotoxy(45,10);
    printf("3. TRIANGLE\n");
    gotoxy(35,11);
    printf(">> ");
     scanf("%d", &choice);
^
    
        
    
    switch(choice) {
        case 1:
            // Circle
            {
                double radius;
                gotoxy(35,15);
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);

                int option;
                gotoxy(35,17);
                printf("Select an option:\n");
                gotoxy(35,18);
                printf("1. Circumference\n");
                 gotoxy(35,19);
                printf("2. Area\n");
                gotoxy(35,20);
                printf("3. Diameter\n");
                gotoxy(35,21);
                printf(">> ");

                scanf("%d", &option);

                switch(option) {
                    case 1:
                     gotoxy(35,22);
                        printf("Circumference: %.2lf\n", 2 * M_PI * radius);
                        break;
                    case 2:
                         gotoxy(35,23);
                        printf("Area: %.2lf\n", M_PI * radius * radius);
                        break;
                    case 3:
                         gotoxy(35,24);
                        printf("Diameter: %.2lf\n", 2 * radius);
                        break;
                    default:
                         gotoxy(35,25);
                        printf("Invalid option for circle.\n");
                }
            }
            break;
        case 2:
            // Rectangle
            {
                double length, width;
                 gotoxy(35,15);
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                 gotoxy(35,16);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);

                int option;
                 gotoxy(35,18);
                printf("Select an option:\n");
                gotoxy(35,19);
                printf("1. Perimeter\n");
                 gotoxy(35,20);
                printf("2. Area\n");
                 gotoxy(35,21);
                printf("3. Diagonal\n");
                 gotoxy(35,22);
                scanf("%d", &option);
                 gotoxy(35,23);
                 printf(">> ");


                switch(option) {
                    case 1:
                        gotoxy(35,25);
                        printf("Perimeter: %.2lf\n", 2 * (length + width));
                        break;
                    case 2:
                        gotoxy(35,26);
                        printf("Area: %.2lf\n", length * width);
                        break;
                    case 3:
                        gotoxy(35,27);
                        printf("Diagonal: %.2lf\n", sqrt(length * length + width * width));
                        break;
                    default:
                        gotoxy(35,28);
                        printf("Invalid option for rectangle.\n");
                }
            }
            break;
        case 3:
            // Triangle
            {
                double side1, side2, side3;
                gotoxy(35,15);
                printf("Enter the lengths of the three sides of the triangle: ");
                 gotoxy(35,16);
                 printf(">> ");
                scanf("%lf %lf %lf", &side1, &side2, &side3);

                int option;
                gotoxy(35,17);
                printf("Select an option:\n");
                gotoxy(35,18);
                printf("1. Area\n");
                gotoxy(35,19);
                printf("2. Perimeter\n");
                gotoxy(35,20);
                printf(">> ");

                scanf("%d", &option);

                switch(option) {
                    case 1:
                        {
                            double s = (side1 + side2 + side3) / 2;
                             gotoxy(35,22);
                            printf("Area: %.2lf\n", sqrt(s * (s - side1) * (s - side2) * (s - side3)));
                        }
                        break;
                    case 2:
                     gotoxy(35,23);
                        printf("Perimeter: %.2lf\n", side1 + side2 + side3);
                        break;
                        gotoxy(35,24);
                    default:
                     gotoxy(35,25);
                        printf("Invalid option for triangle.\n");
                }
            }
            break;
        default:
         gotoxy(35,15);
            printf("Invalid choice.\n");
    }
    gotoxy(35,30);
     printf("Do you want to calculate again? (y/n): ");
     gotoxy(35,31);
     printf(">> ");
        scanf(" %c", &repeat); 
        getch();
        system("cls");

    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}
