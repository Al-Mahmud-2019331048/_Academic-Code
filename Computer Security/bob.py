import os
import json
from aes import aes_decrypt, key_expansion
from rsa import decrypt as rsa_decrypt

# Define the path to the secret folder
secret_folder = "Don't Open This"

# Read the encrypted AES key and ciphertext from the secret folder
with open(os.path.join(secret_folder, "encrypted_aes_key.json"), "r") as f:
    encrypted_aes_key = json.load(f)
with open(os.path.join(secret_folder, "encrypted_data.bin"), "rb") as f:
    encrypted_data = f.read()

print(f"encrypted_aes_key: {encrypted_aes_key}")
print(f"encrypted_data: {encrypted_data}")

# Read the private key
with open(os.path.join(secret_folder, "private_key.pem"), "r") as f:
    private_key = eval(f.read())
print(f"private_key: {private_key}")

# Decrypt the AES key with RSA private key
decrypted_aes_key = rsa_decrypt(encrypted_aes_key, private_key)
decrypted_aes_key_string = ''.join(chr(x) for x in decrypted_aes_key)
print(f"decrypted_aes_key: {decrypted_aes_key.decode('utf-8')}")
# print(f"decrypted_aes_key_string: {decrypted_aes_key_string}")
# Re-expand the keys for AES decryption
expanded_keys, _ = key_expansion(decrypted_aes_key_string)
print("Using expanded keys for decryption:", expanded_keys)
# Decrypt the ciphertext with AES
decrypted_data, _ = aes_decrypt(encrypted_data, expanded_keys)
# Output the decrypted data
decrypted_text = decrypted_data.decode()
# Output the decrypted data
print(f"Bob has decrypted the data: {decrypted_text}")


# Write the decrypted plain text (DPT) to a file
with open(os.path.join(secret_folder, "decrypted_data.txt"), "w") as f:
    f.write(decrypted_text)


# reading the original plaintext from a previous written file
with open(os.path.join(secret_folder, "plain_text.txt"), "r") as f:
    original_plaintext = f.read()
print(f"original_plaintext: {original_plaintext}")


# Comparison of the decrypted text with the original plaintext
if decrypted_text == original_plaintext:
    print("The decrypted text matches the original plaintext!")
else:
    print("The decrypted text does not match the original plaintext.")