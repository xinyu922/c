import cv2 as cv
import numpy as np


def blur_demo(image):               #均值模糊
    dst = cv.blur(image, (1,3))
    cv.imshow("blur_demo", dst)


def median_blur_demo(image):               #中值模糊
    dst = cv.medianBlur(image, 5)
    cv.imshow("median_blur_demo", dst)


def cust_blur_demo(image):               #自定义模糊
    # kernel = np.ones([5,5], np.float32)/25
    kernel = np.array([[0,-1,0],[-1,5,-1],[0,-1,0]], np.float32)
    dst = cv.filter2D(image, -1, kernel = kernel)
    cv.imshow("cust_blur_demo", dst)


src = cv.imread("/Users/xinyu/Documents/opencv/samples/data/lena.jpg")
# cv.namedWindow("image", cv.WINDOW_AUTOSIZE)
cv.imshow("lena",src)
blur_demo(src)
median_blur_demo(src)
cust_blur_demo(src)


cv.waitKey(0)
cv.destroyAllWindows()

