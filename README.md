# HandGestureLEDControl

Using hand gestures for finger counts (so from 0 to 5 fingers), this program transfers the number of fingers the user is holding up to the camera to an Arduino UNO which will light up the corresponding number of LEDs!

This project utilized OpenCV for real-time image proccessing and computer vision functions and MediaPipe's Hand Landmark CNN to detect and identify hand gestures/finger counts.

The data from the model is then transferred to Arduino using PySerial, allowing it correctly light up the number of LEDs required.