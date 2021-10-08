
         Team Members
Stephen Baker ID#2017001858
Toni Ann Wallace ID#2017001545
Meleisa Pinnock ID#2017002015
Kemar Norton ID#2017001789


                                                                    Instructions for Code
# Create a Software Application for XYZ Bank that allows its members to access their bank account information through an “ATM like” interface. The Menu Options should include: checking the account balance, debiting the account and crediting the account, along with an option to exit the program. [Hint*- Use while loop & switch statements for menu] (10 marks)
Create an Account Class to represent the customers’ bank accounts which represents the UML Diagram above. Provide a constructor that can receive an initial balance and uses it to initialize the data member. (10 marks)
The constructor should validate the initial balance to ensure that it’s greater than or equal to $1000.00. If not, set the balance to 0 and display an error message to the user indicating that the initial balance was invalid. (10 marks)
Provide three member functions:
Member function Deposit() should add an amount to the current balance. (5 marks)
Member function Withdraw() should withdraw money from the Account and ensure that the debit amount does not exceed the Account’s balance. If it does, the balance should be left unchanged and the function should print a message indicating "Debit amount exceeded account balance." (10 marks)
Member function GetBalance() should return the account’s current balance. (5 marks)
Create a console application in C++ that meet the requirements outlined above.
