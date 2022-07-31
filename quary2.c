//quary2.c
#include"data_structure.h"
void Dijkstra(mgraph c,int v0,int p[],int d[])
{
    int v, w, k = 1, min, t;
    int final[MaxVertexNum]; 
    //��ʼ������
    for (v = 1; v <= c.vexnum; v++) 
    {
        final[v] = 0;
        d[v] = c.arcs[v0][v].adj; 
        p[v] = 0;
    }
    //�Ƚ��������ϼ�
    d[v0] = 0; 
    final[v0] = 1;

    //ÿ�����V0��ĳ��v��������·�� 
    for (v = 1; v <= c.vexnum; v++)
    {
        min = Infinity;
        for (w = 1; w <= c.vexnum; w++)//�ҳ�����Ķ����Ȩֵ 
        {
            if (!final[w] && d[w] < min)//�б� 
            {
                k = w;
                min = d[w];
            }
        }
        final[k] = 1;//��Ŀǰ�ҵ�������Ķ�����1 
        //������ǰ���·��������
        for (w = 1; w <= c.vexnum; w++)
        {	//�����¼��vʹ·�����̵Ļ�
            if (!final[w] && (min + c.arcs[k][w].adj < d[w]))
            {
                d[w] = min + c.arcs[k][w].adj;//�޸ĵ�ǰ·������
                p[w] = k; //����·��
            }
        }
    }
}
int allshortdistance(mgraph c) {
    int p[12] = { 0 };   // ��¼���� 0 �������������̵�·��
    int d[12] = { 0 };   // ��¼���� 0 �������������Ȩֵ
    while (1)
    {
        int v = 0;
        printf("������Ҫ��ѯ�ľ�������ֱ�ţ�1->11����");
        rewind(stdin);//��ջ�����
        scanf("%d", &v);
        if (v <= 11)
        {
            system("cls");
            Dijkstra(c, v, p, d);
            printf("%d%s��������������·���У�\n\n",v,c.vexs[v].name);
            for (int i = c.vexnum; i >= 1; i--) {
                int a[11] = { 0 };//·���ݴ�����
                printf("%d%s-->", v, c.vexs[v].name);
                int j = i;
                //����Ƕ�׵ķ�ʽ����������·���ϵ����ж���
                int k = 0;
                while (p[j] != 0) {
                    a[k++] = p[j];
                    j = p[j];
                }
                //�������
                for (int i = 10; i >= 0; i--)
                {
                    if(a[i]!=0)
                    printf("%d%s-->",a[i],c.vexs[a[i]].name);
                }
                printf("%d%s\n", i, c.vexs[i].name);
                printf("�����·������Ϊ:%d��\n\n", d[i]);
            }
            int choice = 0;
            printf("�Ƿ��������ѯ��(yes:1 / no:else )��");
            rewind(stdin);//��ջ�����
            scanf("%d", &choice);
            if (choice != 1) {
                printf("\n");
                break;
            }
            system("cls");
        }
        else
        {
            printf("��Ϣ����������������룡\n\n");
            continue;
        }
    }
    return 0;
}