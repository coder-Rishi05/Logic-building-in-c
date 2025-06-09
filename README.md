# 🧠 C Programming Logic Building – Learning & Practice

Welcome to my logic-building journey in C programming! This repository contains simple yet insightful C programs to strengthen fundamental concepts like I/O, ASCII values, escape sequences, and screen control using `getch()`.

---

## ✅ Program: ASCII Value with `getch()`

### 🔢 Code

```c
#include <stdio.h>
#include <conio.h> // Required for getch()

int main() {
    char c;
    printf("Enter value of c : \n ");
    c = getch();  // Takes input without echoing
    printf("%c's ASCII value is : %d ", c, c);
    getch();  // Waits for another key press before exit
}

(Press any key)
A's ASCII value is : 65

#include <stdio.h>
#include <conio.h>

int main() {
    getch();         // Waits for key press
    printf("hello"); // Then prints "hello"
    getch();         // Waits again before exiting
}
