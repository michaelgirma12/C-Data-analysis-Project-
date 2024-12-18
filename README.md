
# C++ Capstone Project: COVID-19 Data Analysis and Visualization

This project is a C++ application designed to analyze COVID-19 data using statistical methods and visualize the results.

## Features

### Statistical Analysis
- **Least Squares Fitting (LSF)** for regression analysis.
- Calculation of:
  - **Correlation Coefficient**
  - **Coefficient of Determination (R²)**

### Data Handling
- Reads and processes datasets from CSV files.
- Outputs results to CSV files for further analysis.

### Visualization
- Generates plots for visualizing regression lines and statistical insights.

### Modular Design
- Custom libraries for:
  - CSV file reading/writing.
  - Statistical calculations.
  - Plotting results.

## Project Structure
- **`main.cpp`**: Main entry point for the application.
- **Header Files**: Contains reusable `.h` files for key functionality.
- **Source Files**: Implements core features in `.cpp` files.
- **Data Files**: Contains example datasets.
- **Output Files**: Stores generated outputs and plots.

## Requirements
- A C++ compiler supporting C++11 or higher.
- Libraries used: None (custom implementation provided).

## How to Build
1. Navigate to the project directory.
2. Run the following command to build the project:
   ```bash
   make
   ```

## How to Run
1. After building, execute the binary:
   ```bash
   ./main
   ```

2. Follow on-screen prompts to load data, perform analysis, and generate results.

## Example Usage
1. Place your dataset in the **Data Files** directory.
2. Specify the dataset name in the program.
3. View the results in the console or in generated plot images.

## Authors
- **Michael Girma**
- Collaborators: Add other contributors here.

## License
This project is licensed under the MIT License.
