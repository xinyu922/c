def sum(x):
    result = 0
    
    for each in x:
        if (type(each) == int) or (type(each) == float):
            result += each
        else:
            continue

    return result

print(sum([1, 2.1, 2.3, 'a', '1', True]))
