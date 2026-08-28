#include <stdio.h>
int main() {
    float tea_qty=3;
    float tea_price=60;
    float samosa_qty=4;
    float samosa_price=40.50;
    float chickenroll_qty=2;
    float chickenroll_price=120;
    printf("================= FAST CAFETERIA RECEIPT =================\n");
    printf("Item\t\t\tQty\t\t\tUnit Price\t\t\tSubtotal\n");    
    printf("----------------------------------------------------------\n");
    printf("Tea\t\t\t\t%.2f\t\t%.2f\t\t\t\t%.2f\n",tea_qty,tea_price,tea_qty*tea_price);
    printf("Samosa\t\t\t%.2f\t\t%.2f\t\t\t\t%.2f\n",samosa_qty,samosa_price,samosa_qty*samosa_price);
    printf("ChickenRoll\t\t%.2f\t\t%.2f\t\t\t\t%.2f\n",chickenroll_qty,chickenroll_price,chickenroll_qty*chickenroll_price);
    float subtotal=(chickenroll_qty*chickenroll_price)+(samosa_qty*samosa_price)+(tea_qty*tea_price);
    printf("----------------------------------------------------------\n");
    printf("Subtotal:\t\t\t\t\t\t\t\t\t\tPKR %.2f\n",subtotal);
    printf("GST:\t\t\t\t\t\t\t\t\t\t\tPKR %.2f\n",0.16*subtotal);
    printf("==========================================================\n");
    printf("Grand Total:\t\t\t\t\t\t\t\t\tPKR %.2f\n",(subtotal*0.16)+subtotal);
    printf("================= THANK YOU FOR YOUR VISIT ===============\n");    
    return 0;
}