# Python does not have public, private, and protected keywords.
# Instead, it uses naming conventions and name mangling:
# name      # public
# _name     # protected (convention)
# __name    # private-ish (name mangling)

class BankAccount:
    def __init__(self, owner, balance):
        self.owner = owner              # Public
        self._account_type = "Savings"  # Protected
        self.__balance = balance        # Private

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def get_balance(self):
        return self.__balance

account = BankAccount("Ayousha", 5000)

print(account.owner)          # Public → accessible
print(account._account_type)  # Protected → accessible, but shouldn't be used directly
print(account.get_balance())  # Controlled access → 5000

# print(account.__balance)   # AttributeError    