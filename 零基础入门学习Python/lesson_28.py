##f = open('readme.txt')
##for i in f:
##    print(i,end='')
##f.close()


f1 = open('readme.txt')
f2 = open('readme_1.txt','x')
f2.write(f1.read())
f2.close()
f1.close()
