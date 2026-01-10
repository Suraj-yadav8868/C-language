
# Alphabet Skipping Program (Do-While Loop)

## 📌 Description
This C program prints alphabets from **A to Z** by **skipping 2 alphabets** each time using a **do-while loop**.

### 🔹 Example Output
```

A E I M Q U Y

````

---

## 🧠 Logic Used
- Start from alphabet **'A'**
- Print the character
- Increase ASCII value by **4** (skip 2 alphabets)
- Repeat using a **do-while loop**

---

## 💻 Source Code
```c
#include<stdio.h>

void main(){
    int i = 1;
    char alpha = 65;   // 'A'

    do{
        printf("%c ", alpha);
        i++;
        alpha += 4;
    }while(i <= 13);
}
````

---

## 📷 Output Screenshot
<img width="713" height="660" alt="Screenshot 2026-01-05 211146" src="https://github.com/user-attachments/assets/b2e0e762-4f93-4487-8360-469a5b67a73b" />



---

## ✅ Concepts Covered

* `do-while` loop
* ASCII values
* Character manipulation in C

---


