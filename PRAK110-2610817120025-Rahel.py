import math

Alas = 5
Tinggi = 12

# Contoh menggunakan pow()
Miring = int(math.sqrt(pow(Alas, 2) + pow(Tinggi, 2)))
Keliling = Alas + Tinggi + Miring
Luas = int((Alas * Tinggi) / 2)

print("Diketahui :")
print(f"Alas = {Alas} cm")
print(f"Tinggi = {Tinggi} cm\n")
print("Jawab :")
print(f"Sisi A = {Alas} cm")
print(f"Sisi B = {Tinggi} cm")
print(f"Sisi C = {Miring} cm")
print(f"Keliling = {Keliling} cm")
print(f"Luas = {Luas} cm")
