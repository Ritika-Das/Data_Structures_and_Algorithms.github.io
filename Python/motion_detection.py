import cv2
import numpy as np

cap=cv2.VideoCapture('data/vtest.avi')
ret,frame1=cap.read()
ret,frame2=cap.read()
while cap.isOpened():
    diff=cv2.absdiff(frame1,frame2)
    gray=cv2.cvtColor(frame1,cv2.COLOR_BGR2GRAY)
    blur=cv2.GaussianBlur(gray,(5,5),0)
    _,thresh=cv2.threshold(blur,20,255,cv2.THRESH_BINARY)
    dilated=cv2.dilate(thresh,None,iterations=3)
    contours,_=cv2.findContours(dilated,cv2.RETR_LIST,cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(frame1,contours,-1,(255,0,0),2)
    for i in contours:
        (x,y,w,h)=cv2.boundingRect(i)
        if cv2.contourArea(i)<10:
            continue
        cv2.rectangle(frame1,(x,y),(x+2*w,y+2*h),(0,255,0),2)
        cv2.putText(frame1 ,"status: MOVEMENT",(10,20),cv2.FONT_HERSHEY_COMPLEX,1,(0,0,255) ,3)   
    cv2.imshow('frame',frame1)
    frame1=frame2
    ret,frame2=cap.read()
    if cv2.waitKey(40)==27:
        break

cv2.destroyAllWindows()    
cap.release()