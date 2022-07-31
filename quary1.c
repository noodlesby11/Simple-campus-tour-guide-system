//quary1,c
#include"data_structure.h"
//ȫ�ֱ��� 
int d[30];
int visited[30];
int shortest[MaxVertexNum][MaxVertexNum];//����ȫ�ֱ����洢��С·�� 
int pathh[MaxVertexNum][MaxVertexNum];//����洢·��

//���Ҿ�����ͼ�е����
int locatevex(mgraph c, int v)//locatevex
{
	int i;
	for (i = 1; i <= c.vexnum; i++)
		if (v == c.vexs[i].position)  return i;//�ҵ������ض������i 
	return -1;//û���ҵ�������� 
}

//��ѯ�����������·����floyd�㷨��
void floyd(mgraph c)
{
	int i, j, k;
	for (i = 1; i <= key; i++)//��ͼ���ڽӾ���ֵ�� shortest��ά���飬������pathhȫ����ʼ��Ϊ-1 
	{
		for (j = 1; j <= key; j++)
		{
			shortest[i][j] = c.arcs[i][j].adj;
			pathh[i][j] = j;
		}
	}
	int i1, j1, k1 = 0;
	for (i1 = 1; i1 <= key; i1++)
	{
		for (j1 = 1; j1 <= key; j1++)
		{
			k1++;
		}
	}

	for (k = 1; k <= key; k++)//���Ĳ������������kΪ�м������еĶ���ԣ�i,j�����м����޸� 
	{
		for (i = 1; i <= key; i++)
		{
			for (j = 1; j <= key; j++)
			{
				if (shortest[i][j] > shortest[i][k] + shortest[k][j])
				{
					shortest[i][j] = shortest[i][k] + shortest[k][j];
					pathh[i][j] = pathh[i][k];//��¼һ�����ߵ�· //P�����������ǰ������  
				}
			}
		}
	}
}

//��ӡ�����·�� 
void display(mgraph c, int i, int j)
{
	int a, b;
	a = i; b = j;
	printf("��Ҫ��ѯ������������·����\n\n");
	printf("%d%s", a, c.vexs[a].name);
	while (pathh[i][j] != b)
	{
		printf("-->%d%s", pathh[i][j], c.vexs[pathh[i][j]].name);
		i = pathh[i][j];
	}
	printf("-->%d%s\n\n", b, c.vexs[b].name);
	printf("%s-->%s�����·���ǣ�%d �ס�\n\n", c.vexs[a].name, c.vexs[b].name, shortest[a][b]);
}

//�����������̾��루���������㷨��
int shortdistance(mgraph c)
{
	int i, j;
	int choice = 0;
	while (1)
	{
		rewind(stdin);//��ջ�����
		printf("������Ҫ��ѯ��������ͬ��������ֱ�ţ�1->11���м��ÿո�������\n");
		scanf("%d %d", &i, &j);
		if (i > key || i<0 || j>key || j < 0||i==j)
		{
			printf("������Ϣ����\n\n");
			continue;
		}
		else
		{
			floyd(c);
			display(c, i, j);
			printf("�Ƿ��������ѯ��(yes:1 / no:else )��");
			rewind(stdin);//��ջ�����
			scanf("%d", &choice);
			if (choice != 1)
			{
				break;
			}
		}
		system("cls");
	}
	printf("\n");
	return 1;
}
