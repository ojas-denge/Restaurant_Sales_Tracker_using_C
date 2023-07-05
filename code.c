#include <stdio.h>
int main () {
  int menu_prices[] = {400, 700, 600, 900, 800, 300, 500};
  int num_customers[7] = {0};
  int revenue [7] = {0};
  int total_customers = 0;
  int total_revenue = 0;
  int max_revenue_day = 0;
  
  printf("**********MENU**********\n\n");
  printf("1 - Crispy Calamari Rings ₹400\n");
  printf("2 - Prawn Pie ₹700\n");
  printf("3 - Sticky Toffee Pudding ₹600\n");
  printf("4 - Yorkshire Lamb Patties ₹900\n");
  printf("5 - Roast Lamb Salad ₹800\n");
  printf("6 - Stuffed Jacket Potatoes ₹300\n");
  printf("7 - Paneer Steak ₹500\n");
  printf("\n");
  
    for (int day = 1; day <= 7; day++) {
      printf("\nEnter the number of customers on day %d: ", day);
      scanf("%d", &num_customers[day-1]);
      
      for (int i = 0; i < num_customers[day-1]; i++) {
        printf("\nEnter the dish ordered by customer %d (1-7):", i+1);
        int dish;
        scanf("%d", &dish);
        revenue[day-1] += menu_prices[dish-1];
      }
      
      total_customers += num_customers[day-1];
      total_revenue += revenue[day-1];
      if (revenue[day-1] > revenue[max_revenue_day]) {
        max_revenue_day = day-1;
      }
    }
  
    printf("\nStatics:\n");
    printf("Total number of customers in the week: %d\n\n", total_customers);
    printf("Average number of customers per day: %.2f\n\n", (float) total_customers / 7);
    printf("Total revenue generated in the week: %d\n\n", total_revenue);
    printf("Average revenue generated per day: %.2f\n\n", (float) total_revenue / 7);
    printf("Day with the most revenue: Day %d\n\n", max_revenue_day+1);
  
    return 0;
}
