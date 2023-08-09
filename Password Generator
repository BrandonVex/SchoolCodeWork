import random
import string

def generate_password(length=12, include_digits=True, include_special_chars=True):
    characters = string.ascii_letters 

    if include_digits:
        characters += string.digits 

    if include_special_chars:
        characters += string.punctuation

    password = ''.join(random.choice(characters) for _ in range(length))
    return password

def main():
    print("Welcome to the Password Generator!")

    print()
    
    while True:
        password_length = int(input("Enter desired password length: "))
        print()
        include_digits = input("Include digits? (y/n): ").lower() == 'y'
        print()
        include_special_chars = input("Include special characters? (y/n): ").lower() == 'y'

        print()

        generated_password = generate_password(password_length, include_digits, include_special_chars)
        print("Generated Password:", generated_password)

        print()

        generate_another = input("Generate another password? (y/n): ").lower()
        if generate_another != 'y':

            print()

            print("Thank you for using the Password Generator!")
            break

if __name__ == "__main__":
    main()
