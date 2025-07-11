#include <stdio.h>

// Returns 1 if either switch is ON (parallel/OR), 0 otherwise
int parallel_or(int switch1, int switch2) {
    return switch1 || switch2;
}

int main() {
    int switch1 = 0; // 1 = ON, 0 = OFF
    int switch2 = 1;

    int bulb = parallel_or(switch1, switch2);

    printf("Parallel (OR): Bulb is %s\n", bulb ? "ON" : "OFF");
    return 0;
}