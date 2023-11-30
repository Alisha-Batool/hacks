#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "utils.h"
int main()
{ 
    
    double originLatitude, originLongitude, destinationlatitude, destinationlongitude;
    double t , numberOfYears;
    double percentC;
    
    //double lat1;
    //double lat2;
    //double lon1;
    //double lon2;
    
    // Prompt the user to enter latitude and longitude of origin and destination
    printf("Enter lattitude of origin:");
    scanf("%lf",& originLatitude);
    printf("Enter longitude of origin:");
    scanf("%lf",& originLongitude);
    printf("Enter lattitude of destination: ");
    scanf("%lf",& destinationlatitude);
    printf("Enter longitude of destination:");
    scanf("%lf",& destinationlongitude);
    //lorentz concept
    printf("Enter a time in number of year?:");
    scanf("%lf",&numberOfYears);
    // how to take value of percent c
    printf("Enter the percentage of c:");
    scanf("%lf",&percentC); 

    printf("The air distance between  two latitude/longitude points is: %lf\n");
     // todo how to write range
     // range [0,1]
     //  if ( v <= percentC)
     //   {
     //     /* code */
     //   printf("Error. velocity will not exceed from speed of light");
     //   return 1;
     //   }
    percentC= percentC / 100;
    t=(365*24*60*60)*numberOfYears;
     printf("The time dilated experienced by the travelling object is: %lf sec\n");


}