import cv2 as cv
import numpy as np


def access_pixel(image):
    print(image.shape)
    height = image.shape[0]
    width = image.shape[1]
    channels = image.shape[2]
    print("width : %s, height : %s, channels : %s" % (width, height, channels))
    for row in range(height):
        for col in range(width):
            for c in range(channels):
                pv = image[row, col, c]
                image[row, col, c] = 255 - pv
    cv.imshow("~cat", src)


def inverse(image):
    dst = cv.bitwise_not(image)
    cv.imshow("~cat", dst)

def create_image():
    img = np.zeros([400, 400, 3], np.uint8)
    # img[:, :, 1] = np.ones([400, 400]) * 255
    # img[:, :, 0] = np.ones([400, 400]) * 255
    img[:, :, 2] = np.ones([400, 400]) * 255
    cv.imshow("New picture", img)


src = cv.imread("cat.jpg")
cv.namedWindow("Cat", cv.WINDOW_AUTOSIZE)

cv.imshow("Cat",src)

t1 = cv.getTickCount()
# access_pixel(src)
inverse(src)
t2 = cv.getTickCount()
time = (t2 - t1) / cv.getTickFrequency()

print("time : %s ms" % (time * 1000))

# create_image()

cv.waitKey(0)
cv.destroyAllWindows()