#pragma once
#ifndef __HEADER
#define __HEADER
#include <gl/glut.h>

// ��ʼ�ӽǣ� �ӵ���(+z, -y)�� ��
#define REST_Z 5.0
#define REST_Y 10.0

// lookAt����
GLdouble eyeX = 0.0, eyeY = 5.0, eyeZ = -10.0;
GLdouble centerX = 0, centerY = 0, centerZ = 0;
GLdouble upX = 0, upY = 1.0, upZ = 0;

// ���ڲ���
#define WIDTH 400
#define HEIGHT 400

// ÿ�ΰ����ƶ��ľ���
#define OFFSET 1.0

#endif