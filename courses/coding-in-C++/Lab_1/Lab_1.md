# Lab 1: From C to C++

This lab focuses on getting started with C++ especially for programmers familiar with C.

All the following sections of this and the other labs in this directory follow the following level of dificulty:

🟢 __Simple__: A simple coding task that usually guides you step by step through the process and focuses on learning the basics. It should not take more than 15min to finish it. 

🟡 __Moderate__: A coding task that usually states a moderate problem to test your understanding and transfer skills from syntax to real-world applications. These tasks can be solved in about 30mins depending on your knowledge.

🔴 __Complex__: Quite a difficult or lengthy coding task that requires you to use the acquired knowledge of the previous tasks in a broader context or project. Such tasks might take up to a few hours to solve them.

## 🟢 Section I: Get running
The goal of this section is to run your first C++ project.

### Task Description

* Open GitHub Codespace with the C++ project configuration
* Create a file called helloWorld.cpp
* Write an application that prints __Hello World!__ on the console
* Now open the "Run & Debug" view in VSCode and select the "Run/Debug C++" option before pressing the green Play-Button
* Ensure that the text is correctly printed out on the terminal
* Now navigate with the terminal into the folder where you stored your helloWorld.cpp
* Delete the previously created executeable file from the folder
* Execute the following command:
```bash
g++ helloWorld.cpp -o helloWorld
```
* Then run the newly created executable file with:
```shell
./helloWorld
```

### Hints
* Feel free to repeat this process on your local machine to ensure a correct setup there too
* If you struggle with these steps or wonder how to get running on your private, local machine, you can follow the lab1 of the C course which can be found [in this same repo](https://github.com/christian-braunagel/study-code/tree/main/courses/coding-in-C/Lab_1)

## Section II

Create a flow chart for the programm developed in Section I.
You can use [draw.io](https://www.drawio.com/) as a free tool to create the flow chart.

## Section III: Chessboard with Border and Alternating Fields

### Task Description

Extend the program from **Section I** so that the chessboard is printed as a **graphical board with borders**, labels, and a **correctly alternating field pattern**, similar to a real chessboard.

Instead of printing only the coordinates, your program shall visualize the board using ASCII characters.

The output must include:

- a surrounding grid made of `+`, `-`, and `|`
- file labels (`A` to `H`) printed **above and below** the board
- rank labels (`8` to `1`) printed **on the left and right** of each row
- a visual representation of the fields using characters (e.g. `###` for dark squares and spaces for light squares)
- a **checkerboard pattern**, where field colors alternate:
  - horizontally within a row
  - vertically from one row to the next

A schematic example of the intended structure:

![Image of final output for Section III](https://github.com/christian-braunagel/study-code/blob/main/courses/coding-in-C/Lab_2/schematicOutput.png)


(The exact characters and spacing must match your implementation.)

### Requirements

Your program must:

- not hard-code any rows, columns, or fields
- print rank numbers on **both the left and right side** of the board
- print file letters **above and below** the board
- visually distinguish light and dark squares
- ensure that the field pattern alternates correctly
- use constants (e.g. board size) where appropriate

The purpose of this task is to practice:

- nested loop logic
- conditional statements
- formatted output with `printf`
- translating a conceptual model (chessboard) into structured program output

### Hint (Optional)

Think about how the **row index and column index together** can be used to decide whether a field is light or dark.

