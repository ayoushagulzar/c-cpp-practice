# we can create our own exception by inheriting from Exception class

class InsufficientBalanceError(Exception):
    """Raised when a withdrawal exceeds the account balance."""
    pass

class BankAccount:

    def __init__(self, balance):
        self.balance = balance

    def withdraw(self, amount):
        if amount > self.balance:
            raise InsufficientBalanceError("Withdrawal amount exceeds your balance.")

        self.balance -= amount
        print(f"Withdrawal successful! Remaining balance: {self.balance}")


account = BankAccount(5000)

try:
    account.withdraw(7000)

except InsufficientBalanceError as e:
    print(f"Error: {e}")