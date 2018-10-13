import cv2 as cv
import numpy as np


def fill_color_demo(image):         #泛洪填充
    copyImg = image.copy()
    h, w = image.shape[:2]
    mask = np.zeros([h+2, w+2], np.uint8)         #w+2 , h+2 是固定的
    cv.floodFill(copyImg, mask, (30,30), (0,255,255), (100,100,100), (50,50,50), cv.FLOODFILL_FIXED_RANGE)
    cv.imshow("fill_color_demo", copyImg)


def fill_binary():         #泛洪填充
    image = np.zeros([400,400,3], np.uint8)
    image[100:300,100:300,:] = 255

    cv.imshow("fill_binary", image)
    mask = np.ones([402,402,1], np.uint8)
    mask[101:301, 101:301] = 0
    cv.floodFill(image, mask, (200,200), (0,0,255), cv.FLOODFILL_MASK_ONLY)
    cv.imshow("fill_binary", image)


src = cv.imread("/Users/xinyu/Documents/opencv/samples/data/Lena.jpg")
# cv.namedWindow("Lena", cv.WINDOW_AUTOSIZE)
cv.imshow("Lena",src)


# face = src[50:200, 100:300]
# face_gray = cv.cvtColor(face, cv.COLOR_BGR2GRAY)
# back_face_gray = cv.cvtColor(face_gray, cv.COLOR_GRAY2BGR)
# cv.imshow("back_gray_face", back_face_gray)
# src[50:200, 100:300] = back_face_gray
# cv.imshow("back_gray_face", back_face_gray)
# cv.imshow("face", src)

# fill_color_demo(src)

fill_binary()

cv.waitKey(0)
cv.destroyAllWindows()

