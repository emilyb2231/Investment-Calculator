# Investment Calculator

## Overview

This program calculates and displays the balance and interest earned on an investment over a specified number of years. It provides two scenarios:

1. **Without additional monthly deposits**: Calculates growth based solely on the annual interest rate.  
2. **With additional monthly deposits**: Calculates growth based on the annual interest rate and regular monthly deposits.

---

## Features

### User Input
- Initial investment amount  
- Monthly deposit amount  
- Annual interest rate (%)  
- Number of years for the investment  

### Error Handling
- Ensures the initial investment and monthly deposit values are non-negative.  

### Output Tables
- **Scenario 1**: Balance and interest for each year without monthly deposits.  
- **Scenario 2**: Balance and interest for each year with monthly deposits.  

---

## How It Works

### Data Input
- The user is prompted to input the required values for calculation.  
- Input validation ensures no negative values for the initial investment and monthly deposits.  

### Scenario 1: Without Monthly Deposits
- Annual interest is calculated and added to the total amount.  
- Formula:  
  \[
  \text{Interest} = \text{Total Amount} \times \left(\frac{\text{Annual Interest}}{100}\right)
  \]
- Outputs a table showing the balance and total interest earned for each year.  

### Scenario 2: With Monthly Deposits
- Monthly interest is calculated by dividing the annual interest rate by 12.  
- Formula for each month:  
  \[
  \text{Monthly Interest} = \left(\text{Total Amount} + \text{Monthly Deposit}\right) \times \left(\frac{\text{Annual Interest}}{100 \times 12}\right)
  \]
- The total amount is updated by adding the monthly deposit and monthly interest.  
- At the end of each year, outputs a table showing the balance and interest earned.  

---

## Program Output

The program produces two tables:

1. **Balance and Interest Without Additional Monthly Deposits**  
2. **Balance and Interest With Additional Monthly Deposits**  

### Sample Input

Here is the reformatted explanation in a code block for GitHub README:

markdown
Copy
Edit
# Investment Calculator

## Overview

This program calculates and displays the balance and interest earned on an investment over a specified number of years. It provides two scenarios:

1. **Without additional monthly deposits**: Calculates growth based solely on the annual interest rate.  
2. **With additional monthly deposits**: Calculates growth based on the annual interest rate and regular monthly deposits.

---

## Features

### User Input
- Initial investment amount  
- Monthly deposit amount  
- Annual interest rate (%)  
- Number of years for the investment  

### Error Handling
- Ensures the initial investment and monthly deposit values are non-negative.  

### Output Tables
- **Scenario 1**: Balance and interest for each year without monthly deposits.  
- **Scenario 2**: Balance and interest for each year with monthly deposits.  

---

## How It Works

### Data Input
- The user is prompted to input the required values for calculation.  
- Input validation ensures no negative values for the initial investment and monthly deposits.  

### Scenario 1: Without Monthly Deposits
- Annual interest is calculated and added to the total amount.  
- Formula:  
  \[
  \text{Interest} = \text{Total Amount} \times \left(\frac{\text{Annual Interest}}{100}\right)
  \]
- Outputs a table showing the balance and total interest earned for each year.  

### Scenario 2: With Monthly Deposits
- Monthly interest is calculated by dividing the annual interest rate by 12.  
- Formula for each month:  
  \[
  \text{Monthly Interest} = \left(\text{Total Amount} + \text{Monthly Deposit}\right) \times \left(\frac{\text{Annual Interest}}{100 \times 12}\right)
  \]
- The total amount is updated by adding the monthly deposit and monthly interest.  
- At the end of each year, outputs a table showing the balance and interest earned.  

---

## Program Output

The program produces two tables:

1. **Balance and Interest Without Additional Monthly Deposits**  
2. **Balance and Interest With Additional Monthly Deposits**  

### Sample Input
Initial Investment Amount: $1000
Monthly Deposit: $100
Annual Interest: 5%
Number of years: 3


### Sample Output

#### Scenario 1: Balance and Interest Without Additional Monthly Deposits
=================================================================
Year Year End Balance Year End Earned Interest
1 $1,050.00 $50.00
2 $1,102.50 $52.50
3 $1,157.63 $55.13


#### Scenario 2: Balance and Interest With Additional Monthly Deposits
=================================================================
Year Year End Balance Year End Earned Interest
1 $2,360.53 $160.53
2 $3,744.89 $284.36
3 $5,155.12 $410.23


---

## Dependencies

- **Standard C++ libraries**:  
  - `<iostream>` for input and output.  
  - `<iomanip>` for formatting output.  

---

## Limitations

- Assumes fixed monthly deposits and annual interest rates.  
- Does not account for leap years or fractional months.  

---

## Future Improvements

- Support for variable interest rates and monthly deposits.  
- Add a graphical representation of investment growth.  
- Allow for partial years or fractional months in calculations.  

---
