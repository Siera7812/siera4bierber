#include <stdio.h>

int main() {
    int initial_balance = 50000;
    int withdrawal_amount = 20000;
    int remaining_balance = initial_balance - withdrawal_amount;

    printf("Your account balance is: %d\n", remaining_balance);

    return 0;
}
