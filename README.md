# Algorithm Validation and Testing Framework

Hi! Good to see you here 😊 Let's make sure that before you copy and paste everything, check a few words below - to make sure your computer doesn't explode 💣😉

---

## Introduction

The goal of this repository is to validate the correctness and efficiency of an optimized algorithm by comparing it against a brute force solution. Using a test generator, a wide variety of test cases can be created to ensure robustness.

---

This repository contains:
- A brute force solution
- An optimized solution
- A test generation script for algorithm validation

---

## Structure

The repository contains the following files:

- **`scripts/`**: Folder containing the bash script to manage the test generation and running process.
  - **`run.sh`**: A bash script that controls the testing loop, generating tests and comparing results between the brute force and optimized solutions.

- **`src/`**: Folder containing source code files for the solutions.
  - **`brute_force.cpp`**: Brute force solution.
  - **`generator.cpp`**: Test case generator.
  - **`solution.cpp`**: Optimized solution.

- **`tests/`**: Folder containing test input and output files.
  - **`input.txt`**: Input file for the algorithm.
  - **`output_brute_force.txt`**: Expected output from the brute force solution.
  - **`output_solution.txt`**: Expected output from the optimized solution.
  - **`error_test_case.txt`**: File containing a test case that should trigger an error.

- **`Makefile`**: Makefile for building and running the code.

- **`README.md`**: Documentation file (this file).

---

## How to Use

### Step 1: Download Files

Start by downloading the repository to your local computer.

### Step 2: Study the Files

Carefully study the following files:
- **generator.cpp**: This file generates test cases for validation. Use built-in functions or adjust it according to your needs. You can use functions like `RA(a, b)` or other built-in C++ functions to generate test cases for your input.
  
- **brute_force.cpp**: This file contains the brute force solution. Implement your brute force algorithm here.
  
- **solution.cpp**: This file contains the optimized solution. Implement your optimized algorithm in this file.

### Step 3: Set Up Input/Output Redirection (Optional, but recommended)

To simplify the process and avoid manually changing input/output every time, use `freopen` to handle file redirection. It minimizes changes in your code and automatically uses `cin` and `cout` for input/output.

Add the following two lines in **brute_force.cpp** and **solution.cpp**:

```cpp
freopen("tests/input.txt", "r", stdin);
freopen("tests/output_solution.txt", "w", stdout);
```

---

### Running Validation

To validate the solutions, run the following command:

```bash
bash scripts/run.sh
