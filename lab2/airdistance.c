#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Function to convert degrees to radians
double degrees_to_radians(double degrees) {
    return degrees * 3.14 / 180;
}

// Function to compute distance between two locations
double compute_distance(double lat1, double lon1, double lat2, double lon2) {
    // Convert latitude and longitude to radians
    lat1 = degrees_to_radians(lat1);
    lon1 = degrees_to_radians(lon1);
    lat2 = degrees_to_radians(lat2);
    lon2 = degrees_to_radians(lon2);

    // Compute difference in longitude
    double delta_lon = lon2 - lon1;

    // Compute distance using Spherical Law of Cosines
    double distance = acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(delta_lon)) * 6371;

    return distance;
}

int main() {
    double lat1, lon1, lat2, lon2;

    // Prompt the user to enter latitude and longitude of origin and destination
    printf("Enter latitude of origin: ");
    scanf("%lf", &lat1);
    printf("Enter longitude of origin: ");
    scanf("%lf", &lon1);
    printf("Enter latitude of destination: ");
    scanf("%lf", &lat2);
    printf("Enter longitude of destination: ");
    scanf("%lf", &lon2);

    // Compute distance
    double distance = compute_distance(lat1, lon1, lat2, lon2);

    // Print the distance
    printf("The distance between the two locations is %.2f kilometers.\n", distance);

    return 0;
}