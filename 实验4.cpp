//�����еĽ��Ӻͳ����㷨
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
//#define len sizeof(qnode)
typedef struct qnode
{ 
	int data;
    struct qnode *link;
}qnode;
typedef struct
{
	qnode *front;
     qnode  *rear;
}qlink;
	
int initialqlink(qlink *q)      //��ʼ��һ������
{
	q->front=q->rear=(qnode*)malloc(sizeof(qnode));
	if(!q->front)
		exit(-2);
	q->rear->link=NULL;
	return 1;
}

int insert(qlink *q,int item)
{
	//front��rear�ֱ�ָ���ͷԪ�غͶ�βԪ�����ڵ����ӵ�
	qnode *p;
	p=(qnode*)malloc(sizeof(qnode));
	if(!p)                         //�������ʧ��
	return 0;
	p->data=item;                  //��item�����½���������
	p->link=NULL;                  //�½���ָ�����ÿ�
    q->rear->link=p;
	q->rear=p;
	return 1;
}
int delet(qlink *q)            
{
	qnode *p;                   
	int i;
	printf("\n the number of out queue:");
	scanf("%d",&i);                       //�����ж��ٸ�
	while(i)
	{
		p=q->front;
		q->front=q->front->link;
		free(p);
		i--;
	}
	p=NULL;            //NULL����Ϊ��д
	return 1;
}
int show(qlink q)
{
   qnode *p;
   p=q.front->link;
   printf("the queue is:");
   while(!p)
   {
	   printf("%d\t",p->data);
	   p=p->link;
   }
   return 1;
}

void main()
{
   int i=1;
   qlink queue;
  // queue=(qnode*)malloc(sizeof(qnode));
   initialqlink(&queue);
   int item;
   printf("input the item:");
   do
   {
	   scanf("%d",&item);
	   insert(&queue,item);
   }while(item);
   printf("\n");
   show(queue);
   delet(&queue);
   show(queue);
   printf("\n");
}






//ѭ�����еĽ��Ӻͳ����㷨
/*#include<stdio.h>
#include<malloc.h>
#define maxsize 100
typedef struct queue
{
  int *base;
  int front,rear;
}queue;
queue q;

void add(queue &q,int n)
{
     int i;
	 q.base=(int*)malloc(maxsize*sizeof(int));
	 if(n>maxsize-1)
	    printf("error!\n");
	 q.front=q.rear=0;
	 printf("input the numbers:\n");
	 for(q.rear=0;q.rear<n;q.rear++)
	 {
	   scanf("%d",&i);
	   q.base[q.rear]=i;
	 }
}

int show(queue q)
{
  if(q.front==q.rear)
  {
     printf("NULL!\n");
	 return 0;
  }
  int p;
  p=q.front;
  while(p!=q.rear)
  {
     printf("%d\t",q.base[p%maxsize]);
	 p++;
  }
  printf("\n");
  return 1;
 }

int insert(queue &q,int i)
{
   if((q.rear+1)%maxsize==q.front)
   {
      printf("full!\n");
	  return 0;
	}
	q.base[q.rear]=i;
	q.rear=(q.rear+1)%maxsize;
	return 1;
}
int delet(queue &q)
{
   int i;
   if(q.front==q.rear)
   {
      printf("null!\n");
	  return 0;
	}
	i=q.base[q.front];
	q.front=(q.front+1)%maxsize;
	printf("number:%d\n",i);
	return 1;
}
void main()
{
   int n,i;
   printf("length:");
   scanf("%d",&n);
   add(q,n);
   show(q);
   printf("insert the number:");
   scanf("%d",&i);
   insert(q,i);
   delet(q);
   show(q);
 }
*/










