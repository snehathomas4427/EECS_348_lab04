
#include <stdio.h>

float celsius_to_fahrenheit(float celsius){ //converts celsius_to_fahrenheit
    float f = (9.0/5.0)*celsius + 32;
    return f;
}
    
float celsius_to_kelvin(float celsius){ //converts celsius_to_kelvin
    float k = celsius + 273.15;
    return k;
}

float fahrenheit_to_celsius(float fahrenheit){ //converts fahrenheit_to_celsius
    float c = (5.0/9.0)*(fahrenheit - 32);
    return c;
}

float fahrenheit_to_kelvin(float fahrenheit){ //converts fahrenheit_to_kelvin
    float k = (fahrenheit - 32)*(5.0/9.0) + 273.15;
    return k;
}

float kelvin_to_celsius(float kelvin){ //converts kelvin_to_celsius
    float c = kelvin - 273.15;
    return c;
}

float kelvin_to_fahrenheit(float kelvin){ //converts kelvin_to_fahrenheit
    float f = (kelvin - 273.15)*(9.0/5.0) + 32;
    return f;
}

void catog_temp(float celsuis){ //categorizes temperatures and gives weather advirsories
    if (celsuis < 0){
        printf("Temperature Category: Freezing \nWeather Advisory: Stay inside!");
    }
    else if (celsuis <= 10){
        printf("Temperature Category: Cold \nWeather Advisory: Wear a jacket.");
    }
    else if(celsuis <= 25){
        printf("Temperature Category: Comfortable \nWeather Advisory: Go on a walk.");
    }
    else if (celsuis <= 35){
        printf("Temperature Category: Hot \nWeather Advisory: Put on sunscreen.");
    }
    else{
        printf("Temperature Category: Extreme Heat \nWeather Advisory: Stay hydrated and safe!");
    }
}

int main(){
    float temp;
    int scale;
    int convert;
    while (1){

        printf("\nEnter temperature: ");
        scanf("%f", &temp);

        printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
        scanf("%d", &scale);

        printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
        scanf("%d", &convert);

        if (scale == 1){
            if (convert == 2){
                float value = celsius_to_fahrenheit(temp);
                printf("\nConverted Temperature: %.2f", value);
                printf("°F\n");
                catog_temp(temp);
                break;
            }
            else if (convert == 3){
                float value = celsius_to_kelvin(temp);
                printf("\nConverted Temperature: %.2f", value);
                printf("K\n");
                catog_temp(temp);
                break;
            }
            else if (convert == 1){
                printf("Can't convert from Celsius to Celsius");
            }
            else{
                printf("Invalid option.");
            }
        } 
        else if(scale == 2){
            if (convert == 1){
                float value = fahrenheit_to_celsius(temp);
                printf("\nConverted Temperature: %.2f", value);
                printf("°C\n");
                catog_temp(fahrenheit_to_celsius(temp));
                break;
            }
            else if (convert == 3){
                float value = fahrenheit_to_kelvin(temp);
                printf("\nConverted Temperature: %.2f", value);
                printf("K\n");
                catog_temp(fahrenheit_to_celsius(temp));
                break;
            }
            else if (convert == 2){
                printf("Can't convert from Fahrenheit to Fahrenheit");
            }
            else{
                printf("Invalid option.");
            }
        }
        else if (scale == 3){ 
            if (temp < 0){
                printf("Invalid Kelvin value (no negatives)");
            }
            else if (convert == 1){
                float value = kelvin_to_celsius(temp);
                printf("\nConverted Temperature: %.2f", value);
                printf("°C\n");
                catog_temp(kelvin_to_celsius(temp));
                break;
            }
            else if (convert == 2){
                float value = kelvin_to_fahrenheit(temp);
                printf("\nConverted Temperature: %.2f", value);
                printf("°F\n");
                catog_temp(kelvin_to_celsius(temp));
                break;
            }
            else if (convert == 3){
                printf("Can't convert from Kelvin to Kelvin");
            }
            else{
                printf("Invalid option.");
            }
            
        }
        else{
            printf("Invalid option.");
        }
    }
}