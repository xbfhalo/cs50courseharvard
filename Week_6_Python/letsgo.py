# Example Python code with errors
# Example 1: Unused import
import os  # This is unused


def greet(name):
    print(f"Hello, {name}!")

def greet(name):
    print("Hello, " + name)

def main():
    # This line has an undefined variable `user_name`
    greet(user_name)

    # Syntax error: missing closing parenthesis
   print("This is a syntax error"

    # Undefined function `unknown_function`
    unknown_function()

if __name__ == "__main__":
    main()

