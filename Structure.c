#pragma warning (disable : 4996)
#include <stdio.h>
typedef struct point {
    int xpos;
    int ypos;
}point;
int main() {
    point arr[3];
    arr[0].xpos = 10;  // (*arr).xpos = 10;
    arr[0].ypos = 10;  // (*arr).ypos = 10;
    arr[1].xpos = 20;  // (*(*arr+1)).xpos = 20;
    arr[1].ypos = 20;  // (*(*arr+1)).ypos = 20;
    arr[2].xpos = 30;  // (*(*arr+2)).xpos = 30;
    arr[2].ypos = 30;  // (*(*arr+2)).xpos = 30;
    for (int i = 0; i < 3; i++) {
        printf("%d", arr[i]);
    }
}
*/
/*
typedef struct point {
   int xpos;
   int ypos;
}point;
int main() {
   point arr[3];
   int i;
   for (i = 0; i < 3; i++) {
      printf("���� ��ǥ �Է� : ");
      scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
   }
   for (i = 0; i < 3; i++) {
      printf("[%d %d]", arr[i].xpos, arr[i].ypos);
   }
   return 0;
}
*/
/*
typedef struct person {
   char name[20];
   char phoneNum[20];
   int age;
}person;
int main() {
   int i;
   person arr[3]; // = {
      //{"ȫ�浿", "010-1111-2222", 10},
      //{"������", "010-3333-4444", 20},
      //{"���̹�", "010-5555-6666", 30}
   //};
   for (i = 0; i < 3; i++) {
      scanf("%s %s %d", arr[i].name, arr[i].phoneNum, &arr[i].age);
   }
   for (i = 0; i < 3; i++) {
      printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
      // printf("%s %s %d \n", (*(arr+i)).name, (*(arr + i)).phoneNum, (*(arr + i)).age);
   }
   return 0;
}
*/
/*
typedef struct point {
   int xpos;
   int ypos;
}point;
int main() {
   point pos = { 30, 40 };
   point* ptr = &pos;
   // ������ ���� ptr�� ����ü ���� pos�� ����Ŵ
   (*ptr).xpos = 30;
   (*ptr).ypos = 40;
   ptr->xpos = 30;  // ptr�� ����Ű�� ����ü ������ ��� xpos�� 30 ����
   // -> �̰� ������ ptr�� ��������. ���� (*ptr).xpos = 30;�� ��ȯ�� ����.
   ptr->ypos = 40;  // ptr�� ����Ű�� ����ü ������ ��� ypos�� 40 ����
}
*/
/*
typedef struct person {
   int age;
   char name[101];
   int join;
} person;
person arr[100001];
int main() {
   int n, i;
   scanf("%d", &n);
   for (i = 1; i <= n; i++) {
      scanf("%d %s", &arr[i].age, arr[i].name);
      arr[i].join = i;
   }
   person* ptr = arr;
   printf("\n���\n");
   for (i = 1; i <= n; i++) {
      printf("%d %s\n", (ptr + i)->age, (ptr + i)->name);
   }
}
*/
/*
typedef struct point {
   int xpos;
   int ypos;
}point;
typedef struct circle {
   double redius;
   point* center;
}circle;
int main() {
   point can = { 2,7 };
   double rad = 5.5;
   circle ring = { rad, &can };
   printf("���� ������ : %g\n", ring.redius);
   printf("���� �߽� [%d %d] \n", (ring.center)->xpos, (ring.center)->ypos);
   return 0;
}
*/
/*
typedef struct point {
   int xpos;
   int ypos;
} Point;
Point Add(Point po1, Point po2); //�Լ� ����
int main() {
   Point p1 = { 10,20 };
   Point p2 = { 100,200 };
   Point p3 = Add(p1, p2);
   printf("p1 : [%d, %d]\n", p1.xpos, p1.ypos);
   printf("p2 : [%d, %d]\n", p2.xpos, p2.ypos);
   printf("Add(p1, p2) : [%d, %d]\n", p3.xpos, p3.ypos);
}
//�Լ� ����
Point Add(Point po1, Point po2) {
   //���⼭�� ���� �����߱� ������ ���⼭ �ƹ��� �ٲپ main�� ���� �ٲ��� ����.
   Point res;
   res.xpos = po1.xpos + po2.xpos;
   res.ypos = po1.ypos + po2.ypos;
   return res;
}
*/
/*
typedef struct point {
   int xpos;
   int ypos;
} point;
point SwapPoint(point* p1, point* p2);
int main() {
   point p1 = { 2,4 };
   point p2 = { 5,7 };
   printf("��  p1 : %d %d    p2 : %d %d\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
   SwapPoint(&p1, &p2);
   printf("��  p1 : %d %d    p2 : %d %d", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
}
point SwapPoint(point* p1, point* p2) {
   point p3;
   p3 = *p1;
   *p1 = *p2;
   *p2 = p3;
}
*/

