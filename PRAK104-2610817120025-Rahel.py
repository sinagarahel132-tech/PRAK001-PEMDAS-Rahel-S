harga_a = 400000
harga_b = 350000

diskon_a = 13
diskon_b = 21

harga_setelah_diskon_a = harga_a - (harga_a * diskon_a / 100)
harga_setelah_diskon_b = harga_b - (harga_b * diskon_b / 100)

print("Harga sepatu A adalah", int(harga_a))
print("Harga sepatu B adalah", int(harga_b))
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi", int(harga_setelah_diskon_a))
print("Sepatu A mendapat diskon 21% sehingga harganya menjadi", int(harga_setelah_diskon_b))