//C Program to find the sum and percentage of marks obtained by the student
#include <stdio.h>
int main()
{
        int maths,phy,chem,comp,mech,total;
        float percentage;
  //Taking input from the user
        printf("Enter marks obtained in Maths");
        scanf("%d",&maths);
        printf("Enter marks obtained in Physics");
        scanf("%d",&phy);
        printf("Enter marks obtained in Chemistry");
        scanf("%d",&chem);
        printf("Enter marks obtained in Computer");
        scanf("%d",&comp);
        printf("Enter marks obtained in Mechanics");
        scanf("%d",&mech);
  //Caculation part starts here
        total=maths+phy+chem+comp+mech;
        percentage=(float)total/5;
        printf("Total marks= %dPercentage= %.2f",total,percentage);
        return 0;
}