
# Sum of Digits Program in C

## 📌 Problem Statement
Develop a C program to **find the sum of digits** of a given number using a **while loop**.

### 🔹 Example
```

Input : 638
Output: 17

````
(6 + 3 + 8 = 17)

---

## 🧠 Logic Used
- Take an integer input from the user
- Extract the last digit using `% 10`
- Add the digit to `sum`
- Remove the last digit using `/ 10`
- Repeat until the number becomes 0

---

## 💻 Source Code
```c
#include<stdio.h>

void main(){
    int num, sum = 0;

    printf("Enter Number to find digits: ");
    scanf("%d", &num);

    while(num > 0){
        int result = num % 10;
        sum += result;
        num /= 10;
    }

    printf("%d", sum);
}
````

---

## 📷 Output Screenshot
<img width="729" height="664" alt="Screenshot 2026-01-05 215245" src="https://github.com/user-attachments/assets/0e390b5a-565f-4aab-a60e-e7d3f9ea51c0" />




---

## ✅ Concepts Covered

* `while` loop
* Modulus operator `%`
* Integer division
* Basic arithmetic operations

---

