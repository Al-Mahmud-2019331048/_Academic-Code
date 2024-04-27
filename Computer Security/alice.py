import json
import os
from aes import aes_encrypt, key_expansion, adjust_key
from rsa import generate_keypair, encrypt as rsa_encrypt

# Define the path to the secret folder
secret_folder = "Don't Open This"
os.makedirs(secret_folder, exist_ok=True)

# Taking input for plaintext and aes key from alice side
# plaintext="IsTheirCarnivalSuccessful"
# aes_key = "SUST CSE19 Batch"
# plaintext = "BUETnightfallVsSUSTguessforce"
# aes_key = "Thats my Kung Fu"
plaintext = input("Enter the plaintext (any size): ")
aes_key = input("Enter the aes key (16 bit recommented): ")

# Storing the plaintext into file thats why we can compare it to decrypted key later 
with open(os.path.join(secret_folder, "plain_text.txt"), "wb") as f:
    f.write(plaintext.encode())

# Adjust the key length and expand the key using AES
adjusted_aes_key = adjust_key(aes_key)
expanded_keys, _ = key_expansion(adjusted_aes_key)

# Encrypt the plaintext with AES
encrypted_data, _ = aes_encrypt(plaintext, expanded_keys)

# Generate RSA keys and store private key
public_key, private_key = generate_keypair(16)  # Using 1024-bit for this example
with open(os.path.join(secret_folder, "private_key.pem"), "w") as f:
    f.write(str(private_key))
print(f"before rsa key: {adjusted_aes_key}")

# Encrypt the AES key with RSA public key
encrypted_aes_key = rsa_encrypt(adjusted_aes_key, public_key)
print(f"key: {encrypted_aes_key}")

# Serialize the RSA encrypted key to a JSON string
encrypted_aes_key_json = json.dumps(encrypted_aes_key)

# Write the AES encrypted data and RSA encrypted key JSON to the secret folder
with open(os.path.join(secret_folder, "encrypted_data.bin"), "wb") as f:
    f.write(encrypted_data)

with open(os.path.join(secret_folder, "encrypted_aes_key.json"), "w") as f:
    f.write(encrypted_aes_key_json)

print("Alice has encrypted the data and stored the keys.")
