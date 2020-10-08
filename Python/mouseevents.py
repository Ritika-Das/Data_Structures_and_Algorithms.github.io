import cv2
import numpy as np
def draw_circle(event,x,y,flag,params):
    if event==cv2.EVENT_LBUTTONDOWN:
        blue=img[x,y,0]
        red=img[x,y,2]
        green=img[x,y,1]

        cv2.circle(img,(x,y),3,(0,255,255),-1)
        mycolorimage=np.zeros((512,512,3),np.uint8)
        mycolorimage[:]=[blue,green,red]
        cv2.imshow('color',mycolorimage)
        
img=cv2.imread('image.jpg')
cv2.imshow('image',img)
#points=[]
cv2.setMouseCallback('image',draw_circle)
cv2.waitKey(0)
cv2.destroyWindow()            

#points.append((x,y))
#f len(points)>=2:
#  #cv2.line(img,points[-1],points[-2],(0,255,0),4
#       #cv2.imshow('image',img)