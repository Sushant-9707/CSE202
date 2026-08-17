#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    string accountNumber;
    string pinCode;
    double balance;
    double loanAmount;
    double interestRate;  // Annual interest rate in percentage
    int accountType;      // 1 for Savings, 2 for Checking

public:
    // Constructor
    BankAccount(string name, string accNum, string pin, double initialBalance, int type) {
        accountHolder = name;
        accountNumber = accNum;
        pinCode = pin;
        balance = initialBalance;
        loanAmount = 0;
        interestRate = 4.5;  // Default interest rate 4.5% per annum
        accountType = type;
    }

    // Account Details
    void displayAccountDetails() {
        cout << "\n========== ACCOUNT DETAILS ==========" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << (accountType == 1 ? "Savings" : "Checking") << endl;
        cout << "Current Balance: Rs. " << balance << endl;
        cout << "Loan Amount: Rs. " << loanAmount << endl;
        cout << "Interest Rate: " << interestRate << "% per annum" << endl;
        cout << "====================================\n" << endl;
    }

    // Verify PIN
    bool verifyPin(string inputPin) {
        return (inputPin == pinCode);
    }

    // Deposit Money
    void deposit(double amount, string pin) {
        if (!verifyPin(pin)) {
            cout << "ERROR: Incorrect PIN! Transaction failed." << endl;
            return;
        }

        if (amount <= 0) {
            cout << "ERROR: Deposit amount must be positive!" << endl;
            return;
        }

        balance += amount;
        cout << "SUCCESS: Rs. " << amount << " deposited successfully!" << endl;
        cout << "New Balance: Rs. " << balance << endl;
    }

    // Withdraw Money
    void withdraw(double amount, string pin) {
        if (!verifyPin(pin)) {
            cout << "ERROR: Incorrect PIN! Transaction failed." << endl;
            return;
        }

        if (amount <= 0) {
            cout << "ERROR: Withdrawal amount must be positive!" << endl;
            return;
        }

        if (amount > balance) {
            cout << "ERROR: Insufficient balance! Available: Rs. " << balance << endl;
            return;
        }

        balance -= amount;
        cout << "SUCCESS: Rs. " << amount << " withdrawn successfully!" << endl;
        cout << "New Balance: Rs. " << balance << endl;
    }

    // Check Balance
    void checkBalance(string pin) {
        if (!verifyPin(pin)) {
            cout << "ERROR: Incorrect PIN!" << endl;
            return;
        }
        cout << "\nCurrent Balance: Rs. " << balance << endl << endl;
    }

    // Apply for Loan
    void applyLoan(double amount, string pin) {
        if (!verifyPin(pin)) {
            cout << "ERROR: Incorrect PIN! Transaction failed." << endl;
            return;
        }

        if (amount <= 0) {
            cout << "ERROR: Loan amount must be positive!" << endl;
            return;
        }

        if (loanAmount > 0) {
            cout << "ERROR: You already have an active loan of Rs. " << loanAmount << endl;
            cout << "Please repay it first." << endl;
            return;
        }

        // Simple loan eligibility check
        if (balance < (amount / 2)) {
            cout << "ERROR: Insufficient balance for loan eligibility." << endl;
            cout << "Minimum balance required: Rs. " << (amount / 2) << endl;
            return;
        }

        loanAmount = amount;
        balance += amount;
        cout << "SUCCESS: Loan of Rs. " << amount << " approved!" << endl;
        cout << "Amount added to your account. New Balance: Rs. " << balance << endl;
    }

    // Repay Loan
    void repayLoan(double amount, string pin) {
        if (!verifyPin(pin)) {
            cout << "ERROR: Incorrect PIN! Transaction failed." << endl;
            return;
        }

        if (loanAmount == 0) {
            cout << "ERROR: You don't have any active loan!" << endl;
            return;
        }

        if (amount <= 0) {
            cout << "ERROR: Repayment amount must be positive!" << endl;
            return;
        }

        if (amount > balance) {
            cout << "ERROR: Insufficient balance for repayment!" << endl;
            cout << "Available: Rs. " << balance << endl;
            return;
        }

        if (amount > loanAmount) {
            cout << "WARNING: Repayment amount exceeds loan amount!" << endl;
            cout << "Loan Amount: Rs. " << loanAmount << endl;
            return;
        }

        balance -= amount;
        loanAmount -= amount;
        cout << "SUCCESS: Rs. " << amount << " repaid towards loan!" << endl;
        cout << "Remaining Loan: Rs. " << loanAmount << endl;
        cout << "New Balance: Rs. " << balance << endl;
    }

    // Calculate and Add Interest
    void addInterest(string pin) {
        if (!verifyPin(pin)) {
            cout << "ERROR: Incorrect PIN!" << endl;
            return;
        }

        double interest = (balance * interestRate) / 100;
        balance += interest;
        cout << "SUCCESS: Interest added!" << endl;
        cout << "Interest Amount: Rs. " << interest << endl;
        cout << "New Balance: Rs. " << balance << endl;
    }

    // Change PIN
    void changePin(string oldPin, string newPin, string confirmPin) {
        if (!verifyPin(oldPin)) {
            cout << "ERROR: Incorrect current PIN!" << endl;
            return;
        }

        if (newPin != confirmPin) {
            cout << "ERROR: New PIN and confirmation don't match!" << endl;
            return;
        }

        if (newPin.length() < 4) {
            cout << "ERROR: PIN must be at least 4 characters!" << endl;
            return;
        }

        pinCode = newPin;
        cout << "SUCCESS: PIN changed successfully!" << endl;
    }

    // Get Balance (without PIN for internal use)
    double getBalance() {
        return balance;
    }
};

// Main Menu System
int main() {
    // Create a sample bank account
    BankAccount myAccount("John Doe", "ACC123456", "1234", 10000, 1);

    int choice;
    string pin, oldPin, newPin, confirmPin;
    double amount;

    cout << "\n╔═══════════════════════════════════════╗" << endl;
    cout << "║    WELCOME TO BANK ACCOUNT SYSTEM    ║" << endl;
    cout << "║            (CSE202 Demo)             ║" << endl;
    cout << "╚═══════════════════════════════════════╝" << endl;

    while (true) {
        cout << "\n========== MAIN MENU ==========" << endl;
        cout << "1. View Account Details" << endl;
        cout << "2. Check Balance" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Apply for Loan" << endl;
        cout << "6. Repay Loan" << endl;
        cout << "7. Add Interest" << endl;
        cout << "8. Change PIN" << endl;
        cout << "9. Exit" << endl;
        cout << "==============================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear input buffer

        switch (choice) {
        case 1:
            myAccount.displayAccountDetails();
            break;

        case 2:
            cout << "Enter PIN: ";
            getline(cin, pin);
            myAccount.checkBalance(pin);
            break;

        case 3:
            cout << "Enter amount to deposit: Rs. ";
            cin >> amount;
            cin.ignore();
            cout << "Enter PIN: ";
            getline(cin, pin);
            myAccount.deposit(amount, pin);
            break;

        case 4:
            cout << "Enter amount to withdraw: Rs. ";
            cin >> amount;
            cin.ignore();
            cout << "Enter PIN: ";
            getline(cin, pin);
            myAccount.withdraw(amount, pin);
            break;

        case 5:
            cout << "Enter loan amount: Rs. ";
            cin >> amount;
            cin.ignore();
            cout << "Enter PIN: ";
            getline(cin, pin);
            myAccount.applyLoan(amount, pin);
            break;

        case 6:
            cout << "Enter repayment amount: Rs. ";
            cin >> amount;
            cin.ignore();
            cout << "Enter PIN: ";
            getline(cin, pin);
            myAccount.repayLoan(amount, pin);
            break;

        case 7:
            cout << "Enter PIN: ";
            getline(cin, pin);
            myAccount.addInterest(pin);
            break;

        case 8:
            cout << "Enter current PIN: ";
            getline(cin, oldPin);
            cout << "Enter new PIN: ";
            getline(cin, newPin);
            cout << "Confirm new PIN: ";
            getline(cin, confirmPin);
            myAccount.changePin(oldPin, newPin, confirmPin);
            break;

        case 9:
            cout << "\nThank you for using Bank Account System!" << endl;
            cout << "Goodbye!" << endl;
            return 0;

        default:
            cout << "ERROR: Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
