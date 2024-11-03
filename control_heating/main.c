#include <stdio.h>

void control_heating(float temperature) {
    if (temperature < 18.0) {
        printf("Temperatura: %.1f°C. Ação: Ligar o aquecimento.\n", temperature);
    } else if (temperature > 24.0) {
        printf("Temperatura: %.1f°C. Ação: Desligar o aquecimento.\n", temperature);
    } else {
        printf("Temperatura: %.1f°C. Ação: Manter o estado atual.\n", temperature);
    }
}

int main() {
    // Simulando algumas leituras de temperatura
    float temperatures[] = {16.5, 19.0, 25.2, 23.0, 17.5};
    int num_readings = sizeof(temperatures) / sizeof(temperatures[0]);

    for (int i = 0; i < num_readings; i++) {
        control_heating(temperatures[i]);
    }

    return 0;
}