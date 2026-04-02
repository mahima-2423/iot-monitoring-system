#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>  // For Sleep on Windows

// Simulated sensor value reading
int read_sensor() {
    return rand() % 100;  // Random value between 0-99
}

// Process the sensor data
void process_data(int value) {
    if (value > 70) {
        printf("ALERT: High Value = %d\n", value);
    } else {
        printf("Normal Value = %d\n", value);
    }
}

// Simulate sending data to cloud
void send_to_cloud(int value) {
    printf("Sending to cloud: %d\n", value);
}

int main() {
    srand(time(0));  // Initialize random seed

    int total_iterations = 2;  // Run only 2 times

    printf("=== Smart Industrial Monitoring System Simulation ===\n\n");

    for (int i = 1; i <= total_iterations; i++) {
        int sensor_value = read_sensor();
        printf("Iteration %d:\n", i);
        printf("Sensor Value: %d\n", sensor_value);

        process_data(sensor_value);
        send_to_cloud(sensor_value);

        printf("-------------------------\n");
        Sleep(2000);  // 2-second delay
    }

    printf("\n✅ Program completed successfully!\n");
    return 0;
}