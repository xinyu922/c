# 判断是否为闰年
year = int(input('请输入年份：'))

if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print('您输入的年份是闰年')
else:
    print('您输入的年份不是闰年')
