# Lwandile Rental Car

A console-based Car Rental Management System built in C++ that allows users to browse available vehicles, view vehicle specifications and rental details from external text files, and complete car rental bookings.

## Features

- **Interactive Console Interface:** Displays custom welcome and thank-you screens (`WELCOME.txt` and `Tnx.txt`).
- **Vehicle Catalog:** Supports multiple vehicles with dedicated specification/data files:
  - `8R.txt` (Golf 8R)
  - `AUDI.txt` (Audi)
  - `BMW.txt` (BMW)
  - `EVEREST.txt` (Ford Everest)
  - `GD6.txt` (Toyota Hilux GD-6)
  - `GTI.txt` (Golf GTI)
  - `M_AMG.txt` (Mercedes-AMG)
  - `M_BRABUS.txt` (Mercedes-Brabus)
  - `M_GWAGON.txt` (Mercedes G-Wagon)
  - `ROVER.txt` (Range Rover)
- **File-Driven Content:** Reads vehicle details and prompts directly from `.txt` files for easy updates without recompiling.

## Project Structure

```text
Lwandile-Rental-Car/
├── CAR RENTALS.cpp      # Main C++ source code
├── WELCOME.txt          # Welcome banner / menu text
├── Tnx.txt              # Exit / thank-you message
├── 8R.txt               # Vehicle details
├── AUDI.txt             # Vehicle details
├── BMW.txt              # Vehicle details
├── EVEREST.txt          # Vehicle details
├── GD6.txt              # Vehicle details
├── GTI.txt              # Vehicle details
├── M_AMG.txt            # Vehicle details
├── M_BRABUS.txt         # Vehicle details
├── M_GWAGON.txt         # Vehicle details
├── ROVER.txt            # Vehicle details
├── .gitignore           # Git ignore rules for compiled artifacts
└── README.md            # Project documentation
