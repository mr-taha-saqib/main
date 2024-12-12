# Lab Task: File Operations in C

## Task Description

The following tasks are to be implemented in C using file operations. The goal is to perform various manipulations on text files as described below:

### Task 1: Display File Contents
- **Objective**: Read the contents of `Input_File.txt` and display its data on the terminal.
- **Marks**: [3]

### Task 2: Extract Integers
- **Objective**: Extract only the integers from `Input_File.txt` and write them to another file, which will be created at runtime.
- **Marks**: [3]

### Task 3: Extract Non-Alphabet Words
- **Objective**: Extract non-alphabet words from `Input_File.txt` and write them to another text file, which will be created at runtime.
  - **Definition**: A non-alphabet word is one in which all characters are non-alphabetic. For example, `a#$2#` is not a non-alphabet word, but `$%^&amp;#32` is.
- **Marks**: [6]

### Task 4: Invert Words Containing Vowels
- **Objective**: Identify all words in `Input_File.txt` containing one or more vowels. Invert these words and write the complete content (including both inverted and non-inverted words) into another file, which will be created at runtime.
  - **Example**: The word `computer` will be inverted to `retupmoc`.
- **Marks**: [8]

---

## Instructions
1. Write a C program to implement each task.
2. Ensure that new files created at runtime are named appropriately to reflect their purpose.
3. Validate input to handle edge cases such as empty files or invalid data.
4. Include comments in your code for clarity.

---

## Deliverables
- C source code implementing the above tasks.
- Output files generated at runtime for Tasks 2, 3, and 4.
- Documentation or comments explaining your code logic.

---

## Evaluation Criteria
- **Code Functionality**: 20 marks
  - Correct implementation of each task as described.
- **Code Readability**: 5 marks
  - Use of meaningful variable names, comments, and proper formatting.
- **Edge Case Handling**: 5 marks
  - Proper validation and handling of unexpected input.

---

## Notes
- Ensure to test your program thoroughly with various input cases.
- Use appropriate error-handling mechanisms for file operations.
