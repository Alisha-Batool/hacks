// prototypes
double degreesToRadians(double degree);
double getAirDistance(double originLatitude,double originLongitude,double destinationlatitude,double destinationLongitude);
double lorentzTimeDilation(double t, double percentC);

// write function to convert degree into radians
double degreesToRadians(double degree)
{
   return (degree* 3.14 / 180); 
}

// a function to compute the air distance between two locations identified by their latitude/longitude
double getAirDistance(double originLatitude,double originLongitude,double destinationlatitude,double destinationLongitude)
{
    // Function call
    originLatitude= degreesToRadians(originLatitude);
    originLongitude= degreesToRadians(originLongitude);
    destinationlatitude= degreesToRadians(destinationlatitude);
    destinationLongitude= degreesToRadians(destinationLongitude);
    //calculate airdistance
    double delta= destinationLongitude - originLongitude;
    // average radius of earth in kilometer
    int R= 6371000;
    double d;
    d= arccos(sin(originLatitude)*sin(destinationlatitude) + cos(originLatitude)*cos(destinationlatitude)* cos(delta))* R;
    return d;
}
// a function to compute the dilated time given the normal time t 
// (units may vary) and the percentage of the speed of light
double lorentzTimeDilation(double t, double percentC)
{
    // speed of light in m/s 299,792,458
    double c = 299792458; 
    double v = percentC * c;
    return (t / sqrt(1 - pow(v/c, 2)));
}