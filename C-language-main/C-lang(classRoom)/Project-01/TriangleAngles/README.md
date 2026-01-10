
# 🔺 Third Angle of a Triangle Calculator in C 💻

## 📄 Description

This program calculates the **third angle** of a triangle when the other **two angles** are given.

* In a triangle, the sum of all angles is always **180°**.
* Formula:

[
\text{Third Angle} = 180 - (\text{First Angle} + \text{Second Angle})
]

Enter the first two angles, and the program will calculate the third one automatically.

---

## 🖥️ Program Code

```c
#include<stdio.h>

void main(){
    int a1, a2, a3;

    printf("Enter first and second angle: ");
    scanf("%d %d", &a1, &a2);

    a3 = 180 - (a1 + a2);

    printf("\nThird angle of the triangle = %d ° 🔺", a3);
}
```

---
## 📝 Input

The program prompts the user to enter **two angles**:

```
Enter first and second angle: 60 50
```
---
## 🎯 Output

```
Third angle of the triangle = 70 ° 🔺
```
Output Screenshot🖼️
<img width="853" height="622" alt="Screenshot 2026-01-07 095753" src="https://github.com/user-attachments/assets/504a7c67-7d2b-4e1c-a1f3-47ef5b00d7fd" />

---
