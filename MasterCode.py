n = int(input('Enter the decimal number ').strip())
Binary_n = bin(n)[2:].split('0')
print(len(max(Binary_n)))