//campus.c
#include"data_structure.h"
void introduction();
mgraph campus; //ͼ��������ѧУ԰��
mgraph initgraph()
{
	int i = 0, j = 0;
	mgraph c;
	c.vexnum = 11;//������� 
	c.arcnum = 20;//�ߵĸ��� 
	for (i = 1; i <= key; i++)//�������ö����� 
		c.vexs[i].position = i;

	for (i = 1; i <= key; i++)
		for (j = 1; j <= key; j++)
			c.arcs[i][j].adj = Infinity;//�ȳ�ʼ��ͼ���ڽӾ���

	//�������붥����Ϣ  
	strcpy(c.vexs[1].name, "����1");
	strcpy(c.vexs[1].introduction, "���1");
	strcpy(c.vexs[2].name, "����2");
	strcpy(c.vexs[2].introduction, "���2");
	strcpy(c.vexs[3].name, "����3");
	strcpy(c.vexs[3].introduction, "���3");
	strcpy(c.vexs[4].name, "����4");
	strcpy(c.vexs[4].introduction, "���4");
	strcpy(c.vexs[5].name, "����5");
	strcpy(c.vexs[5].introduction, "���5");
	strcpy(c.vexs[6].name, "����6");
	strcpy(c.vexs[6].introduction, "���6");
	strcpy(c.vexs[7].name, "����7");
	strcpy(c.vexs[7].introduction, "���7");
	strcpy(c.vexs[8].name, "����8");
	strcpy(c.vexs[8].introduction, "���8");
	strcpy(c.vexs[9].name, "����9");
	strcpy(c.vexs[9].introduction, "���9");
	strcpy(c.vexs[10].name, "����10");
	strcpy(c.vexs[10].introduction, "���10");
	strcpy(c.vexs[11].name, "����11");
	strcpy(c.vexs[11].introduction, "���11");
	c.arcs[1][2].adj = 310; c.arcs[1][6].adj = 860; c.arcs[1][9].adj = 1620;
	c.arcs[2][3].adj = 177;
	c.arcs[3][4].adj = 120; c.arcs[3][5].adj = 150;
	c.arcs[4][5].adj = 76; c.arcs[4][6].adj = 350;
	c.arcs[5][10].adj = 588; c.arcs[5][11].adj = 140; 
	c.arcs[6][7].adj = 350; c.arcs[6][8].adj = 540; c.arcs[6][11].adj = 240;
	c.arcs[7][8].adj = 120; c.arcs[7][10].adj = 50;
	c.arcs[8][9].adj = 210; 
	c.arcs[10][11].adj = 408;
	for (i = 1; i <= key; i++)//�ڽӾ����ǶԳƾ��󣬶ԳƸ�ֵ������ͼ��Ҫ�ԳƸ�ֵ�� 
		for (j = 1; j <= key; j++)
			c.arcs[j][i].adj = c.arcs[i][j].adj;
	return c;
}

//��ѯ�������
void introduction()
{
	campus= initgraph();
	int i = 0;
	int choice = 0;
	while(1){
		rewind(stdin);//��ջ�����
		printf("��������Ҫ��ѯ�ľ�����:\n");
		scanf("%d", &i);
		switch (i){
		case 1:
			printf("%s:\n%s\n\n", campus.vexs[1].name, campus.vexs[1].introduction);
			break;
		case 2:
			printf("%s:\n%s\n\n", campus.vexs[2].name, campus.vexs[2].introduction);
			break;
		case 3:
			printf("%s:\n%s\n\n", campus.vexs[3].name, campus.vexs[3].introduction);
			break;
		case 4:
			printf("%s:\n%s\n\n", campus.vexs[4].name, campus.vexs[4].introduction);
			break;
		case 5:
			printf("%s:\n%s\n\n", campus.vexs[5].name, campus.vexs[5].introduction);
			break;
		case 6:
			printf("%s:\n%s\n\n", campus.vexs[6].name, campus.vexs[6].introduction);
			break;
		case 7:
			printf("%s:\n%s\n\n", campus.vexs[7].name, campus.vexs[7].introduction);
			break;
		case 8:
			printf("%s:\n%s\n\n", campus.vexs[8].name, campus.vexs[8].introduction);
			break;
		case 9:
			printf("%s:\n%s\n\n", campus.vexs[9].name, campus.vexs[9].introduction);
			break;
		case 10:
			printf("%s:\n%s\n\n", campus.vexs[10].name, campus.vexs[10].introduction);
			break;
		case 11:
			printf("%s:\n%s\n\n", campus.vexs[11].name, campus.vexs[11].introduction);
			break;
		case 0:
			printf("��Ϣ�������\n\n");
			continue;
		default:
			printf("��Ϣ�������\n\n");
			continue;
		}
		printf("�Ƿ��������ѯ��(yes:1 / no:else )��");
		rewind(stdin);//��ջ�����
		scanf("%d", &choice);
		if (choice != 1) 
		{
			break;
		}
		system("cls");
	}
	printf("\n");
}
