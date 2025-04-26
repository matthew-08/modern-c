#include <stdio.h>
#include <string.h>


int main() {

   int gs1, grp_id, pub_code, item_num, check_dig;
   printf("Enter ISBN: ");
   scanf("%d-%d-%d-%d-%d", &gs1, &grp_id, &pub_code, &item_num, &check_dig);
   printf("GS1 prefix: %d\n", gs1);
   printf("Group identifier: %d\n", grp_id);
   printf("Publisher code: %d\n", pub_code);
   printf("Item number: %d", item_num);
   printf("Check digit: %d", check_dig);
}