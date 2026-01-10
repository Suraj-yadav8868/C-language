
# Digit Count Program in C

## 📌 Problem Statement
Develop a C program to **count the total number of digits** in a given number.

### 🔹 Example
```

Input : 638
Output: 3 digits

````

---

## 🧠 Logic Used
- Take an integer input from the user
- Divide the number by **10** repeatedly
- Count how many times the loop runs
- Each division removes one digit

---

## 💻 Source Code
```c
#include<stdio.h>

void main(){
    int i, num, count = 0;

    printf("Enter Number to find digits: ");
    scanf("%d", &num);

    for(i = 1; num >= 1; i++){
        num /= 10;
        count++;
    }

    printf("%d", count);
}
````

---

## 📷 Output Screenshot
<img width="713" height="663" alt="Screenshot 2026-01-05 214151" src="https://github.com/user-attachments/assets/9edecc50-265c-40fa-b9b9-278a5e0ec6fa" />



---

## ✅ Concepts Covered

* `for` loop
* Integer division
* Counting logic
* User input using `scanf()`

---


