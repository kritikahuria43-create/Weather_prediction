#include <stdio.h>

int main() {
    float temperature, humidity, windSpeed;

    printf("===== Simple Weather Prediction System =====\n");

    // Taking user input
    printf("Enter Temperature (in °C): ");
    scanf("%f", &temperature);

    printf("Enter Humidity (in %%): ");
    scanf("%f", &humidity);

    printf("Enter Wind Speed (in km/h): ");
    scanf("%f", &windSpeed);

    printf("\nWeather Prediction: ");

    // Predict weather using simple logic
    if (temperature > 35 && humidity < 50) {
        printf("It's likely to be Sunny ☀️\n");
    }
    else if (temperature < 20 && humidity > 80) {
        printf("It might Rain 🌧️\n");
    }
    else if (humidity > 85 && windSpeed > 30) {
        printf("Stormy Weather ⛈️\n");
    }
    else if (temperature >= 20 && temperature <= 30 && humidity >= 60 && humidity <= 80) {
        printf("Cloudy ⛅\n");
    }
    else {
        printf("Normal or Mild Weather 🌤️\n");
    }

    printf("\nThank you for using the Weather Prediction System!\n");
    return 0;
}
