# Calculator 🧮
it's my first project

Calculator 🧮
A console calculator written in C++, developed from scratch as a learning project.
The project evolves version by version — from a basic 4-operation calculator to a multi-number expression solver.
Versions Alpha
VersionWhat's new:
v0.0.1 AlphaBasic operations: +, -, *, /. Two int numbers. Single calculation, then exit
v0.0.2 AlphaVariables cleaned up, Ans moved outside if-blocks. Division returns double via cast
v0.0.3 AlphaAll numbers switched to double. Added exponentiation via std::pow. Infinite loop — no need to restart. Added setprecision(3)
v0.0.4 AlphaAny number of operands via std::vector. Operator priority — * and / are resolved first using erase(). Division by zero protection

How to use (v0.0.4)

Enter the count of numbers, then the numbers separated by spaces
Enter the signs between them:

1 = +    2 = -    3 = *    4 = /
Example = 2 + 3 * 4:
Enter count and numbers: 3
                         2 3 4
Enter signs:             1 3
Result: 14
Stack

Language: C++
Libraries: iostream, vector, cmath, iomanip, Windows.h
Platform: Windows (console)

Roadmap

 v0.1.0 Beta — graphical interface (Qt or similar)
 Themes and sound customization
 Three modes: basic / advanced / scientific

About
Started: May 2026
Author: GuggeGeek — 8th grade student, learning C++ from scratch
Educational project. Not for commercial use.
