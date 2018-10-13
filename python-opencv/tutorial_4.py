import cv2 as cv
import numpy as np

def add_demo(m1, m2):
    dst = cv.add(m1, m2)
    cv.imshow("add_demo", dst)


def subtract_demo(m1, m2):
    dst = cv.subtract(m1, m2)
    cv.imshow("subtract_demo", dst)


def multiply_demo(m1, m2):
    dst = cv.multiply(m1, m2)
    cv.imshow("multiply_demo", dst)


def divide_demo(m1, m2):
    dst = cv.divide(m1, m2)
    cv.imshow("divide_demo", dst)


def other(m1, m2):
    M1, dev1 = cv.meanStdDev(m1)
    M2, dev2 = cv.meanStdDev(m2)

    print(M1,'\n\n', dev1)
    print('\n')
    print(M2,'\n\n', dev2)


def logic_demo(m1, m2):
    dst = cv.bitwise_and(m1, m2)        #逻辑与
    dst1 = cv.bitwise_or(m1, m2)        #逻辑或
    dst2 = cv.bitwise_not(m1, m2)        # 逻辑或
    dst3 = cv.bitwise_xor(m1, m2)        # 逻辑或
    cv.imshow("and", dst)
    cv.imshow("or", dst1)
    cv.imshow("not", dst2)
    cv.imshow("xor", dst3)


def contrast_bightness_demo(image, c, b):           #c 对应的是对比度，b对应的是亮度
    h, w, ch = image.shape
    blank = np.zeros([h, w, ch], image.dtype)
    dst = cv.addWeighted(image, c, blank, 1-c, b)
    cv.imshow("con_bri_demo", dst)


src1 = cv.imread("/Users/xinyu/Documents/opencv/samples/data/LinuxLogo.jpg")
src2 = cv.imread("/Users/xinyu/Documents/opencv/samples/data/WindowsLogo.jpg")
print(src1.shape)
print(src2.shape)
cv.namedWindow("image", cv.WINDOW_AUTOSIZE)
cv.imshow("linux", src1)
cv.imshow("windows", src2)

# add_demo(src1, src2)
# subtract_demo(src1, src2)
# multiply_demo(src1, src2)
# divide_demo(src1, src2)
# other(src1, src2)
# logic_demo(src1, src2)
contrast_bightness_demo(src2, 1.2, 50)

cv.waitKey(0)
cv.destroyAllWindows()

