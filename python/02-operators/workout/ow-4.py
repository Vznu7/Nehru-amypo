def binary(binary_str):
   
    if not binary_str.isdigit() or any(ch not in '01' for ch in binary_str) or not (1 <= len(binary_str) <= 32):
        print("Invalid input")
        return
    
  
    decimal_value = int(binary_str, 2)
    print(decimal_value)

a = input()
binary(a)