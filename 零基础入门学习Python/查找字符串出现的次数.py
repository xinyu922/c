def findStr(desStr, subStr):
    count = 0
    length = len(desStr)
    if subStr not in desStr:
        print('在目标字符串中未找到字符串!')
    else:
        for each1 in range(length-1):      
            if desStr[each1] == subStr[0]:
                if desStr[each1+1] == subStr[1]:
                    count += 1
                    
        print('子字符串在目标字符串中共出现 %d 次' % count)

desStr = input('请输入目标字符串：')
subStr = input('请输入子字符串(两个字符)：')
findStr(desStr, subStr)
