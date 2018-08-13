
password = 'qwe123'
n = 3
while True:
    str = input('请输入密码')
    if str == password:
        print('密码正确，进入程序...')
        break
    elif '*' in str:
        print("密码不能包含'*'号！你还有", n ,"次机会！请从新输入密码")
        continue
    else:
        print('密码有误，请重新输入，你还有', n , '次机会')
    n -= 1
        


    
