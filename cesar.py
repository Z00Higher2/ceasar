def shift_char(c, rshift):
    if c.isalpha():
        base = ord('a') if c.islower() else ord('A')
        return chr((ord(c) - base + rshift) % 26 + base)
    else:
        return c

def encrypt_caesar(plaintext, rshift):
    ciphertext = ""
    for char in plaintext:
        ciphertext += shift_char(char, rshift)
    return ciphertext

def main():
    rshift = int(input("Enter shift    : "))
    plaintext = input("Enter plaintext: ")

    print("Ciphertext     :", encrypt_caesar(plaintext, rshift))

main()