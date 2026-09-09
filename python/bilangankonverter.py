import math

def conver_to_int(angka):
	try:
		angka = int(angka)
		return angka
	except:
		print("Input is not integer")
		exit()

def des_biner(angka):
	angka = conver_to_int(angka)
	output = []
	while True:
		output.append(angka%2)
		angka = math.floor(angka / 2)
		if angka == 0:
			break

	output.reverse()
	return output

def des_oktal(angka):
	angka = conver_to_int(angka)
	output = []
	
	while True:
		output.append(math.floor(angka%8))
		angka = math.floor(angka/8)
		if angka < 8:
			output.append(math.floor(angka%8))
			break
	output.reverse()
	return output

def des_hexa(angka):
	angka = conver_to_int(angka)
	output = []
	hexadec = "0123456789ABCDEF"
	
	while True:
		output.append(hexadec[(angka%16)])
		angka = math.floor(angka/16)
		
		if angka <= 16:
			output.append(hexadec[(angka%16)])
			break
	output.reverse()	
	return output

def biner_des(biner):
	biner = conver_to_int(biner)
	output = 0
	binary_buffer = []
	biner = str(biner)
	for digits in biner:
		binary_buffer.append(digits)
	
	power = 0
	for digits in binary_buffer:
		digits = int(digits)
		current_powered = 2**power
		output += digits*current_powered
		power += 1
		
	return output

def oktal_des(oktal):
	oktal = conver_to_int(oktal)
	output = 0
	temp_buffer = []
	digits_count = 0
	for digits in str(oktal):
		digits_count += 1
		temp_buffer.append(digits)

	digits_count -= 1
	
	for oktals in temp_buffer:
		output += int(oktals)*8**digits_count
		digits_count -= 1

	return output

def hexa_des(hexa):
	hexadec = "0123456789ABCDEF"
	output = 0
	hexa_length = len(str(hexa))-1
	for digits in str(hexa):
		output+= hexadec.find(digits)*16**hexa_length
		hexa_length -= 1

	return output

welcome_message = """
#######################################
#CONVERTER BILANGAN BIAR GA STRESS :))#
#######################################
"""

print(welcome_message)
options_message_1 = """
BILANGAN ASAL:
1 > DESIMAL
2 > BINARY
3 > HEXADECIMAL
4 > OKTAL
"""
options_message_2 = """
BILANGAN AKHIR:
1 > DESIMAL
2 > BINARY
3 > HEXADECIMAL
4 > OKTAL
"""
options_message_3 = """
MASUKKAN BILANGAN AWAL
"""
valid_options = [1,2,3,4]
user_command = []
user_data = 0

while True:
	
	print(options_message_1)
	user_option = input("> ")
	try:
		user_option = int(user_option)
	except:
		print("User entered a non-integer option")
	if user_option in valid_options:
		user_command.append(user_option)
		break
	else:
		print("User entered a non-selectable option")

while True:
	
	print(options_message_2)
	user_option = input("> ")
	try:
		user_option = int(user_option)
	except:
		print("User entered a non-integer option")
	if user_option in valid_options:
		user_command.append(user_option)
		break
	else:
		print("User entered a non-selectable option")

while True:
	
	print(options_message_3)
	user_data = input("> ")
	if user_data == "":
		continue
	else:
		break

def convert(option, step, variable):
	try:	
		if step == 1: #ubah ke desimal
			if option == 2:
				return biner_des(variable)
			elif option == 3:
				return hexa_des(variable)
			elif option == 4:
				return oktal_des(variable)
		elif step == 2:
			if option == 2:
				return des_biner(variable)
			elif option == 3:
				return des_hexa(variable)
			elif option == 4:
				return des_oktal(variable)
	except:
		print("Convert error")

current_output = ""
if user_command[0] == user_command[1]:
	print("LMAO haha <insert kucing ketawa sambil nunjuk>")
elif user_command[0] == 1:
	current_output = convert(user_command[1], 2, user_data)
elif user_command[1] == 1:
	current_output = convert(user_command[0], 1, user_data)
elif user_command[0] != 1:
	current_output = convert(user_command[0], 1, user_data)
	current_output = convert(user_command[1], 2, current_output)

process = ["Desimal", "Biner", "Hexadecimal", "Oktal"]

print(f"Output dari {process[user_command[0]-1]} ke {process[user_command[1]-1]}")
try:
	print(*current_output, sep="")
except:
	print(current_output)