#pragma once
#ifndef __HEADER
#define __HEADER
#include <gl/glut.h>

// 初始视角（ 视点在(+z, -y)处 ）
#define REST_Z 5.0
#define REST_Y 10.0

// lookAt参数
GLdouble eyeX = 0.0, eyeY = 5.0, eyeZ = -10.0;
GLdouble centerX = 0, centerY = 0, centerZ = 0;
GLdouble upX = 0, upY = 1.0, upZ = 0;

// 窗口参数
#define WIDTH 400
#define HEIGHT 400

// 每次按键移动的距离
#define OFFSET 1.0

#endif