#Investment Calculator
##Overview
This program calculates and displays the balance and interest earned on an investment over a specified number of years. It provides two scenarios:

Without additional monthly deposits: Calculates growth based on the annual interest rate only.
With additional monthly deposits: Calculates growth based on the annual interest rate and regular monthly deposits.
Features
User Input:
Initial investment amount
Monthly deposit amount
Annual interest rate (%)
Number of years for the investment
Error Handling:
Ensures the initial investment and monthly deposit values are non-negative.
Output Tables:
Scenario 1: Balance and interest for each year without monthly deposits.
Scenario 2: Balance and interest for each year with monthly deposits.
How It Works
Data Input
The user is prompted to input the required values for calculation.
Input validation ensures no negative values for the initial investment and monthly deposits.
Scenario 1 (Without Monthly Deposits)
Annual interest is calculated and added to the total amount.
For each year:
Interest
=
Total Amount
×
(
Annual Interest
100
)
Interest=Total Amount×( 
100
Annual Interest
​
 )
Outputs a table showing the balance and total interest earned for each year.
Scenario 2 (With Monthly Deposits)
Monthly interest is calculated by dividing the annual interest rate by 12.
For each month:
Monthly Interest
=
(
Total Amount
+
Monthly Deposit
)
×
(
Annual Interest
100
×
12
)
Monthly Interest=(Total Amount+Monthly Deposit)×( 
100×12
Annual Interest
​
 )
Updates the total amount by adding the monthly deposit and interest.
At the end of each year, outputs a table showing the balance and interest earned.

