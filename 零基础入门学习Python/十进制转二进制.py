def Dec2Bin(dec):
    temp = []
    result = ''
    
    while dec:
        quo = dec % 2
        dec = dec // 2
        temp.append(quo)

    while temp:
        result += str(temp.pop())
    
    return result

print(Dec2Bin(62))
