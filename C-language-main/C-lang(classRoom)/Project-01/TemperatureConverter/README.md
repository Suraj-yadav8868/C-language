
# 🌡️ Celsius to Fahrenheit Converter in C 💻

## 📄 Description

This program converts a temperature from **Celsius (°C) 🥶** to **Fahrenheit (°F) 🔥** using the formula:

[
\text{Fahrenheit} = \left(\frac{9}{5} \times \text{Celsius}\right) + 32
]

Simply enter the temperature in Celsius, and the program will calculate its equivalent in Fahrenheit.

---

## 🖥️ Program Code

```c
#include<stdio.h>

void main(){
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5.0 * celsius) + 32;

    printf("\nTemperature in Fahrenheit = %.2f °F 🌡️", fahrenheit);
}
```

---

## 📝 Input

The program prompts the user to enter temperature in Celsius:

```
Enter temperature in Celsius: 37
```

---

## 🎯 Output

```
Temperature in Fahrenheit = 98.60 °F 🌡️
```

Output Screenshot🖼️
<img width="851" height="622" alt="Screenshot 2026-01-07 095435" src="https://github.com/user-attachments/assets/9e6a376e-2e50-41ac-9abb-555f2d39737e" />

---
