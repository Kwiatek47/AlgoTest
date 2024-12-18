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

---

### Running Validation

To validate the solutions, run the following command:

```bash
bash scripts/run.sh
