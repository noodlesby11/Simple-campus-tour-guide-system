//data_structure.h
#include<stdio.h>//�����Ȩͼ 
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<stdbool.h>
#define Infinity 2000//��ʾ����� 
#define MaxVertexNum 20 
#define MAX 40 
#define key 11//keyΪ������� 

#ifndef arcell_h
#define arcell_h
typedef struct arcell//�ߵ�Ȩֵ��Ϣ
{
	int adj;//Ȩֵ  
}arcell, adjmatrix[MaxVertexNum][MaxVertexNum];//ͼ���ڽӾ�������
#endif

#ifndef vexsinfo_h
#define vexsinfo_h
typedef struct vexsinfo//������Ϣ 
{
	int position;//����ı�� 
	char name[32];//��������� 
	char introduction[256];//����Ľ��� 
}vexsinfo;
#endif

#ifndef mgraph_h
#define mgraph_h
typedef struct mgraph//ͼ�ṹ��Ϣ
{
	vexsinfo vexs[MaxVertexNum];//�������������飩 
	adjmatrix arcs;//�ڽӾ��� 
	int vexnum, arcnum;//�������ͱ��� 
}mgraph;
#endif

