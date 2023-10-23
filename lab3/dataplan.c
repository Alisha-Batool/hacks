#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) 
{
  if (argc != 4) {
    fprintf(stderr, "Usage: %s <GBperperiod> <currentday> <totalGBused>\n", argv[0]);
    exit(1);
  }

  double GBperperiod = atof(argv[1]);
  int currentday = atoi(argv[2]);
  double totalGBused = atof(argv[3]);

  int days_remaining = 30 - currentday;
  double average_daily_usage = totalGBused / currentday;

  printf("%d days used, %d days remaining\n", currentday, days_remaining);
  printf("Average daily use: %.3f GB/day\n", average_daily_usage);

  if (average_daily_usage > GBperperiod) {
    printf("You are EXCEEDING your average daily use (%.3f GB/day).\n", GBperperiod);
    double projected_overage = (average_daily_usage - GBperperiod) * days_remaining;
    printf("Continuing this high usage, you'll exceed your data plan by %.3f GB.\n", projected_overage);
  } else if (average_daily_usage <= GBperperiod) {
    double average_daily_remaining = GBperperiod - average_daily_usage;
    printf("You are at or below your average daily use (%.3f GB/day).\n", GBperperiod);
    printf("You can use up to %.3f GB/day and stay below your data plan limit.\n", average_daily_remaining);
  }

  if (totalGBused >= GBperperiod) {
    printf("You have already met your limit for this month. Looks like you're getting some overage charges...\n");
  }
  
  return 0;
}